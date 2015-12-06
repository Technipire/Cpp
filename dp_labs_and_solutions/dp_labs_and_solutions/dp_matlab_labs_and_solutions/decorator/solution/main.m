% main.m

function main
	aVector = DpVector;
	aVector.add('coffee');
	aVector.add('milk');
	aVector.add('sugar');

	aBarista = Barista;

	aCoffee = aBarista.makeBeverage(aVector);

	mainHelper('coffee with milk with sugar', aCoffee);

	aVector = DpVector;
	aVector.add('coffee');
	aVector.add('milk');

	aBarista = Barista;

	aCoffee = aBarista.makeBeverage(aVector);

	mainHelper('coffee with milk', aCoffee);

	aVector = DpVector;
	aVector.add('coffee');
	aVector.add('sugar');

	aBarista = Barista;

	aCoffee = aBarista.makeBeverage(aVector);

	mainHelper('coffee with sugar', aCoffee);

	aVector = DpVector;
	aVector.add('coffee');

	aBarista = Barista;

	aCoffee = aBarista.makeBeverage(aVector);

	mainHelper('coffee', aCoffee);
end
