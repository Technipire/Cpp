// ExpressionVisitor.java

public abstract class ExpressionVisitor
{
	public void visit(BinaryMinus aBinaryMinus)
	{
		aBinaryMinus.getOperand1().accept(this);
		aBinaryMinus.getOperand2().accept(this);
	}

	public void visit(BinaryPlus aBinaryPlus)
	{
		aBinaryPlus.getOperand1().accept(this);
		aBinaryPlus.getOperand2().accept(this);
	}

	public void visit(Conditional aConditional)
	{
		aConditional.getOperand1().accept(this);
		aConditional.getOperand2().accept(this);
		aConditional.getOperand3().accept(this);
	}

	public void visit(Divide aDivide)
	{
		aDivide.getOperand1().accept(this);
		aDivide.getOperand2().accept(this);
	}

	public void visit(Literal aLiteral)
	{
	}

	public void visit(MethodInvocation aMethodInvocation)
	{
		DpIterator<Expression> aIterator = aMethodInvocation.getOperands();
		while (!aIterator.isDone())
		{
			Expression aOperand = aIterator.getCurrent();
			aOperand.accept(this);
			aIterator.advance();
		}
	}

	public void visit(Multiply aMultiply)
	{
		aMultiply.getOperand1().accept(this);
		aMultiply.getOperand2().accept(this);
	}

	public void visit(NullExpression aNullExpression)
	{
	}

	public void visit(UnaryMinus aUnaryMinus)
	{
		aUnaryMinus.getOperand1().accept(this);
	}

	public void visit(UnaryPlus aUnaryPlus)
	{
		aUnaryPlus.getOperand1().accept(this);
	}

	public void visit(Variable aVariable)
	{
	}
}
