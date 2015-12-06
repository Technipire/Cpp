// Square.java

class Square extends RightAngledQuadrilateral
{
	public Square(double aSide)
	{
		setSide(aSide);
	}

	public double getSide()
	{
		return mySide;
	}

	public void setSide(double aSide)
	{
		mySide = aSide;
	}

	private double mySide;
}
