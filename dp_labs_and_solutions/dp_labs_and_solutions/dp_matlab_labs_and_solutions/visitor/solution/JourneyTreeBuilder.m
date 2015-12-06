% JourneyTreeBuilder.m

classdef JourneyTreeBuilder < JourneyBuilder
	properties (GetAccess = private, SetAccess = private)
		Stack % DpStack
	end

	methods
		% constructor:
		function theJourneyTreeBuilder = JourneyTreeBuilder
			theJourneyTreeBuilder.Stack = DpStack;
		end

		function buildMultipleJourney(theJourneyTreeBuilder, aName, aNumberOfJourneys)
			aMultipleJourney = MultipleJourney(aName);

			aStack = DpStack;

			for i = 1:aNumberOfJourneys
				aJourney = theJourneyTreeBuilder.Stack.top;
				theJourneyTreeBuilder.Stack.pop;

				aStack.push(aJourney);
			end

			for i = 1:aNumberOfJourneys
				aJourney = aStack.top;
				aStack.pop;

				aMultipleJourney.addJourney(aJourney);
			end

			theJourneyTreeBuilder.Stack.push(aMultipleJourney);
		end

		function buildSingleJourney(theJourneyTreeBuilder, aAddress)
			theJourneyTreeBuilder.Stack.push(SingleJourneyFlyweightFactory.getInstance.getFlyweightFor(aAddress));
		end

		function result = getTree(theJourneyTreeBuilder)
			if theJourneyTreeBuilder.Stack.isEmpty
				error('Cannot getTree if the Stack is empty.');
			end

			result = theJourneyTreeBuilder.Stack.top;
		end
	end
end
