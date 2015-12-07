% DpIterator.m

classdef (Abstract) DpIterator < handle
	methods (Abstract)
		result = isDone(theDpIterator)
		result = getCurrent(theDpIterator)
		advance(theDpIterator)
	end
end
