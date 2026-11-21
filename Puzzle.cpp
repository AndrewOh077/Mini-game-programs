#include <iostream>
#include <conio.h>
#include <Windows.h>

#define BLANK	-1

enum DIRECTION
{
	DIRECTION_UP,
	DIRECTION_DOWN,
	DIRECTION_LEFT,
	DIRECTION_RIGHT,

	DIRECTION_COUNT,
};

using std::cout;
using std::endl;

int main()
{
	srand(time(NULL));

	// Setting
	int iPuzzle[25];
	for (int i = 0; i < 24; i++)
	{
		iPuzzle[i] = i + 1;
	}

	int iBlankIdx = 24;
	iPuzzle[iBlankIdx] = BLANK;


	// Shuffle
	int iShuffleCount;

	cout << "_____________ PUZZLE _____________" << endl << endl << endl;
	cout << "\tShuffle Count: ";
	std::cin >> iShuffleCount;

	for (int i = 0; i < iShuffleCount; i++)
	{
		bool isSwap = false;

		switch (rand() % DIRECTION_COUNT)
		{
		case DIRECTION_UP:
			if (iBlankIdx > 4)
			{
				iPuzzle[iBlankIdx] = iPuzzle[iBlankIdx - 5];
				iPuzzle[iBlankIdx - 5] = BLANK;
				iBlankIdx -= 5;

				isSwap = true;
			}
			break;
		case DIRECTION_DOWN:
			if (iBlankIdx < 20)
			{
				iPuzzle[iBlankIdx] = iPuzzle[iBlankIdx + 5];
				iPuzzle[iBlankIdx + 5] = BLANK;
				iBlankIdx += 5;

				isSwap = true;
			}
			break;
		case DIRECTION_LEFT:
			if (iBlankIdx % 5 != 0)
			{
				iPuzzle[iBlankIdx] = iPuzzle[iBlankIdx - 1];
				iPuzzle[iBlankIdx - 1] = BLANK;
				iBlankIdx -= 1;

				isSwap = true;
			}
			break;
		case DIRECTION_RIGHT:
			if (iBlankIdx % 5 != 4)
			{
				iPuzzle[iBlankIdx] = iPuzzle[iBlankIdx + 1];
				iPuzzle[iBlankIdx + 1] = BLANK;
				iBlankIdx += 1;

				isSwap = true;
			}
			break;
		}


		if (!isSwap)
		{
			i--;
			continue;
		}

		system("cls");
		cout << "_____________ PUZZLE _____________" << endl << endl;
		for (int k = 0; k < 5; k++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (iPuzzle[k * 5 + j] == BLANK)
					cout << " \t";
				else
					cout << iPuzzle[k * 5 + j] << "\t";
			}
			cout << endl << endl << endl << endl;
		}

		cout << "\t" << i + 1 << " / " << iShuffleCount << " Shuffles";
		Sleep(50);
	}


	// Starting Position
	for (int i = 0; i < 4; i++)
	{
		if (iBlankIdx < 20)
		{
			iPuzzle[iBlankIdx] = iPuzzle[iBlankIdx + 5];
			iPuzzle[iBlankIdx + 5] = BLANK;
			iBlankIdx += 5;
		}

		if (iBlankIdx % 5 != 4)
		{
			iPuzzle[iBlankIdx] = iPuzzle[iBlankIdx + 1];
			iPuzzle[iBlankIdx + 1] = BLANK;
			iBlankIdx++;
		}
	}


	int iMoveCount = 0;

	// Game Logic
	bool GameLoop = true;
	while (GameLoop)
	{
		// Rendering
		system("cls");

		cout << "_____________ PUZZLE _____________" << endl << endl;
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (iPuzzle[i * 5 + j] == BLANK)
					cout << " \t";
				else
					cout << iPuzzle[i * 5 + j] << "\t";
			}
			cout << endl << endl << endl << endl;
		}

		// Clear Condition
		bool bClear = true;
		for (int i = 0; i < 24; i++)
		{
			if (iPuzzle[i] != i + 1)
			{
				bClear = false;
				break;
			}
		}
		if (bClear)
		{
			cout << "You got all the numbers right in " << iMoveCount << " moves." << endl;
			break;
		}

		cout << "Move: " << iMoveCount << endl << endl;

		cout << "W: Up" << "\t\t";
		cout << "S: Down" << "\t\t";
		cout << "A: Left" << "\t\t";
		cout << "D: Right" << endl;
		cout << "R: Reset" << "\t";
		cout << "X: Exit" << endl << endl;


		switch (_getch())
		{
		case 'W':
		case 'w':
			if (iBlankIdx > 4)
			{
				iPuzzle[iBlankIdx] = iPuzzle[iBlankIdx - 5];
				iPuzzle[iBlankIdx - 5] = BLANK;

				iBlankIdx -= 5;

				iMoveCount++;
			}
			break;
		case 'S':
		case 's':
			if (iBlankIdx < 20)
			{
				iPuzzle[iBlankIdx] = iPuzzle[iBlankIdx + 5];
				iPuzzle[iBlankIdx + 5] = BLANK;
				iBlankIdx += 5;

				iMoveCount++;
			}
			break;
		case 'A':
		case 'a':
			if (iBlankIdx % 5 != 0)
			{
				iPuzzle[iBlankIdx] = iPuzzle[iBlankIdx - 1];
				iPuzzle[iBlankIdx - 1] = BLANK;
				iBlankIdx--;

				iMoveCount++;
			}
			break;
		case 'D':
		case 'd':
			if (iBlankIdx % 5 != 4)
			{
				iPuzzle[iBlankIdx] = iPuzzle[iBlankIdx + 1];
				iPuzzle[iBlankIdx + 1] = BLANK;
				iBlankIdx++;

				iMoveCount++;
			}
			break;
		case 'R':
		case 'r':

			iMoveCount = 0;

			system("cls");

			cout << "_____________ PUZZLE _____________" << endl << endl;

			cout << "\tShuffle Count: ";
			std::cin >> iShuffleCount;

			for (int i = 0; i < iShuffleCount; i++)
			{
				bool isSwap = false;
				switch (rand() % DIRECTION_COUNT)
				{
				case DIRECTION_UP:
					if (iBlankIdx > 4)
					{
						iPuzzle[iBlankIdx] = iPuzzle[iBlankIdx - 5];
						iPuzzle[iBlankIdx - 5] = BLANK;
						iBlankIdx -= 5;

						isSwap = true;
					}
					break;
				case DIRECTION_DOWN:
					if (iBlankIdx < 20)
					{
						iPuzzle[iBlankIdx] = iPuzzle[iBlankIdx + 5];
						iPuzzle[iBlankIdx + 5] = BLANK;
						iBlankIdx += 5;

						isSwap = true;
					}
					break;
				case DIRECTION_LEFT:
					if (iBlankIdx % 5 != 0)
					{
						iPuzzle[iBlankIdx] = iPuzzle[iBlankIdx - 1];
						iPuzzle[iBlankIdx - 1] = BLANK;
						iBlankIdx -= 1;

						isSwap = true;
					}
					break;
				case DIRECTION_RIGHT:
					if (iBlankIdx % 5 != 4)
					{
						iPuzzle[iBlankIdx] = iPuzzle[iBlankIdx + 1];
						iPuzzle[iBlankIdx + 1] = BLANK;
						iBlankIdx += 1;

						isSwap = true;
					}
					break;
				}

				if (!isSwap)
				{
					i--;
					continue;
				}

				system("cls");
				cout << "_____________ PUZZLE _____________" << endl << endl;
				for (int k = 0; k < 5; k++)
				{
					for (int j = 0; j < 5; j++)
					{
						if (iPuzzle[k * 5 + j] == BLANK)
							cout << " \t";
						else
							cout << iPuzzle[k * 5 + j] << "\t";
					}
					cout << endl << endl << endl << endl;
				}

				cout << "\t" << i + 1 << " / " << iShuffleCount << "회 Shuffle";
				Sleep(50);
			}


			// Starting Position
			for (int i = 0; i < 4; i++)
			{
				if (iBlankIdx < 20)
				{
					iPuzzle[iBlankIdx] = iPuzzle[iBlankIdx + 5];
					iPuzzle[iBlankIdx + 5] = BLANK;
					iBlankIdx += 5;
				}

				if (iBlankIdx % 5 != 4)
				{
					iPuzzle[iBlankIdx] = iPuzzle[iBlankIdx + 1];
					iPuzzle[iBlankIdx + 1] = BLANK;
					iBlankIdx += 1;
				}
			}

			break;

		case 'X':
		case 'x':
			bool isLoop = true;
			while (isLoop)
			{
				system("cls");
				cout << "_____________ PUZZLE _____________" << endl << endl << endl;
				cout << endl << endl << "Exit the game? (Y/N): ";
				char cExit;
				std::cin >> cExit;

				switch (cExit)
				{
				case 'Y':
				case 'y':
					GameLoop = false;
					isLoop = false;
					break;

				case 'N':
				case 'n':
					isLoop = false;
					break;

				default:
					std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');

					cout << endl << "That is not a valid option." << endl;
					system("pause > nul");
					break;
				}
			}
			break;
		}
	}


	return 0;
}
