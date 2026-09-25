#include <iostream>
#include <Windows.h>

#define DECK	5
#define RADIX	13

using std::cout;
using std::endl;

enum SPECIAL_NUMBER
{
	A = 0,
	J = 10,
	Q = 11,
	K = 12
};

enum TRUMP_CARD
{
	SPADE_A,
	SPADE_2,
	SPADE_3,
	SPADE_4,
	SPADE_5,
	SPADE_6,
	SPADE_7,
	SPADE_8,
	SPADE_9,
	SPADE_10,
	SPADE_J,
	SPADE_Q,
	SPADE_K,

	DIAMOND_A,
	DIAMOND_2,
	DIAMOND_3,
	DIAMOND_4,
	DIAMOND_5,
	DIAMOND_6,
	DIAMOND_7,
	DIAMOND_8,
	DIAMOND_9,
	DIAMOND_10,
	DIAMOND_J,
	DIAMOND_Q,
	DIAMOND_K,

	HEART_A,
	HEART_2,
	HEART_3,
	HEART_4,
	HEART_5,
	HEART_6,
	HEART_7,
	HEART_8,
	HEART_9,
	HEART_10,
	HEART_J,
	HEART_Q,
	HEART_K,

	CLOVER_A,
	CLOVER_2,
	CLOVER_3,
	CLOVER_4,
	CLOVER_5,
	CLOVER_6,
	CLOVER_7,
	CLOVER_8,
	CLOVER_9,
	CLOVER_10,
	CLOVER_J,
	CLOVER_Q,
	CLOVER_K,

	TRUMP_COUNT
};

int main()
{
	srand(time(NULL));

	int iTrumpCard[TRUMP_COUNT];
	for (int i = 0; i < TRUMP_COUNT; i++)
	{
		iTrumpCard[i] = i;
	}

	int iPlayer[DECK] = {};
	int iDealer[DECK] = {};

for (int i = TRUMP_COUNT - 1; i > 0; i--)
{
	int j = rand() % (i + 1);

	if (i == j)
		continue;

	// Swap Algorithm
	int iTemp = iTrumpCard[i];
	iTrumpCard[i] = iTrumpCard[j];
	iTrumpCard[j] = iTemp;


	system("cls");
	cout << TRUMP_COUNT - i << "회 Shuffle" << endl << endl;

	cout << "idx i: " << i << endl;
	cout << "idx j: " << j << endl << endl;

	cout << "TrumpCard[i]: " << iTrumpCard[i] << endl;
	cout << "TrumpCard[j]: " << iTrumpCard[j] << endl << endl;

	cout << "Trump Card: \t";
	for (int k = 0; k < TRUMP_COUNT; k++)
	{
		// Current Swaping Index
		if (i == k || j == k)
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);

		cout << iTrumpCard[k] << "[" << k << "]" << "\t";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}

	Sleep(50);
}
cout << endl << endl;


cout << "Trump Card:\t";
for (int i = 0; i < TRUMP_COUNT; i++)
{
	if (DIAMOND_A <= iTrumpCard[i] && iTrumpCard[i] <= HEART_K)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	else
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

	switch (iTrumpCard[i])
	{
	case SPADE_A:		cout << "♠ A";		break;
	case SPADE_2:		cout << "♠ 2";		break;
	case SPADE_3:		cout << "♠ 3";		break;
	case SPADE_4:		cout << "♠ 4";		break;
	case SPADE_5:		cout << "♠ 5";		break;
	case SPADE_6:		cout << "♠ 6";		break;
	case SPADE_7:		cout << "♠ 7";		break;
	case SPADE_8:		cout << "♠ 8";		break;
	case SPADE_9:		cout << "♠ 9";		break;
	case SPADE_10:		cout << "♠ 10";		break;
	case SPADE_J:		cout << "♠ J";		break;
	case SPADE_Q:		cout << "♠ Q";		break;
	case SPADE_K:		cout << "♠ K";		break;

	case DIAMOND_A:		cout << "◆ A";		break;
	case DIAMOND_2:		cout << "◆ 2";		break;
	case DIAMOND_3:		cout << "◆ 3";		break;
	case DIAMOND_4:		cout << "◆ 4";		break;
	case DIAMOND_5:		cout << "◆ 5";		break;
	case DIAMOND_6:		cout << "◆ 6";		break;
	case DIAMOND_7:		cout << "◆ 7";		break;
	case DIAMOND_8:		cout << "◆ 8";		break;
	case DIAMOND_9:		cout << "◆ 9";		break;
	case DIAMOND_10:	cout << "◆ 10";		break;
	case DIAMOND_J:		cout << "◆ J";		break;
	case DIAMOND_Q:		cout << "◆ Q";		break;
	case DIAMOND_K:		cout << "◆ K";		break;

	case HEART_A:		cout << "♥ A";		break;
	case HEART_2:		cout << "♥ 2";		break;
	case HEART_3:		cout << "♥ 3";		break;
	case HEART_4:		cout << "♥ 4";		break;
	case HEART_5:		cout << "♥ 5";		break;
	case HEART_6:		cout << "♥ 6";		break;
	case HEART_7:		cout << "♥ 7";		break;
	case HEART_8:		cout << "♥ 8";		break;
	case HEART_9:		cout << "♥ 9";		break;
	case HEART_10:		cout << "♥ 10";		break;
	case HEART_J:		cout << "♥ J";		break;
	case HEART_Q:		cout << "♥ Q";		break;
	case HEART_K:		cout << "♥ K";		break;

	case CLOVER_A:		cout << "♣ A";		break;
	case CLOVER_2:		cout << "♣ 2";		break;
	case CLOVER_3:		cout << "♣ 3";		break;
	case CLOVER_4:		cout << "♣ 4";		break;
	case CLOVER_5:		cout << "♣ 5";		break;
	case CLOVER_6:		cout << "♣ 6";		break;
	case CLOVER_7:		cout << "♣ 7";		break;
	case CLOVER_8:		cout << "♣ 8";		break;
	case CLOVER_9:		cout << "♣ 9";		break;
	case CLOVER_10:		cout << "♣ 10";		break;
	case CLOVER_J:		cout << "♣ J";		break;
	case CLOVER_Q:		cout << "♣ Q";		break;
	case CLOVER_K:		cout << "♣ K";		break;
	}

	cout << "\t";
}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
cout << endl << endl << endl;


for (int i = 0; i < DECK; i++)
{
	// 한번에 연속으로 분배
	// iPlayer[i] = iTrumpCard[i];
	// iDealer[i] = iTrumpCard[i + DECK];

	// 한장 한장 차례대로 분배
	iPlayer[i] = iTrumpCard[i * 2];
	iDealer[i] = iTrumpCard[i * 2 + 1];
}


// Sort
{
	auto RenderSortCards = [&](int iFirst, int iSecond = -1, int iCardCount = DECK)
	{
		system("cls");
		cout << "Player Card: \t";

		for (int i = 0; i < iCardCount; i++)
		{
			if (i == iFirst || i == iSecond)
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);

			switch (iPlayer[i] / RADIX)
			{
			case 0: cout << "♠ "; break;
			case 1: cout << "◆ "; break;
			case 2: cout << "♥ "; break;
			case 3: cout << "♣ "; break;
			}

			switch (iPlayer[i] % RADIX)
			{
			case A:  cout << "A"; break;
			case J: cout << "J"; break;
			case Q: cout << "Q"; break;
			case K: cout << "K"; break;
			default: cout << iPlayer[i] % RADIX + 1; break;
			}

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << "\t";
		}

		Sleep(1000);
	};

		// Bubble Sort 변형
		for (int i = 0; i < DECK; i++)
		{
			for (int j = i + 1; j < DECK; j++)
			{
				if (iPlayer[i] > iPlayer[j])
				{
					int iTemp = iPlayer[i];
					iPlayer[i] = iPlayer[j];
					iPlayer[j] = iTemp;
				}

				if (iDealer[i] > iDealer[j])
				{
					int iTemp = iDealer[i];
					iDealer[i] = iDealer[j];
					iDealer[j] = iTemp;
				}
			}
		}
	}


	// Rendering
	cout << "Player Card:\t";
	for (int i = 0; i < DECK; i++)
	{
		if (DIAMOND_A <= iPlayer[i] && iPlayer[i] <= HEART_K)
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		else
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

		switch (iPlayer[i] / RADIX)
		{
		case 0:
			cout << "♠ ";
			break;
		case 1:
			cout << "◆ ";
			break;
		case 2:
			cout << "♥ ";
			break;
		case 3:
			cout << "♣ ";
			break;
		}

		// Number
		switch (iPlayer[i] % RADIX)
		{
		case A:
			cout << "A";
			break;
		case J:
			cout << "J";
			break;
		case Q:
			cout << "Q";
			break;
		case K:
			cout << "K";
			break;
		default:
			cout << iPlayer[i] % RADIX + 1;
			break;
		}
		cout << "\t";
	}
	cout << endl;



	cout << "Dealer Card:\t";
	for (int i = 0; i < DECK; i++)
	{
		if (DIAMOND_A <= iDealer[i] && iDealer[i] <= HEART_K)
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		else
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

		switch (iDealer[i] / RADIX)
		{
		case 0:
			cout << "♠ ";
			break;
		case 1:
			cout << "◆ ";
			break;
		case 2:
			cout << "♥ ";
			break;
		case 3:
			cout << "♣ ";
			break;
		}

		switch (iDealer[i] % RADIX)
		{
		case A:
			cout << "A";
			break;
		case J:
			cout << "J";
			break;
		case Q:
			cout << "Q";
			break;
		case K:
			cout << "K";
			break;
		default:
			cout << iDealer[i] % RADIX + 1;
			break;
		}
		cout << "\t";
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl;


	return 0;
}
