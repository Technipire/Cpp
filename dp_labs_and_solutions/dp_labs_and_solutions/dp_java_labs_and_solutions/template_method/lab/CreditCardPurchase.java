// CreditCardPurchase.java

public class CreditCardPurchase extends Purchase
{
	public void perform()
	{
		selectItem();
		bringItemToRegister();
		payViaCreditCard();
	}

	private void selectItem()
	{
	}

	private void bringItemToRegister()
	{
	}

	private void payViaCreditCard()
	{
		System.out.println("Paying via credit card.");
	}
}
