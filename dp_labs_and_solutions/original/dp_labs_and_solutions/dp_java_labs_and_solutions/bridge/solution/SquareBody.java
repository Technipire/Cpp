// SquareBody.java

class SquareBody extends RightAngledQuadrilateralBody
{
	public SquareBody(double aSide)
	{
		mySide = aSide;
	}

	public double getHeight()
	{
		return mySide;
	}

	public double getWidth()
	{
		return mySide;
	}

	public boolean isSquare()
	{
		return true;
	}

	private double mySide;
}
