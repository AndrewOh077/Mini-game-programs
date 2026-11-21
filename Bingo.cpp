#include <iostream>

#define BINGO_SIZE	5

#define STAR		-1
#define EXIT		0
#define NAME_SIZE	32
#define TITLE_WIDTH 34

using std::cin;
using std::cout;
using std::endl;

enum COMPUTER_LEVEL
{
	EASY = 1,
	HARD
};

enum LINE
{
	HORIZONTAL,
	VERTICAL,
	LEFT_DIAGONAL,
	RIGHT_DIAGONAL,
};

int main()
{
	srand(time(NULL));

	int iPlayerNumber[25] = {};
	int iComputerNumber[25] = {};

	for (int i = 0; i < 25; i++)
	{
		iPlayerNumber[i] = i + 1;
		iComputerNumber[i] = i + 1;
	}

	for (int i = BINGO_SIZE * BINGO_SIZE - 1; i > 0; i--)
	{
		int iIndex, iSwap;

		// Player
		iIndex = rand() % (i + 1);

		iSwap = iPlayerNumber[i];
		iPlayerNumber[i] = iPlayerNumber[iIndex];
		iPlayerNumber[iIndex] = iSwap;

		// Computer
		iIndex = rand() % (i + 1);

		iSwap = iComputerNumber[i];
		iComputerNumber[i] = iComputerNumber[iIndex];
		iComputerNumber[iIndex] = iSwap;
	}

	int iPlayerBingo = 0;
	int iComputerBingo = 0;

	char szName[NAME_SIZE] = {};
	cout << "___________ BINGO GAME ___________" << endl << endl << endl << endl;
	cout << "Please enter your name: ";
	cin >> szName;

	int iComputerLevel;
	while (true)
	{
		system("cls");
		cout << "___________ BINGO GAME ___________" << endl << endl << endl << endl;

		cout << "\t\t1. Easy" << endl << endl;
		cout << "\t\t2. Hard" << endl << endl << endl << endl;

		cout << "\tSelect computer difficulty: ";
		cin >> iComputerLevel;

		if (EASY <= iComputerLevel && iComputerLevel <= HARD)
			break;
	}

	while (true)
	{
		system("cls");
		cout << "___________ BINGO GAME ___________" << endl;

		int nameLen = strlen(szName);

		int contentLen = nameLen + 2;

		int remain = TITLE_WIDTH - contentLen;
		if (remain < 0) remain = 0;

		int left = remain / 2;
		int right = remain - left;

		for (int i = 0; i < left; i++)
			cout << "=";

		cout << " " << szName << " ";

		for (int i = 0; i < right; i++)
			cout << "=";

		cout << endl;

		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (iPlayerNumber[i * 5 + j] == STAR)	// -1
					cout << "*\t";
				else
					cout << iPlayerNumber[i * 5 + j] << "\t";
			}
			cout << endl << endl << endl;
		}

		cout << "Bingo Line: " << iPlayerBingo << endl << endl;


		cout << "============ Computer ============" << endl;

		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (iComputerNumber[i * 5 + j] == STAR)
					cout << "*\t";
				else
					cout << iComputerNumber[i * 5 + j] << "\t";
			}
			cout << endl << endl << endl;
		}

		cout << "Bingo Line: " << iComputerBingo << endl << endl;


		// 승부 판정
		if (iPlayerBingo >= 5 || iComputerBingo >= 5)
		{
			if (iPlayerBingo > iComputerBingo)
				cout << "Player Win !!!" << endl;
			else if (iPlayerBingo == iComputerBingo)
				cout << "Draw!!!!!!!!" << endl;
			else
				cout << "Computer Win !" << endl;

			break;
		}


		cout << "Enter a number (0: Exit): ";
		int iInput;
		cin >> iInput;

		if (iInput == EXIT)	// 0
			break;

		else if (iInput < 1 || iInput > 25)
			continue;


		bool bConfirm = true;
		// Player가 입력한 숫자를 Player Bingo Pannel에 적용
		for (int i = 0; i < 25; i++)
		{
			if (iPlayerNumber[i] == iInput)
			{
				iPlayerNumber[i] = STAR;
				bConfirm = false;
				break;
			}
		}

		if (bConfirm)
			continue;

		// Player가 입력한 숫자를 Computer Bingo Pannel에 적용
		for (int i = 0; i < 25; i++)
		{
			if (iComputerNumber[i] == iInput)
			{
				iComputerNumber[i] = STAR;
				break;
			}
		}

		// Computer Select
		switch (iComputerLevel)
		{
		case EASY:
		{
			int iNoneSelectArray[25];
			int iNoneSelectCount = 0;

			for (int i = 0; i < 25; i++)
			{
				if (iComputerNumber[i] != STAR)
				{
					iNoneSelectArray[iNoneSelectCount++] = iComputerNumber[i];
				}
			}

			iInput = iNoneSelectArray[rand() % iNoneSelectCount];
		}
		break;
		case HARD:
		{
			int iLineNumber = 0;
			int iStarCount = 0;
			int iNewRecord = 0;
			LINE eLineCategory;

			// 가로
			for (int i = 0; i < 5; i++)
			{
				iStarCount = 0;
				for (int j = 0; j < 5; j++)
				{
					if (iComputerNumber[i * 5 + j] == STAR)
						iStarCount++;
				}

				if (iStarCount < 5 && iNewRecord < iStarCount)
				{
					iLineNumber = i;
					eLineCategory = HORIZONTAL;
					iNewRecord = iStarCount;
				}
			}

			// 세로
			for (int i = 0; i < 5; i++)
			{
				iStarCount = 0;
				for (int j = 0; j < 5; j++)
				{
					if (iComputerNumber[j * 5 + i] == STAR)
						iStarCount++;
				}

				if (iStarCount < 5 && iNewRecord < iStarCount)
				{
					iLineNumber = i;
					eLineCategory = VERTICAL;
					iNewRecord = iStarCount;
				}
			}

			// 대각선
			{
				// 좌상단
				iStarCount = 0;
				for (int i = 0; i < 25; i += 6)
				{
					if (iComputerNumber[i] == STAR)
						iStarCount++;
				}

				if (iStarCount < 5 && iNewRecord < iStarCount)
				{
					eLineCategory = LEFT_DIAGONAL;
					iNewRecord = iStarCount;
				}

				// 우하단
				iStarCount = 0;
				for (int i = 4; i <= 20; i += 4)
				{
					if (iComputerNumber[i] == STAR)
						iStarCount++;
				}

				if (iStarCount < 5 && iNewRecord < iStarCount)
				{
					eLineCategory = RIGHT_DIAGONAL;
					iNewRecord = iStarCount;
				}
			}

			// Select
			switch (eLineCategory)
			{
			case HORIZONTAL:
				for (int i = 0; i < 5; i++)
				{
					if (iComputerNumber[iLineNumber * 5 + i] != STAR)
					{
						iInput = iComputerNumber[iLineNumber * 5 + i];
						break;
					}
				}
				break;
			case VERTICAL:
				for (int i = 0; i < 5; i++)
				{
					if (iComputerNumber[i * 5 + iLineNumber] != STAR)
					{
						iInput = iComputerNumber[i * 5 + iLineNumber];
						break;
					}
				}
				break;
			case LEFT_DIAGONAL:
				for (int i = 0; i < 25; i += 6)
				{
					if (iComputerNumber[i] != STAR)
					{
						iInput = iComputerNumber[i];
						break;
					}
				}
				break;
			case RIGHT_DIAGONAL:
				for (int i = 4; i <= 20; i += 4)
				{
					if (iComputerNumber[i] != STAR)
					{
						iInput = iComputerNumber[i];
						break;
					}
				}
				break;
			default:
				break;
			}
		}
		break;
		}

		// Computer가 입력한 숫자를 Player Bingo Pannel에 적용
		for (int i = 0; i < 25; i++)
		{
			if (iPlayerNumber[i] == iInput)
			{
				iPlayerNumber[i] = STAR;
				break;
			}
		}

		// Computer가 입력한 숫자를 Computer Bingo Pannel에 적용
		for (int i = 0; i < 25; i++)
		{
			if (iComputerNumber[i] == iInput)
			{
				iComputerNumber[i] = STAR;
				break;
			}
		}


		iPlayerBingo = 0;
		iComputerBingo = 0;

		int iPlayerHorizontalStar = 0, iPlayerVerticalStar = 0, iPlayerDiagonalStar = 0;
		int iComputerHorizontalStar = 0, iComputerVerticalStar = 0, iComputerDiagonalStar = 0;

		// Horizontal, Vertical
		for (int i = 0; i < 5; i++)
		{
			iPlayerHorizontalStar = iPlayerVerticalStar = 0;
			iComputerHorizontalStar = iComputerVerticalStar = 0;
			for (int j = 0; j < 5; j++)
			{
				if (iPlayerNumber[i * 5 + j] == STAR)
					iPlayerHorizontalStar++;

				if (iPlayerNumber[j * 5 + i] == STAR)
					iPlayerVerticalStar++;

				if (iComputerNumber[i * 5 + j] == STAR)
					iComputerHorizontalStar++;

				if (iComputerNumber[j * 5 + i] == STAR)
					iComputerVerticalStar++;
			}

			if (iPlayerHorizontalStar == 5)
				iPlayerBingo++;

			if (iPlayerVerticalStar == 5)
				iPlayerBingo++;

			if (iComputerHorizontalStar == 5)
				iComputerBingo++;

			if (iComputerVerticalStar == 5)
				iComputerBingo++;
		}

		// Diagonal
		{
			// LT
			iPlayerDiagonalStar = 0;
			iComputerDiagonalStar = 0;
			for (int i = 0; i < 25; i += 6)
			{
				if (iPlayerNumber[i] == STAR)
					iPlayerDiagonalStar++;

				if (iComputerNumber[i] == STAR)
					iComputerDiagonalStar++;
			}
			if (iPlayerDiagonalStar == 5)
				iPlayerBingo++;

			if (iComputerDiagonalStar == 5)
				iComputerBingo++;

			// RT
			iPlayerDiagonalStar = 0;
			iComputerDiagonalStar = 0;
			for (int i = 4; i <= 20; i += 4)
			{
				if (iPlayerNumber[i] == STAR)
					iPlayerDiagonalStar++;

				if (iComputerNumber[i] == STAR)
					iComputerDiagonalStar++;
			}
			if (iPlayerDiagonalStar == 5)
				iPlayerBingo++;

			if (iComputerDiagonalStar == 5)
				iComputerBingo++;
		}
	}

	return 0;
}
