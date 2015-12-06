% NullExpression.m

classdef NullExpression < Terminal
	methods
		function accept(theNullExpression, aVisitor)
			aVisitor.visitNullExpression(theNullExpression);
		end
	end
end
