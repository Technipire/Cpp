% testMap.m

function testMap
	aMap = DpMap;
	displayMap(aMap);

	aMap.put(1, -1);
	displayMap(aMap);

	aMap.put(2, -2);
	displayMap(aMap);
end

function displayMap(aMap)
	fprintf('displayMap(aMap): ');
	if aMap.contains(1)
		fprintf('[1, %d] ', aMap.get(1));
	end
	if aMap.contains(2)
		fprintf('[2, %d] ', aMap.get(2));
	end
	fprintf('\n');
end
