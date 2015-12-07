% State.m

classdef (Abstract) State < handle
	methods (Abstract)
		result = isCovered(theState)

		leftClick(theState, aGame, aSquare)

		rightClick(theState, aSquare)

		output(theState, aGame, aSquare)

		uncover(theState, aSquare)
	end
end
