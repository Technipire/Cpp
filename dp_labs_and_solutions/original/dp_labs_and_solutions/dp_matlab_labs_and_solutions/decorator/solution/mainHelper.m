% mainHelper.m

function mainHelper(aDescription, aCoffee)
	fprintf('%s:\n', aDescription);

	aCoffee.prepare;

	fprintf('\n');
end
