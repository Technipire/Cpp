// MainClass.java

public class MainClass
{
	public static void test(RightAngledQuadrilateral aRightAngledQuadrilateral)
	{
		System.out.println("height == " + aRightAngledQuadrilateral.getHeight());

		System.out.println("width  == " + aRightAngledQuadrilateral.getWidth());

		System.out.println("isSquare == " + aRightAngledQuadrilateral.isSquare());

		System.out.println();
	}

	public static void main(String[] args)
	{
		{
			RightAngledQuadrilateral aRightAngledQuadrilateral = new RightAngledQuadrilateral(3.0, 4.0);
			test(aRightAngledQuadrilateral);
		}

		{
			RightAngledQuadrilateral aRightAngledQuadrilateral = new RightAngledQuadrilateral(3.0, 4.0);
			aRightAngledQuadrilateral.setHeight(aRightAngledQuadrilateral.getWidth());
			test(aRightAngledQuadrilateral);
		}

		{
			RightAngledQuadrilateral aRightAngledQuadrilateral = new RightAngledQuadrilateral(3.0, 4.0);
			aRightAngledQuadrilateral.setWidth(aRightAngledQuadrilateral.getHeight());
			test(aRightAngledQuadrilateral);
		}

		{
			RightAngledQuadrilateral aRightAngledQuadrilateral = new RightAngledQuadrilateral(3.0, 4.0);
			aRightAngledQuadrilateral.setSide(2.0);
			test(aRightAngledQuadrilateral);
		}

		{
			RightAngledQuadrilateral aRightAngledQuadrilateral = new RightAngledQuadrilateral(2.0);
			test(aRightAngledQuadrilateral);
		}

		{
			RightAngledQuadrilateral aRightAngledQuadrilateral = new RightAngledQuadrilateral(2.0);
			aRightAngledQuadrilateral.setHeight(3.0);
			test(aRightAngledQuadrilateral);
		}

		{
			RightAngledQuadrilateral aRightAngledQuadrilateral = new RightAngledQuadrilateral(2.0);
			aRightAngledQuadrilateral.setWidth(3.0);
			test(aRightAngledQuadrilateral);
		}
	}
}
