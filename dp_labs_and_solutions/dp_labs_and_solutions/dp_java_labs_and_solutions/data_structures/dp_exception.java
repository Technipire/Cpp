// dp_exception.java

public class dp_exception extends RuntimeException
{
	public dp_exception(String a_text)
	{
		my_text = a_text;
	}

	public String get_text()
	{
		return my_text;
	}

	private String my_text;
}
