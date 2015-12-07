// Handler.java

public abstract class Handler
{
	public Handler(Handler aSuccessor)
	{
		setSuccessor(aSuccessor);
	}

	public final void handle(CustomerRequestsDiscountEvent aCustomerRequestsDiscountEvent)
	{
		if (canHandle(aCustomerRequestsDiscountEvent))
		{
			doHandle(aCustomerRequestsDiscountEvent);
		}
		else if (getSuccessor() != null)
		{
			getSuccessor().handle(aCustomerRequestsDiscountEvent);
		}
		else
		{
			// aCustomerRequestsDiscountEvent is not handled.
		}
	}

	protected abstract boolean canHandle(CustomerRequestsDiscountEvent aCustomerRequestsDiscountEvent);

	protected abstract void doHandle(CustomerRequestsDiscountEvent aCustomerRequestsDiscountEvent);

	private Handler getSuccessor()
	{
		return mySuccessor;
	}

	private void setSuccessor(Handler aSuccessor)
	{
		mySuccessor = aSuccessor;
	}

	private Handler mySuccessor;
}
