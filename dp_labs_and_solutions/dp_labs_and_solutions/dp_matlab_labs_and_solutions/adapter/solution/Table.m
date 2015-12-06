% Table.m

classdef (Abstract) Table < handle
	methods (Abstract)
		result = getNumberOfRows(theTable)
		result = getNumberOfColumns(theTable)
		result = getColumnName(theTable, aColumn)
		result = getValue(theTable, aRow, aColumn)
	end

	methods (Sealed)
		function display(theTable)
			for aColumn = 1:theTable.getNumberOfColumns
				fprintf('| %s ', theTable.getColumnName(aColumn));
			end
			fprintf('|\n');

			for aRow = 1:theTable.getNumberOfRows
				for aColumn = 1:theTable.getNumberOfColumns
					fprintf('| %s ', theTable.getValue(aRow, aColumn));
				end
				fprintf('|\n');
			end
		end
	end
end
