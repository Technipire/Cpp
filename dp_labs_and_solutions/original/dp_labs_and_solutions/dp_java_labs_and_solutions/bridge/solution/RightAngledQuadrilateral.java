// RightAngledQuadrilateral.java

public class RightAngledQuadrilateral
{
	public RightAngledQuadrilateral(double aHeight, double aWidth)
	{
		myBody = makeBody(aHeight, aWidth);
	}

	public RightAngledQuadrilateral(double aSide)
	{
		myBody = makeBody(aSide, aSide);
		// or:
		myBody = new SquareBody(aSide);
	}

	public void setHeight(double aHeight)
	{
		myBody = makeBody(aHeight, getWidth());
	}

	public void setWidth(double aWidth)
	{
		myBody = makeBody(getHeight(), aWidth);
	}

	public void setSide(double aSide)
	{
		myBody = makeBody(aSide, aSide);
		// or:
		myBody = new SquareBody(aSide);
	}

	public double getHeight()
	{
		return myBody.getHeight();
	}

	public double getWidth()
	{
		return myBody.getWidth();
	}

	public boolean isSquare()
	{
		return myBody.isSquare();
	}

	private static RightAngledQuadrilateralBody makeBody(double aHeight, double aWidth)
	{
		if (aHeight == aWidth)
		{
			return new SquareBody(aHeight);
		}
		else
		{
			return new RectangleBody(aHeight, aWidth);
		}
	}

	private RightAngledQuadrilateralBody myBody;
}
