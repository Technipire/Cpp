// Table.java

public abstract class Table
{
	public abstract int getNumberOfRows();
	public abstract int getNumberOfColumns();
	public abstract String getColumnName(int aColumn);
	public abstract Object getValue(int aRow, int aColumn);

	public final void display()
	{
		for (int aColumn = 0; aColumn < getNumberOfColumns(); ++aColumn)
		{
			System.out.print("| " + getColumnName(aColumn) + " ");
		}
		System.out.println("|");

		for (int aRow = 0; aRow < getNumberOfRows(); ++aRow)
		{
			for (int aColumn = 0; aColumn < getNumberOfColumns(); ++aColumn)
			{
				System.out.print("| " + getValue(aRow, aColumn) + " ");
			}
			System.out.println("|");
		}
	}
}
