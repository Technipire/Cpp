// CashPurchase.java

public class CashPurchase extends Purchase
{
	public void perform()
	{
		selectItem();
		bringItemToRegister();
		payViaCash();
	}

	private void selectItem()
	{
	}

	private void bringItemToRegister()
	{
	}

	private void payViaCash()
	{
		System.out.println("Paying via cash.");
	}
}
