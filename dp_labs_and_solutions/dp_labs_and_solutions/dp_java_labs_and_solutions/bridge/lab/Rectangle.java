// Rectangle.java

class Rectangle extends RightAngledQuadrilateral
{
	public Rectangle(double aHeight, double aWidth)
	{
		setHeight(aHeight);
		setWidth (aWidth );
	}

	public double getHeight()
	{
		return myHeight;
	}

	public double getWidth()
	{
		return myWidth;
	}

	public void setHeight(double aHeight)
	{
		myHeight = aHeight;
	}

	public void setWidth(double aWidth)
	{
		myWidth = aWidth;
	}

	private double myHeight;
	private double myWidth ;
}
