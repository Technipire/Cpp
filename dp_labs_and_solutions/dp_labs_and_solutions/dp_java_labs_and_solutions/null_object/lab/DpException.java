// DpException.java

public class DpException extends RuntimeException
{
	public DpException(String aText)
	{
		myText = aText;
	}

	public String getText()
	{
		return myText;
	}

	private String myText;
}
