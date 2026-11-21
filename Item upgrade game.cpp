#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	srand(static_cast<unsigned int>(time(NULL)));

	int iUpgrade = 0;
	bool systemrun = true;

	while (iUpgrade < 10 && systemrun == true)
	{
		float fPercent = rand() % 10000 * 0.01f;

		bool bSuccess;

		int iChoice;

		cout << "Would you like to upgrade?" << endl;
		cout << "1: Upgrade / 2: Exit" << endl;
		cin >> iChoice;

		switch (iUpgrade)
		{
		case (0):
			switch (iChoice)
			{
			case (1):
				cout << "Upgrade Successful!!!  Upgrade Level: ";
				cout << (iUpgrade = 1) << endl;
				break;

			case (2):
				cout << "Program Exit" << endl;
				systemrun = false;
				break;

			default:
				cout << "Invalid input. Please try again." << endl;
				continue;
			}
			break;


		case (1):
			switch (iChoice)
			{
			case (1):
				bSuccess = fPercent <= 90.0f;

				cout << "Upgrade Success Rate: 90%" << endl;
				cout << (bSuccess ? "Upgrade Successful!!!  Upgrade Level: " : "Upgrade Failed...  Upgrade Level: ");
				cout << (bSuccess ? iUpgrade = 2 : iUpgrade = 0) << endl;
				break;

			case (2):
				cout << "Program Exit" << endl;
				systemrun = false;
				break;

			default:
				cout << "Invalid input." << endl;
				break;
			}
			break;


		case (2):
			switch (iChoice)
			{
			case (1):
				bSuccess = fPercent <= 80.0f;

				cout << "Upgrade Success Rate: 80%" << endl;
				cout << (bSuccess ? "Upgrade Successful!!!  Upgrade Level: " : "Upgrade Failed...  Upgrade Level: ");
				cout << (bSuccess ? iUpgrade = 3 : iUpgrade = 1) << endl;
				break;

			case (2):
				cout << "Program Exit" << endl;
				systemrun = false;
				break;

			default:
				cout << "Invalid input." << endl;
				break;
			}
			break;


		case (3):
			switch (iChoice)
			{
			case (1):
				bSuccess = fPercent <= 70.0f;

				cout << "Upgrade Success Rate: 70%" << endl;
				cout << (bSuccess ? "Upgrade Successful!!!  Upgrade Level: " : "Upgrade Failed...  Upgrade Level: ");
				cout << (bSuccess ? iUpgrade = 4 : iUpgrade = 2) << endl;
				break;

			case (2):
				cout << "Program Exit" << endl;
				systemrun = false;
				break;

			default:
				cout << "Invalid input." << endl;
				break;
			}
			break;


		case (4):
			switch (iChoice)
			{
			case (1):
				bSuccess = fPercent <= 60.0f;

				cout << "Upgrade Success Rate: 60%" << endl;
				cout << (bSuccess ? "Upgrade Successful!!!  Upgrade Level: " : "Upgrade Failed...  Upgrade Level: ");
				cout << (bSuccess ? iUpgrade = 5 : iUpgrade = 3) << endl;
				break;

			case (2):
				cout << "Program Exit" << endl;
				systemrun = false;
				break;

			default:
				cout << "Invalid input." << endl;
				break;
			}
			break;


		case (5):
			switch (iChoice)
			{
			case (1):
				bSuccess = fPercent <= 50.0f;

				cout << "Upgrade Success Rate: 50%" << endl;
				cout << (bSuccess ? "Upgrade Successful!!!  Upgrade Level: " : "Upgrade Failed...  Upgrade Level: ");
				cout << (bSuccess ? iUpgrade = 6 : iUpgrade = 4) << endl;
				break;

			case (2):
				cout << "Program Exit" << endl;
				systemrun = false;
				break;

			default:
				cout << "Invalid input." << endl;
				break;
			}
			break;


		case (6):
			switch (iChoice)
			{
			case (1):
				bSuccess = fPercent <= 40.0f;

				cout << "Upgrade Success Rate: 40%" << endl;
				cout << (bSuccess ? "Upgrade Successful!!!  Upgrade Level: " : "Upgrade Failed...  Upgrade Level: ");
				cout << (bSuccess ? iUpgrade = 7 : iUpgrade = 5) << endl;
				break;

			case (2):
				cout << "Program Exit" << endl;
				systemrun = false;
				break;

			default:
				cout << "Invalid input." << endl;
				break;
			}
			break;


		case (7):
			switch (iChoice)
			{
			case (1):
				bSuccess = fPercent <= 30.0f;

				cout << "Upgrade Success Rate: 30%" << endl;
				cout << (bSuccess ? "Upgrade Successful!!!  Upgrade Level: " : "Upgrade Failed...  Upgrade Level: ");
				cout << (bSuccess ? iUpgrade = 8 : iUpgrade = 6) << endl;
				break;

			case (2):
				cout << "Program Exit" << endl;
				systemrun = false;
				break;

			default:
				cout << "Invalid input." << endl;
				break;
			}
			break;


		case (8):
			switch (iChoice)
			{
			case (1):
				bSuccess = fPercent <= 20.0f;

				cout << "Upgrade Success Rate: 20%" << endl;
				cout << (bSuccess ? "Upgrade Successful!!!  Upgrade Level: " : "Upgrade Failed...  Upgrade Level: ");
				cout << (bSuccess ? iUpgrade = 9 : iUpgrade = 7) << endl;
				break;

			case (2):
				cout << "Program Exit" << endl;
				systemrun = false;
				break;

			default:
				cout << "Invalid input." << endl;
				break;
			}
			break;


		case (9):
			switch (iChoice)
			{
			case (1):
				bSuccess = fPercent <= 10.0f;

				cout << "Upgrade Success Rate: 10%" << endl;
				cout << (bSuccess ? "Upgrade Successful!!!  Upgrade Level: " : "Upgrade Failed...  Upgrade Level: ");
				cout << (bSuccess ? iUpgrade = 10 : iUpgrade = 8) << endl;
				break;

			case (2):
				cout << "Program Exit" << endl;
				systemrun = false;
				break;

			default:
				cout << "Invalid input." << endl;
				break;
			}
			break;


		default:
			cout << "This upgrade level is not available." << endl;
		}

		// Print 3 blank lines after each action
		cout << endl << endl << endl;
	}

	return 0;
}
