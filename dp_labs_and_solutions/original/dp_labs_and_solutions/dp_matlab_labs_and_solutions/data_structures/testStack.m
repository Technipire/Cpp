% testStack.m

function testStack
	aStack = DpStack;
	displayStack(aStack);

	aStack.push(1);
	displayStack(aStack);

	aStack.push(1);
	aStack.push(2);
	displayStack(aStack);
end

function displayStack(aStack)
	fprintf('displayStack(aStack): <top> ');
	while ~aStack.isEmpty
		aValue = aStack.top;
		fprintf('%d ', aValue);
		aStack.pop;
	end
	fprintf('<bottom>\n');
end
