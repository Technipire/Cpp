% CompoundCommand.m

classdef CompoundCommand < Command
	properties (GetAccess = private, SetAccess = private)
		Commands % DpVector of Command
	end

	methods
		% constructor:
		function theCompoundCommand = CompoundCommand
			theCompoundCommand.Commands = DpVector;
		end

		function add(theCompoundCommand, aCommand)
			if isempty(aCommand)
				error('Invalid aCommand.');
			end

			theCompoundCommand.Commands.add(aCommand);
		end

		function execute(theCompoundCommand)
			aIterator = theCompoundCommand.Commands.makeIterator;
			while ~aIterator.isDone
				aCommand = aIterator.getCurrent;
				aCommand.execute;
				aIterator.advance;
			end
		end

		function undo(theCompoundCommand)
			aIterator = theCompoundCommand.Commands.makeReverseIterator;
			while ~aIterator.isDone
				aCommand = aIterator.getCurrent;
				aCommand.undo;
				aIterator.advance;
			end
		end
	end
end
