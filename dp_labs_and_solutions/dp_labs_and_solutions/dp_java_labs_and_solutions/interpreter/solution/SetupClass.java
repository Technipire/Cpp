// SetupClass.java

public class SetupClass
{
	public static Expression setup()
	{
		ExpressionParser aExpressionParser = new ExpressionParser();

		ExpressionTreeBuilder aExpressionTreeBuilder = new ExpressionTreeBuilder();

		aExpressionParser.parse(aExpressionTreeBuilder);

		Expression aExpression = aExpressionTreeBuilder.getTree();

		return aExpression;
	}
}
