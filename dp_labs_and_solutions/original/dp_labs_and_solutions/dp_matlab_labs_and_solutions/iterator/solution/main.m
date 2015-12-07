% main.m

function main
	aList = DpList;

	fprintf('List of length 0:\n');
	UseClass.Use(aList.makeReverseIterator);
	fprintf('\n');

	aList.add(1);

	fprintf('List of length 1:\n');
	UseClass.Use(aList.makeReverseIterator);
	fprintf('\n');

	aList.add(2);

	fprintf('List of length 2:\n');
	UseClass.Use(aList.makeReverseIterator);
	fprintf('\n');

	aList.add(3);

	fprintf('List of length 3:\n');
	UseClass.Use(aList.makeReverseIterator);
	fprintf('\n');
end
