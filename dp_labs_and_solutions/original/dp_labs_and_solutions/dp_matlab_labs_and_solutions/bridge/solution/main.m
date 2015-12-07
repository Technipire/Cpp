% main.m

function main
	aRightAngledQuadrilateral = RightAngledQuadrilateral(3.0, 4.0);
	test(aRightAngledQuadrilateral);

	aRightAngledQuadrilateral = RightAngledQuadrilateral(3.0, 4.0);
	aRightAngledQuadrilateral.setHeight(aRightAngledQuadrilateral.getWidth());
	test(aRightAngledQuadrilateral);

	aRightAngledQuadrilateral = RightAngledQuadrilateral(3.0, 4.0);
	aRightAngledQuadrilateral.setWidth(aRightAngledQuadrilateral.getHeight());
	test(aRightAngledQuadrilateral);

	aRightAngledQuadrilateral = RightAngledQuadrilateral(3.0, 4.0);
	aRightAngledQuadrilateral.setSide(2.0);
	test(aRightAngledQuadrilateral);

	aRightAngledQuadrilateral = RightAngledQuadrilateral(2.0);
	test(aRightAngledQuadrilateral);

	aRightAngledQuadrilateral = RightAngledQuadrilateral(2.0);
	aRightAngledQuadrilateral.setHeight(3.0);
	test(aRightAngledQuadrilateral);

	aRightAngledQuadrilateral = RightAngledQuadrilateral(2.0);
	aRightAngledQuadrilateral.setWidth(3.0);
	test(aRightAngledQuadrilateral);
end
