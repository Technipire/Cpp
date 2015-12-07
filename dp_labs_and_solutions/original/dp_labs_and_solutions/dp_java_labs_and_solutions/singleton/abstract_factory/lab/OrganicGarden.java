// OrganicGarden.java

public class OrganicGarden extends Garden
{
	public OrganicGarden(OrganicLettuce aLettucePrototype)
	{
		super(aLettucePrototype);
	}

	public void setLettucePrototype(OrganicLettuce aLettucePrototype)
	{
		super.setLettucePrototype(aLettucePrototype);
	}

	public OrganicTomato makeTomato()
	{
		return new OrganicTomato(1, 2);
	}
}
