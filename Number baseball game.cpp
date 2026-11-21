#include <iostream>
#include <windows.h>

#define MAX_GAMECOUNT		9
#define EXIT				0
#define RANGE				9
#define SELECT				3

using std::cout;
using std::endl;
using std::cin;

enum RESULT
{
	STRIKE = SELECT,
	BALL,
	RESULT_COUNT
};

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	srand((unsigned int)time(NULL));

	int iBaseball[RANGE] = {};
	for (int i = 0; i < RANGE; i++)
	{
		iBaseball[i] = i + 1;
	}

	// Fisher-Yates Shuffle Algorithm
	for (int i = RANGE - 1; i > 0; i--)
	{
		int j = rand() % (i + 1);

		// Swap Algorithm
		int iTemp = iBaseball[i];
		iBaseball[i] = iBaseball[j];
		iBaseball[j] = iTemp;

		// Shuffle Rendering
		system("cls");
		cout << RANGE - i << " / " << RANGE << endl << endl;

		cout << "idx i: " << i << endl;
		cout << "idx j: " << j << endl;

		cout << "iBaseball[i]: " << iBaseball[i] << endl;
		cout << "iBaseball[j]: " << iBaseball[j] << endl << endl;

		cout << "Baseball: \t";
		for (int k = 0; k < RANGE; k++)
		{
			if (i == k || j == k)
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);

			cout << iBaseball[k] << "\t";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		}

		Sleep(300);
	}

	int iStrike = 0, iBall = 0;
	int iInput[SELECT];

	int iGameCount = 0;

	int iResult[MAX_GAMECOUNT][RESULT_COUNT];

	while (true)
	{
		system("cls");

		cout << "Round " << iGameCount + 1 << " | Remaining Attempts: " << MAX_GAMECOUNT - iGameCount << endl << endl;

		for (int i = 0; i < SELECT; i++)
		{
			cout << "*\t";
		}
		cout << endl << endl;

		for (int i = 0; i < SELECT; i++)
		{
			cout << iBaseball[i] << "\t";
		}
		cout << endl << endl;

		// Record Print
		for (int i = 0; i < iGameCount; i++)
		{
			cout << "Round " << i + 1 << "\t\t";

			for (int j = 0; j < SELECT; j++)
			{
				cout << iResult[i][j] << "\t";
			}

			cout << "\tS: " << iResult[i][STRIKE]
				<< "\tB: " << iResult[i][BALL] << endl;
		}

		cout << endl << endl << endl;

		cout << "Enter " << SELECT << " unique numbers between 1 and " << RANGE << " (0 to exit)." << endl;

		for (int i = 0; i < SELECT; i++)
		{
			cout << "Number " << i + 1 << ": ";
			cin >> iInput[i];
		}
		cout << endl;

		if (cin.fail())
		{
			cout << "Invalid input. Please enter numbers again." << endl;

			cin.clear();
			cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
			system("pause > nul");
			continue;
		}


		// Exception Handling
		{
			bool bException = false;

			// Exit
			for (int i = 0; i < SELECT; i++)
			{
				if (iInput[i] == EXIT)
				{
					bException = true;
					break;
				}
			}
			if (bException)
				break;


			// Out of Range
			for (int i = 0; i < SELECT; i++)
			{
				if (iInput[i] < EXIT || iInput[i] > RANGE)
				{
					cout << "Number out of range. Please enter a number between 1 and " << RANGE << "." << endl;
					bException = true;
					system("pause > nul");
					break;
				}
			}
			if (bException)
				continue;


			// Duplicated Number
			for (int i = 0; i < SELECT; i++)
			{
				for (int j = i + 1; j < SELECT; j++)
				{
					if (iInput[i] == iInput[j])
					{
						cout << "Duplicate numbers are not allowed." << endl;
						bException = true;
						system("pause > nul");
						break;
					}
				}
				if (bException)
					break;
			}
			if (bException)
				continue;
		}


		// Game Logic
		iStrike = iBall = 0;
		for (int i = 0; i < SELECT; i++)
		{
			for (int j = 0; j < SELECT; j++)
			{
				if (iBaseball[i] == iInput[j])
				{
					if (i == j)
						iStrike++;

					else
						iBall++;

					break;
				}
			}
		}

		// Record
		for (int i = 0; i < SELECT; i++)
			iResult[iGameCount][i] = iInput[i];

		iResult[iGameCount][STRIKE] = iStrike;
		iResult[iGameCount][BALL] = iBall;

		cout << endl;


		// Result Print
		if (iStrike == SELECT)
		{
			cout << "You guessed all numbers in " << iGameCount + 1 << " rounds!" << endl;
			break;
		}
		else if (iStrike == 0 && iBall == 0)
		{
			cout << "Out !!!" << endl;
		}
		else
		{
			cout << iStrike << " Strike " << iBall << " Ball" << endl;
		}


		// Game Over
		if (iGameCount + 1 == MAX_GAMECOUNT)
		{
			cout << "Round " << iGameCount + 1 << "." << endl;
			cout << "Game Over." << endl;
			break;
		}

		iGameCount++;

		cout << "Press enter to play again";
		system("pause > nul");
	}

	cout << "Answer:\t";
	for (int i = 0; i < SELECT; i++)
	{
		cout << iBaseball[i] << "\t";
	}
	cout << endl << endl;

	cout << "Game Ended." << endl;

	return 0;
}
