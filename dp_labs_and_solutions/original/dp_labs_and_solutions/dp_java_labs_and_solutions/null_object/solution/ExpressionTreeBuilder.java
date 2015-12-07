// ExpressionTreeBuilder.java

public class ExpressionTreeBuilder extends ExpressionBuilder
{
	public ExpressionTreeBuilder()
	{
		myStack = new DpStack<Expression>();
	}

	public void buildBinaryMinus()
	{
		Expression aOperand2 = myStack.top(); myStack.pop();
		Expression aOperand1 = myStack.top(); myStack.pop();

		myStack.push(new BinaryMinus(aOperand1, aOperand2));
	}

	public void buildBinaryPlus()
	{
		Expression aOperand2 = myStack.top(); myStack.pop();
		Expression aOperand1 = myStack.top(); myStack.pop();

		myStack.push(new BinaryPlus(aOperand1, aOperand2));
	}

	public void buildConditional()
	{
		Expression aOperand3 = myStack.top(); myStack.pop();
		Expression aOperand2 = myStack.top(); myStack.pop();
		Expression aOperand1 = myStack.top(); myStack.pop();

		myStack.push(new Conditional(aOperand1, aOperand2, aOperand3));
	}

	public void buildDivide()
	{
		Expression aOperand2 = myStack.top(); myStack.pop();
		Expression aOperand1 = myStack.top(); myStack.pop();

		myStack.push(new Divide(aOperand1, aOperand2));
	}

	public void buildLiteral(int aValue)
	{
		myStack.push(LiteralFlyweightFactory.getInstance().getFlyweightFor(aValue));
	}

	public void buildMethodInvocation(String aName, int aNumberOfParameters)
	{
		MethodInvocation aMethodInvocation = new MethodInvocation(aName);

		DpStack<Expression> aStack = new DpStack<Expression>();

		for (int i = 1; i <= aNumberOfParameters; ++i)
		{
			Expression aOperand = myStack.top(); myStack.pop();

			aStack.push(aOperand);
		}

		for (int i = 1; i <= aNumberOfParameters; ++i)
		{
			Expression aOperand = aStack.top(); aStack.pop();

			aMethodInvocation.addOperand(aOperand);
		}

		myStack.push(aMethodInvocation);
	}

	public void buildMultiply()
	{
		Expression aOperand2 = myStack.top(); myStack.pop();
		Expression aOperand1 = myStack.top(); myStack.pop();

		myStack.push(new Multiply(aOperand1, aOperand2));
	}

	public void buildNullExpression()
	{
		myStack.push(new NullExpression());
	}

	public void buildUnaryMinus()
	{
		Expression aOperand1 = myStack.top(); myStack.pop();

		myStack.push(new UnaryMinus(aOperand1));
	}

	public void buildUnaryPlus()
	{
		Expression aOperand1 = myStack.top(); myStack.pop();

		myStack.push(new UnaryPlus(aOperand1));
	}

	public void buildVariable(String aName)
	{
		myStack.push(VariableFlyweightFactory.getInstance().getFlyweightFor(aName));
	}

	public Expression getTree()
	{
		if (myStack.isEmpty())
		{
			throw new DpException("Expression ExpressionTreeBuilder.getTree() -- myStack.isEmpty().");
		}

		Expression result = myStack.top();

		return result;
	}

	private DpStack<Expression> myStack;
}
