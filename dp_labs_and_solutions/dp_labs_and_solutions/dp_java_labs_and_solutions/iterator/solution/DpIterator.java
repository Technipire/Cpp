// DpIterator.java

public abstract class DpIterator<T>
{
	public abstract boolean isDone();
	public abstract T getCurrent();
	public abstract void advance();
}
