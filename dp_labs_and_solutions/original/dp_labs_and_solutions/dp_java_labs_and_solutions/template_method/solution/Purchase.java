// Purchase.java

public abstract class Purchase
{
	public final void perform()
	{
		selectItem();
		bringItemToRegister();
		pay();
	}

	private final void selectItem()
	{
	}

	private final void bringItemToRegister()
	{
	}

	protected abstract void pay();
}
