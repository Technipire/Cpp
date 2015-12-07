% main.m

function main
	while true
		aGame = Game(3, 3);

		aGame.play();

		userInput = input('Do you want to play again? y/n [n]: ', 's');
		if ~strcmp(userInput, 'y')
			break;
		end
	end
end
