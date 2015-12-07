// UseClass.java

import java.io.*;

public class UseClass
{
	public static void use(Expression aExpression)
	{
		OutputStreamWriter aOutputStreamWriter = new OutputStreamWriter(System.out);
		BufferedWriter aBufferedWriter = new BufferedWriter(aOutputStreamWriter);
		PrintWriter aPrintWriter = new PrintWriter(aBufferedWriter);

		if (aExpression == null)
		{
			throw new DpException("void UseClass.use(Expression aExpression) -- aExpression == null.");
		}
		OutputExpressionVisitor aOutputExpressionVisitor = new OutputExpressionVisitor(aPrintWriter);
		aExpression.accept(aOutputExpressionVisitor);
		aPrintWriter.println();
		aPrintWriter.flush();

		if (aExpression == null)
		{
			throw new DpException("void UseClass.use(Expression aExpression) -- aExpression == null.");
		}
		GetNumberOfUsesOfVariableExpressionVisitor aGetNumberOfUsesOfVariableExpressionVisitorA = new GetNumberOfUsesOfVariableExpressionVisitor("a");
		aExpression.accept(aGetNumberOfUsesOfVariableExpressionVisitorA);
		System.out.println(aGetNumberOfUsesOfVariableExpressionVisitorA.getNumberOfUsesOfVariable());

		if (aExpression == null)
		{
			throw new DpException("void UseClass.use(Expression aExpression) -- aExpression == null.");
		}
		GetNumberOfUsesOfVariableExpressionVisitor aGetNumberOfUsesOfVariableExpressionVisitorB = new GetNumberOfUsesOfVariableExpressionVisitor("b");
		aExpression.accept(aGetNumberOfUsesOfVariableExpressionVisitorB);
		System.out.println(aGetNumberOfUsesOfVariableExpressionVisitorB.getNumberOfUsesOfVariable());

		if (aExpression == null)
		{
			throw new DpException("void UseClass.use(Expression aExpression) -- aExpression == null.");
		}
		GetNumberOfUsesOfVariableExpressionVisitor aGetNumberOfUsesOfVariableExpressionVisitorC = new GetNumberOfUsesOfVariableExpressionVisitor("c");
		aExpression.accept(aGetNumberOfUsesOfVariableExpressionVisitorC);
		System.out.println(aGetNumberOfUsesOfVariableExpressionVisitorC.getNumberOfUsesOfVariable());

		DpMap<String, Double> aMap = new DpMap<String, Double>();

		aMap.put("a",  3.0);
		aMap.put("b", 10.0);
		aMap.put("c",  7.0);

		if (aExpression == null)
		{
			throw new DpException("void UseClass.use(Expression aExpression) -- aExpression == null.");
		}
		GetValueExpressionVisitor aGetValueExpressionVisitor = new GetValueExpressionVisitor(aMap);
		aExpression.accept(aGetValueExpressionVisitor);
		System.out.println(aGetValueExpressionVisitor.getValue());
	}
}
