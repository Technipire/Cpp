% testVector.m

function testVector
	aVector = DpVector;
	displayVector(aVector);
	displayReverseVector(aVector);

	aVector.add(1);
	displayVector(aVector);
	displayReverseVector(aVector);

	aVector.add(2);
	displayVector(aVector);
	displayReverseVector(aVector);
end

function displayVector(aVector)
	fprintf('displayVector(aVector): <front> ');
	aIterator = aVector.makeIterator;
	while ~aIterator.isDone
		aValue = aIterator.getCurrent;
		fprintf('%d ', aValue);
		aIterator.advance;
	end
	fprintf('<back> (size = %d)\n', aVector.getSize);
end

function displayReverseVector(aVector)
	fprintf('displayReverseVector(aVector): <back> ');
	aIterator = aVector.makeReverseIterator;
	while ~aIterator.isDone
		aValue = aIterator.getCurrent;
		fprintf('%d ', aValue);
		aIterator.advance;
	end
	fprintf('<front> (size = %d)\n', aVector.getSize);
end
