// MainClass.java

public class MainClass
{
	public static void main(String[] args)
	{
		while (true)
		{
			Game aGame = new Game(3, 3);

			aGame.play();

			char c = Keyboard.getChar("Enter 'y' to play again: ");
			if (c != 'y')
			{
				break;
			}
		}
	}
}
