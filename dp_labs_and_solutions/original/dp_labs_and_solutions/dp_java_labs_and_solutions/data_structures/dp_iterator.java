// dp_iterator.java

public abstract class dp_iterator<T>
{
	public abstract boolean is_done();
	public abstract T get_current();
	public abstract void advance();
}
