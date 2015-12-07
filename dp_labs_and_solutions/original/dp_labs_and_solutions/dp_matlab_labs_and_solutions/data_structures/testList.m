% testList.m

function testList
	aList = DpList;
	displayList(aList);

	aList.add(1);
	displayList(aList);

	aList.add(2);
	displayList(aList);
end

function displayList(aList)
	fprintf('displayList(aList): <front> ');
	aIterator = aList.makeIterator;
	while ~aIterator.isDone
		aValue = aIterator.getCurrent;
		fprintf('%d ', aValue);
		aIterator.advance;
	end
	fprintf('<back> (size = %d)\n', aList.getSize);
end
