% WithSugar.m

classdef WithSugar < With
	methods
		% constructor:
		function theWithSugar = WithSugar(aSuccessor)
			theWithSugar@With(aSuccessor);
		end
	
		function prepare(theWithSugar)
			prepare@With(theWithSugar);
			fprintf('Adding sugar.\n');
		end
	end
end
