// Convert.java

public class Convert
{
	//////////////////////////////
	// f r o m B o o l e a n T o :
	//////////////////////////////

	public static String fromBooleanToString(boolean x)
	{
		String result = null;

		result = Boolean.toString(x);

		return result;
	}

	////////////////////////
	// f r o m C h a r T o :
	////////////////////////

	public static byte fromCharToByte(char x)
	{
		byte result = 0;

		if ((Byte.MIN_VALUE <= x) && (x <= Byte.MAX_VALUE))
		{
			result = (byte) x;
		}
		else
		{
			throw new RuntimeException("Convert.fromCharToByte(): The input parameter is out-of-range.");
		}

		return result;
	}

	public static short fromCharToShort(char x)
	{
		short result = 0;

		if ((Short.MIN_VALUE <= x) && (x <= Short.MAX_VALUE))
		{
			result = (short) x;
		}
		else
		{
			throw new RuntimeException("Convert.fromCharToShort(): The input parameter is out-of-range.");
		}

		return result;
	}

	public static String fromCharToString(char x)
	{
		String result = null;

		result = Character.toString(x);

		return result;
	}

	////////////////////////
	// f r o m B y t e T o :
	////////////////////////

	public static char fromByteToChar(byte x)
	{
		char result = 0;

		if ((Character.MIN_VALUE <= x) && (x <= Character.MAX_VALUE))
		{
			result = (char) x;
		}
		else
		{
			throw new RuntimeException("Convert.fromByteToChar(): The input parameter is out-of-range.");
		}

		return result;
	}

	public static String fromByteToString(byte x)
	{
		String result = null;

		result = Byte.toString(x);

		return result;
	}

	//////////////////////////
	// f r o m S h o r t T o :
	//////////////////////////

	public static char fromShortToChar(short x)
	{
		char result = 0;

		if ((Character.MIN_VALUE <= x) && (x <= Character.MAX_VALUE))
		{
			result = (char) x;
		}
		else
		{
			throw new RuntimeException("Convert.fromShortToChar(): The input parameter is out-of-range.");
		}

		return result;
	}

	public static byte fromShortToByte(short x)
	{
		byte result = 0;

		if ((Byte.MIN_VALUE <= x) && (x <= Byte.MAX_VALUE))
		{
			result = (byte) x;
		}
		else
		{
			throw new RuntimeException("Convert.fromShortToByte(): The input parameter is out-of-range.");
		}

		return result;
	}

	public static String fromShortToString(short x)
	{
		String result = null;

		result = Short.toString(x);

		return result;
	}

	//////////////////////
	// f r o m I n t T o :
	//////////////////////

	public static char fromIntToChar(int x)
	{
		char result = 0;

		if ((Character.MIN_VALUE <= x) && (x <= Character.MAX_VALUE))
		{
			result = (char) x;
		}
		else
		{
			throw new RuntimeException("Convert.fromIntToChar(): The input parameter is out-of-range.");
		}

		return result;
	}

	public static byte fromIntToByte(int x)
	{
		byte result = 0;

		if ((Byte.MIN_VALUE <= x) && (x <= Byte.MAX_VALUE))
		{
			result = (byte) x;
		}
		else
		{
			throw new RuntimeException("Convert.fromIntToByte(): The input parameter is out-of-range.");
		}

		return result;
	}

	public static short fromIntToShort(int x)
	{
		short result = 0;

		if ((Short.MIN_VALUE <= x) && (x <= Short.MAX_VALUE))
		{
			result = (short) x;
		}
		else
		{
			throw new RuntimeException("Convert.fromIntToShort(): The input parameter is out-of-range.");
		}

		return result;
	}

	public static String fromIntToString(int x)
	{
		String result = null;

		result = Integer.toString(x);

		return result;
	}

	////////////////////////
	// f r o m L o n g T o :
	////////////////////////

	public static char fromLongToChar(long x)
	{
		char result = 0;

		if ((Character.MIN_VALUE <= x) && (x <= Character.MAX_VALUE))
		{
			result = (char) x;
		}
		else
		{
			throw new RuntimeException("Convert.fromLongToChar(): The input parameter is out-of-range.");
		}

		return result;
	}

	public static byte fromLongToByte(long x)
	{
		byte result = 0;

		if ((Byte.MIN_VALUE <= x) && (x <= Byte.MAX_VALUE))
		{
			result = (byte) x;
		}
		else
		{
			throw new RuntimeException("Convert.fromLongToByte(): The input parameter is out-of-range.");
		}

		return result;
	}

	public static short fromLongToShort(long x)
	{
		short result = 0;

		if ((Short.MIN_VALUE <= x) && (x <= Short.MAX_VALUE))
		{
			result = (short) x;
		}
		else
		{
			throw new RuntimeException("Convert.fromLongToShort(): The input parameter is out-of-range.");
		}

		return result;
	}

	public static int fromLongToInt(long x)
	{
		int result = 0;

		if ((Integer.MIN_VALUE <= x) && (x <= Integer.MAX_VALUE))
		{
			result = (int) x;
		}
		else
		{
			throw new RuntimeException("Convert.fromLongToInt(): The input parameter is out-of-range.");
		}

		return result;
	}

	public static String fromLongToString(long x)
	{
		String result = null;

		result = Long.toString(x);

		return result;
	}

	//////////////////////////
	// f r o m F l o a t T o :
	//////////////////////////

	public static char fromFloatToChar(float x)
	{
		char result = 0;

		if ((Character.MIN_VALUE <= x) && (x <= Character.MAX_VALUE))
		{
			result = (char) x;
		}
		else
		{
			throw new RuntimeException("Convert.fromFloatToChar(): The input parameter is out-of-range.");
		}

		return result;
	}

	public static byte fromFloatToByte(float x)
	{
		byte result = 0;

		if ((Byte.MIN_VALUE <= x) && (x <= Byte.MAX_VALUE))
		{
			result = (byte) x;
		}
		else
		{
			throw new RuntimeException("Convert.fromFloatToByte(): The input parameter is out-of-range.");
		}

		return result;
	}

	public static short fromFloatToShort(float x)
	{
		short result = 0;

		if ((Short.MIN_VALUE <= x) && (x <= Short.MAX_VALUE))
		{
			result = (short) x;
		}
		else
		{
			throw new RuntimeException("Convert.fromFloatToShort(): The input parameter is out-of-range.");
		}

		return result;
	}

	public static int fromFloatToInt(float x)
	{
		int result = 0;

		if ((Integer.MIN_VALUE <= x) && (x <= Integer.MAX_VALUE))
		{
			result = (int) x;
		}
		else
		{
			throw new RuntimeException("Convert.fromFloatToInt(): The input parameter is out-of-range.");
		}

		return result;
	}

	public static long fromFloatToLong(float x)
	{
		long result = 0;

		if ((Long.MIN_VALUE <= x) && (x <= Long.MAX_VALUE))
		{
			result = (long) x;
		}
		else
		{
			throw new RuntimeException("Convert.fromFloatToLong(): The input parameter is out-of-range.");
		}

		return result;
	}

	public static String fromFloatToString(float x)
	{
		String result = null;

		result = Float.toString(x);

		return result;
	}

	////////////////////////////
	// f r o m D o u b l e T o :
	////////////////////////////

	public static char fromDoubleToChar(double x)
	{
		char result = 0;

		if ((Character.MIN_VALUE <= x) && (x <= Character.MAX_VALUE))
		{
			result = (char) x;
		}
		else
		{
			throw new RuntimeException("Convert.fromDoubleToChar(): The input parameter is out-of-range.");
		}

		return result;
	}

	public static byte fromDoubleToByte(double x)
	{
		byte result = 0;

		if ((Byte.MIN_VALUE <= x) && (x <= Byte.MAX_VALUE))
		{
			result = (byte) x;
		}
		else
		{
			throw new RuntimeException("Convert.fromDoubleToByte(): The input parameter is out-of-range.");
		}

		return result;
	}

	public static short fromDoubleToShort(double x)
	{
		short result = 0;

		if ((Short.MIN_VALUE <= x) && (x <= Short.MAX_VALUE))
		{
			result = (short) x;
		}
		else
		{
			throw new RuntimeException("Convert.fromDoubleToShort(): The input parameter is out-of-range.");
		}

		return result;
	}

	public static int fromDoubleToInt(double x)
	{
		int result = 0;

		if ((Integer.MIN_VALUE <= x) && (x <= Integer.MAX_VALUE))
		{
			result = (int) x;
		}
		else
		{
			throw new RuntimeException("Convert.fromDoubleToInt(): The input parameter is out-of-range.");
		}

		return result;
	}

	public static long fromDoubleToLong(double x)
	{
		long result = 0;

		if ((Long.MIN_VALUE <= x) && (x <= Long.MAX_VALUE))
		{
			result = (long) x;
		}
		else
		{
			throw new RuntimeException("Convert.fromDoubleToLong(): The input parameter is out-of-range.");
		}

		return result;
	}

	public static float fromDoubleToFloat(double x)
	{
		float result = 0.0F;

		if ((Float.MIN_VALUE <= x) && (x <= Float.MAX_VALUE))
		{
			result = (float) x;
		}
		else
		{
			throw new RuntimeException("Convert.fromDoubleToFloat(): The input parameter is out-of-range.");
		}

		return result;
	}

	public static String fromDoubleToString(double x)
	{
		String result = null;

		result = Double.toString(x);

		return result;
	}

	////////////////////////////
	// f r o m S t r i n g T o :
	////////////////////////////

	public static boolean fromStringToBoolean(String x)
	{
		boolean result = false;

	//	Do not do it this way:
	//	result = Boolean.parseBoolean(x);
	//	because that function does this:
	//	The boolean returned represents the value true if the string argument is not null and is equal, ignoring case, to the string "true".
	//	which is not strict enough for me.

		if (x.equals("true"))
		{
			result = true;
		}
		else if (x.equals("false"))
		{
			result = false;
		}
		else
		{
			throw new RuntimeException("Convert.fromStringToBoolean(): The String is neither 'true' nor 'false'.");
		}

		return result;
	}

	public static char fromStringToChar(String x)
	{
		char result = 0;

		if (x.length() != 1)
		{
			throw new RuntimeException("Convert.fromStringToChar(): The String has more or less than 1 character.");
		}

		result = x.charAt(0);

		return result;
	}

	public static byte fromStringToByte(String x)
	{
		byte result = 0;

		result = Byte.parseByte(x);

		return result;
	}

	public static short fromStringToShort(String x)
	{
		short result = 0;

		result = Short.parseShort(x);

		return result;
	}

	public static int fromStringToInt(String x)
	{
		int result = 0;

		result = Integer.parseInt(x);

		return result;
	}

	public static long fromStringToLong(String x)
	{
		long result = 0L;

		result = Long.parseLong(x);

		return result;
	}

	public static float fromStringToFloat(String x)
	{
		float result = 0.0F;

		result = Float.parseFloat(x);

		return result;
	}

	public static double fromStringToDouble(String x)
	{
		double result = 0.0;

		result = Double.parseDouble(x);

		return result;
	}
}
