% PackingStrategy.m

classdef (Abstract) PackingStrategy < handle
	methods (Abstract)
		pack(thePackingStrategy, aPacker)
	end
end
