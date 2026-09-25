#include <iostream>
#include <cstring>

#define NAME_SIZE	32
#define ACCOUNT_NUMBER	100

using std::cin;
using std::cout;
using std::endl;

struct BankAccountInfo
{
	char szName[NAME_SIZE];			// Name
	int iBalance;					// Balance
	int iRoutingNumber[NAME_SIZE];	// Account Number
};

struct ACCOUNT
{
	BankAccountInfo tBankAccountInfo[ACCOUNT_NUMBER];
};

enum MENU
{
	MENUCREATACCOUNT = 1,
	MENUEACCOUNTINFO,
	MENUDEPOSIT,
	MENUWITHDRAWAL,
	MENUETRANSFER,
	EXIT,
};


int main()
{
	ACCOUNT accountlist;

	bool bSystemrun = true;
	int iAccountNumber = 0;

	for (int i = 0; i < ACCOUNT_NUMBER; i++)
	{
		accountlist.tBankAccountInfo[i].iBalance = 0;
	}


	while (bSystemrun)
	{
		system("cls");

		cout << "========== BANK ACCOUNT MANAGEMENT PROGRAM ==========" << endl << endl;
		cout << "1. Create Account" << endl << endl;
		cout << "2. View Account Information" << endl << endl;
		cout << "3. Deposit" << endl << endl;
		cout << "4. Withdrawal" << endl << endl;
		cout << "5. Transfer" << endl << endl;
		cout << "6. Exit" << endl << endl << endl << endl;

		cout << "Enter a menu option: ";

		int iMenu;
		cin >> iMenu;

		// Number of Accounts / Account Number

		switch (iMenu)
		{
		case MENUCREATACCOUNT:
		{
			cout << "Enter your name: ";
			cin >> accountlist.tBankAccountInfo[iAccountNumber].szName;

			cout << "Account Number: " << iAccountNumber;

			iAccountNumber++;

			break;
		}

		case MENUEACCOUNTINFO:
		{
			char szSearch[NAME_SIZE];

			cout << "Enter your name: ";
			cin >> szSearch;
			cout << endl << endl;

			for (int i = 0; i < iAccountNumber; i++)
			{
				if (strcmp(accountlist.tBankAccountInfo[i].szName, szSearch) == 0)
				{
					cout << "Account Number: " << i << endl;
					cout << "Balance: "
						<< accountlist.tBankAccountInfo[i].iBalance
						<< endl << endl;
				}
			}

			break;
		}

		case MENUDEPOSIT:
		{
			char szSearch[NAME_SIZE];
			int iDeposit;

			cout << "Enter your name: ";
			cin >> szSearch;
			cout << endl << endl;

			for (int i = 0; i < iAccountNumber; i++)
			{
				if (strcmp(accountlist.tBankAccountInfo[i].szName, szSearch) == 0)
				{
					cout << "Account Number: " << i << endl;

					cout << "Current Balance: ";
					cout << accountlist.tBankAccountInfo[i].iBalance;
					cout << endl << endl;

					cout << "Enter the amount to deposit: ";
					cin >> iDeposit;
					cout << endl << endl;

					accountlist.tBankAccountInfo[i].iBalance += iDeposit;

					cout << "New Balance: ";
					cout << accountlist.tBankAccountInfo[i].iBalance;
				}
			}

			break;
		}

		case MENUWITHDRAWAL:
		{
			char szSearch[NAME_SIZE];
			int iWithdrawal;

			cout << "Enter your name: ";
			cin >> szSearch;
			cout << endl << endl;

			for (int i = 0; i < iAccountNumber; i++)
			{
				if (strcmp(accountlist.tBankAccountInfo[i].szName, szSearch) == 0)
				{
					cout << "Account Number: " << i << endl;

					cout << "Current Balance: ";
					cout << accountlist.tBankAccountInfo[i].iBalance;
					cout << endl << endl;

					cout << "Enter the amount to withdraw: ";
					cin >> iWithdrawal;
					cout << endl << endl;

					if (accountlist.tBankAccountInfo[i].iBalance < iWithdrawal)
					{
						cout << "Insufficient balance.";
						break;
					}
					else
					{
						accountlist.tBankAccountInfo[i].iBalance -= iWithdrawal;

						cout << "New Balance: ";
						cout << accountlist.tBankAccountInfo[i].iBalance;
					}
				}
			}

			break;
		}

		case MENUETRANSFER:
		{
			char szSearch[NAME_SIZE];
			int iTransfer;

			cout << "Enter your name: ";
			cin >> szSearch;
			cout << endl << endl;

			cout << "Enter the amount to transfer: ";
			cin >> iTransfer;
			cout << endl << endl;

			for (int i = 0; i < iAccountNumber; i++)
			{
				if (accountlist.tBankAccountInfo[i].iBalance < iTransfer)
				{
					cout << "Insufficient balance.";
					break;
				}
				else if (strcmp(accountlist.tBankAccountInfo[i].szName, szSearch) == 0)
				{
					accountlist.tBankAccountInfo[i].iBalance -= iTransfer;

					cout << "Remaining Balance: "
						<< accountlist.tBankAccountInfo[i].iBalance;
				}
			}

			cout << endl << endl;

			cout << "Enter the recipient's name: ";
			cin >> szSearch;
			cout << endl << endl;

			for (int i = 0; i < iAccountNumber; i++)
			{
				if (strcmp(accountlist.tBankAccountInfo[i].szName, szSearch) == 0)
				{
					accountlist.tBankAccountInfo[i].iBalance += iTransfer;

					cout << "Current Balance: "
						<< accountlist.tBankAccountInfo[i].iBalance;
				}
			}

			break;
		}

		case EXIT:
		{
			bSystemrun = false;
			break;
		}
		}

		cout << endl << endl << endl << endl
			<< "The operation is complete. Press Enter to return to the menu.";

		system("pause>null");
	}

	return 0;
}
