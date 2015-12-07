// Keyboard.java

import java.io.*;

public class Keyboard
{
	public static boolean getBoolean(String prompt)
	{
		String s = getString(prompt);

		boolean result = Convert.fromStringToBoolean(s);

		return result;
	}

	public static char getChar(String prompt)
	{
		String s = getString(prompt);

		char result = Convert.fromStringToChar(s);

		return result;
	}

	public static byte getByte(String prompt)
	{
		String s = getString(prompt);

		byte result = Convert.fromStringToByte(s);

		return result;
	}

	public static short getShort(String prompt)
	{
		String s = getString(prompt);

		short result = Convert.fromStringToShort(s);

		return result;
	}

	public static int getInt(String prompt)
	{
		String s = getString(prompt);

		int result = Convert.fromStringToInt(s);

		return result;
	}

	public static long getLong(String prompt)
	{
		String s = getString(prompt);

		long result = Convert.fromStringToLong(s);

		return result;
	}

	public static float getFloat(String prompt)
	{
		String s = getString(prompt);

		float result = Convert.fromStringToFloat(s);

		return result;
	}

	public static double getDouble(String prompt)
	{
		String s = getString(prompt);

		double result = Convert.fromStringToDouble(s);

		return result;
	}

	public static String getString(String prompt)
	{
		System.out.print(prompt);

		String result = null;

		try
		{
			result = in.readLine();
		}
		catch(IOException e)
		{
			throw new RuntimeException("Keyboard.getString(): Could not read a line of text from the keyboard.");
		}

		return result;
	}

	private static BufferedReader in;

	static
	{
		in =
			new BufferedReader(
				new InputStreamReader(
					System.in));
	}

	public static void main(String[] args)
	{
		boolean b = Keyboard.getBoolean("Enter a boolean:");
		System.out.println("You entered " + b + ".");
		char c = Keyboard.getChar("Enter a char:");
		System.out.println("You entered " + c + ".");
		byte b2 = Keyboard.getByte("Enter a byte:");
		System.out.println("You entered " + b2 + ".");
		short s = Keyboard.getShort("Enter a short:");
		System.out.println("You entered " + s + ".");
		int i = Keyboard.getInt("Enter an int:");
		System.out.println("You entered " + i + ".");
		long l = Keyboard.getLong("Enter a long:");
		System.out.println("You entered " + l + ".");
		float f = Keyboard.getFloat("Enter a float:");
		System.out.println("You entered " + f + ".");
		double d = Keyboard.getDouble("Enter a double:");
		System.out.println("You entered " + d + ".");
		String s2 = Keyboard.getString("Enter a string:");
		System.out.println("You entered " + s2 + ".");
	}
}
