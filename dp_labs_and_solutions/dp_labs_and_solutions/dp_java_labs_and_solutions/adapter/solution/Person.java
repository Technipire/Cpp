// Person.java

public class Person
{
	public Person(String aFirstName, String aLastName, String aStreet, String aCity, String aState, String aPhoneNumber)
	{
		setFirstName(aFirstName);
		setLastName(aLastName);
		setStreet(aStreet);
		setCity(aCity);
		setState(aState);
		setPhoneNumber(aPhoneNumber);
	}

	public String getFieldValue(int aField)
	{
		switch (aField)
		{
		case 0:
			return myFirstName;
		case 1:
			return myLastName;
		case 2:
			return myStreet;
		case 3:
			return myCity;
		case 4:
			return myState;
		case 5:
			return myPhoneNumber;
		default:
			throw new DpException("String getFieldValue(int aField) -- invalid aField.");
		}
	}

	public static int getNumberOfFieldsPerPerson()
	{
		return 6;
	}

	public static String getFieldName(int aField)
	{
		String[] fieldNames =
		{
			"First Name",
			"Last Name",
			"Street",
			"City",
			"State",
			"Phone Number",
		};
		return fieldNames[aField];
	}

	private void setFirstName(String aFirstName)
	{
		myFirstName = aFirstName;
	}

	public String getFirstName()
	{
		return myFirstName;
	}

	private void setLastName(String aLastName)
	{
		myLastName = aLastName;
	}

	public String getLastName()
	{
		return myLastName;
	}

	private void setStreet(String aStreet)
	{
		myStreet = aStreet;
	}

	public String getStreet()
	{
		return myStreet;
	}

	private void setCity(String aCity)
	{
		myCity = aCity;
	}

	public String getCity()
	{
		return myCity;
	}

	private void setState(String aState)
	{
		myState = aState;
	}

	public String getState()
	{
		return myState;
	}

	private void setPhoneNumber(String aPhoneNumber)
	{
		myPhoneNumber = aPhoneNumber;
	}

	public String getPhoneNumber()
	{
		return myPhoneNumber;
	}

	private String myFirstName;
	private String myLastName;
	private String myStreet;
	private String myCity;
	private String myState;
	private String myPhoneNumber;
}
