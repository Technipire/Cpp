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
		aExpression.output(aPrintWriter);
		aPrintWriter.println();
		aPrintWriter.flush();

		if (aExpression == null)
		{
			throw new DpException("void UseClass.use(Expression aExpression) -- aExpression == null.");
		}
		System.out.println(aExpression.getNumberOfUsesOfVariable("a"));

		if (aExpression == null)
		{
			throw new DpException("void UseClass.use(Expression aExpression) -- aExpression == null.");
		}
		System.out.println(aExpression.getNumberOfUsesOfVariable("b"));

		if (aExpression == null)
		{
			throw new DpException("void UseClass.use(Expression aExpression) -- aExpression == null.");
		}
		System.out.println(aExpression.getNumberOfUsesOfVariable("c"));

		DpMap<String, Double> aMap = new DpMap<String, Double>();

		aMap.put("a",  3.0);
		aMap.put("b", 10.0);
		aMap.put("c",  7.0);

		if (aExpression == null)
		{
			throw new DpException("void UseClass.use(Expression aExpression) -- aExpression == null.");
		}
		System.out.println(aExpression.getValue(aMap));
	}
}
