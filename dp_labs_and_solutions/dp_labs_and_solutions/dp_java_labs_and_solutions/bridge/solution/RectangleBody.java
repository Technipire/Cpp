// RectangleBody.java

class RectangleBody extends RightAngledQuadrilateralBody
{
	public RectangleBody(double aHeight, double aWidth)
	{
		myHeight = aHeight;
		myWidth  = aWidth ;
	}

	public double getHeight()
	{
		return myHeight;
	}

	public double getWidth()
	{
		return myWidth;
	}

	public boolean isSquare()
	{
		return false;
	}

	private double myHeight;
	private double myWidth ;
}
