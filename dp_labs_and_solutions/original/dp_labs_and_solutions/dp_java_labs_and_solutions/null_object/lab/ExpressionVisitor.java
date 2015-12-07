// ExpressionVisitor.java

public abstract class ExpressionVisitor
{
	public void visit(BinaryMinus aBinaryMinus)
	{
		if (aBinaryMinus.getOperand1() == null)
		{
			throw new DpException("void ExpressionVisitor.visit(BinaryMinus aBinaryMinus) -- aBinaryMinus.getOperand1() == null.");
		}
		aBinaryMinus.getOperand1().accept(this);
		if (aBinaryMinus.getOperand2() == null)
		{
			throw new DpException("void ExpressionVisitor.visit(BinaryMinus aBinaryMinus) -- aBinaryMinus.getOperand2() == null.");
		}
		aBinaryMinus.getOperand2().accept(this);
	}

	public void visit(BinaryPlus aBinaryPlus)
	{
		if (aBinaryPlus.getOperand1() == null)
		{
			throw new DpException("void ExpressionVisitor.visit(BinaryPlus aBinaryPlus) -- aBinaryPlus.getOperand1() == null.");
		}
		aBinaryPlus.getOperand1().accept(this);
		if (aBinaryPlus.getOperand2() == null)
		{
			throw new DpException("void ExpressionVisitor.visit(BinaryPlus aBinaryPlus) -- aBinaryPlus.getOperand2() == null.");
		}
		aBinaryPlus.getOperand2().accept(this);
	}

	public void visit(Conditional aConditional)
	{
		if (aConditional.getOperand1() == null)
		{
			throw new DpException("void ExpressionVisitor.visit(Conditional aConditional) -- aConditional.getOperand1() == null.");
		}
		aConditional.getOperand1().accept(this);
		if (aConditional.getOperand2() == null)
		{
			throw new DpException("void ExpressionVisitor.visit(Conditional aConditional) -- aConditional.getOperand2() == null.");
		}
		aConditional.getOperand2().accept(this);
		if (aConditional.getOperand3() == null)
		{
			throw new DpException("void ExpressionVisitor.visit(Conditional aConditional) -- aConditional.getOperand3() == null.");
		}
		aConditional.getOperand3().accept(this);
	}

	public void visit(Divide aDivide)
	{
		if (aDivide.getOperand1() == null)
		{
			throw new DpException("void ExpressionVisitor.visit(Divide aDivide) -- aDivide.getOperand1() == null.");
		}
		aDivide.getOperand1().accept(this);
		if (aDivide.getOperand2() == null)
		{
			throw new DpException("void ExpressionVisitor.visit(Divide aDivide) -- aDivide.getOperand2() == null.");
		}
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
			if (aOperand == null)
			{
				throw new DpException("void ExpressionVisitor.visit(MethodInvocation aMethodInvocation) -- aOperand == null.");
			}
			aOperand.accept(this);
			aIterator.advance();
		}
	}

	public void visit(Multiply aMultiply)
	{
		if (aMultiply.getOperand1() == null)
		{
			throw new DpException("void ExpressionVisitor.visit(Multiply aMultiply) -- aMultiply.getOperand1() == null.");
		}
		aMultiply.getOperand1().accept(this);
		if (aMultiply.getOperand2() == null)
		{
			throw new DpException("void ExpressionVisitor.visit(Multiply aMultiply) -- aMultiply.getOperand2() == null.");
		}
		aMultiply.getOperand2().accept(this);
	}

	public void visit(UnaryMinus aUnaryMinus)
	{
		if (aUnaryMinus.getOperand1() == null)
		{
			throw new DpException("void ExpressionVisitor.visit(UnaryMinus aUnaryMinus) -- aUnaryMinus.getOperand1() == null.");
		}
		aUnaryMinus.getOperand1().accept(this);
	}

	public void visit(UnaryPlus aUnaryPlus)
	{
		if (aUnaryPlus.getOperand1() == null)
		{
			throw new DpException("void ExpressionVisitor.visit(UnaryPlus aUnaryPlus) -- aUnaryPlus.getOperand1() == null.");
		}
		aUnaryPlus.getOperand1().accept(this);
	}

	public void visit(Variable aVariable)
	{
	}
}
