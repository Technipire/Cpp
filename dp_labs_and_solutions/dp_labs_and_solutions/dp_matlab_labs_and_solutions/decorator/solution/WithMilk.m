% WithMilk.m

classdef WithMilk < With
	methods
		% constructor:
		function theWithMilk = WithMilk(aSuccessor)
			theWithMilk@With(aSuccessor);
		end
	
		function prepare(theWithMilk)
			prepare@With(theWithMilk);
			fprintf('Adding milk.\n');
		end
	end
end
