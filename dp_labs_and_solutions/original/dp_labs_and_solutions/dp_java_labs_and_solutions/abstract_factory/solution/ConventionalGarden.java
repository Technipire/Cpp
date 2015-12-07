// ConventionalGarden.java

public class ConventionalGarden extends Garden
{
	public ConventionalGarden(ConventionalLettuce aLettucePrototype)
	{
		super(aLettucePrototype);
	}

	public void setLettucePrototype(ConventionalLettuce aLettucePrototype)
	{
		super.setLettucePrototype(aLettucePrototype);
	}

	public ConventionalTomato makeTomato()
	{
		return new ConventionalTomato(1, 2);
	}
}
