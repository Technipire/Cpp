// OutputExpressionVisitor.java

import java.io.PrintWriter;

public class OutputExpressionVisitor extends ExpressionVisitor
{
	public OutputExpressionVisitor(PrintWriter aPrintWriter)
	{
		myPrintWriter = aPrintWriter;
	}

	public void visit(BinaryMinus aBinaryMinus)
	{
		outputInfix(aBinaryMinus, "-");
	}

	public void visit(BinaryPlus aBinaryPlus)
	{
		outputInfix(aBinaryPlus, "+");
	}

	public void visit(Conditional aConditional)
	{
		outputInfix(aConditional, "?", ":");
	}

	public void visit(Divide aDivide)
	{
		outputInfix(aDivide, "/");
	}

	public void visit(Literal aLiteral)
	{
		myPrintWriter.print(aLiteral.getValue());
	}

	public void visit(MethodInvocation aMethodInvocation)
	{
		myPrintWriter.print(aMethodInvocation.getName());
		myPrintWriter.print("(");
		boolean isFirst = true;
		DpIterator<Expression> aIterator = aMethodInvocation.getOperands();
		while (!aIterator.isDone())
		{
			if (isFirst)
			{
				isFirst = false;
			}
			else
			{
				myPrintWriter.print(",");
			}
			Expression aOperand1 = aIterator.getCurrent();
			aOperand1.accept(this);
			aIterator.advance();
		}
		myPrintWriter.print(")");
	}

	public void visit(Multiply aMultiply)
	{
		outputInfix(aMultiply, "*");
	}

	public void visit(NullExpression aNullExpression)
	{
		myPrintWriter.print("NULL");
	}

	public void visit(UnaryMinus aUnaryMinus)
	{
		outputPrefix(aUnaryMinus, "-");
	}

	public void visit(UnaryPlus aUnaryPlus)
	{
		outputPrefix(aUnaryPlus, "+");
	}

	public void visit(Variable aVariable)
	{
		myPrintWriter.print(aVariable.getName());
	}

	private void outputPrefix(Unary aUnary, String aOperator)
	{
		myPrintWriter.print("(");
		myPrintWriter.print(aOperator);
		aUnary.getOperand1().accept(this);
		myPrintWriter.print(")");
	}

	private void outputPostfix(Unary aUnary, String aOperator)
	{
		myPrintWriter.print("(");
		aUnary.getOperand1().accept(this);
		myPrintWriter.print(aOperator);
		myPrintWriter.print(")");
	}

	private void outputInfix(Binary aBinary, String aOperator)
	{
		myPrintWriter.print("(");
		aBinary.getOperand1().accept(this);
		myPrintWriter.print(aOperator);
		aBinary.getOperand2().accept(this);
		myPrintWriter.print(")");
	}

	private void outputInfix(Ternary aTernary, String aOperator1, String aOperator2)
	{
		myPrintWriter.print("(");
		aTernary.getOperand1().accept(this);
		myPrintWriter.print(aOperator1);
		aTernary.getOperand2().accept(this);
		myPrintWriter.print(aOperator2);
		aTernary.getOperand3().accept(this);
		myPrintWriter.print(")");
	}

	private PrintWriter myPrintWriter;
}
