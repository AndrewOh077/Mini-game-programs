#include <iostream>

#define NAME_SIZE		32
#define ADDRESS_SIZE	128
#define PHONE_SIZE		14

#define STUDENT_SIZE	10

using std::cin;
using std::cout;
using std::endl;

struct __Student
{
	char	szName[NAME_SIZE];
	char	szAddress[ADDRESS_SIZE];
	char	szPhone[PHONE_SIZE];

	int		iNumber;
	int		iKorean;
	int		iEnglish;
	int		iMath;
	int		iTotal;
	float	fAverage;

	char	cGrade;
	int		iRank;
};

enum MAIN_MENU
{
	MENU_NONE,
	MENU_REGISTRATION,
	MENU_DELETE,
	MENU_SEARCH,
	MENU_PRINT,
	MENU_EXIT
};

int main()
{
	__Student tStudentArray[STUDENT_SIZE] = {};

	int iStudentCount = 0;
	int iStudentNumber = 1;

	while (true)
	{
		system("cls");
		cout << "_____________ STUDENT MANAGEMENT _____________" << endl << endl << endl << endl;

		cout << "\t1. Register New Student" << endl << endl;
		cout << "\t2. Delete Student Information" << endl << endl;
		cout << "\t3. Search Student Information" << endl << endl;
		cout << "\t4. Print All Students" << endl << endl;
		cout << "\t5. Exit Program" << endl << endl << endl << endl;

		cout << "\tSelect a menu: ";

		int iMenu;
		cin >> iMenu;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
			continue;
		}

		if (iMenu == MENU_EXIT)
			break;

		switch (iMenu)
		{
		case MENU_REGISTRATION:
			system("cls");
			cout << "____________ STUDENT REGISTRATION ____________" << endl << endl << endl << endl;

			if (iStudentCount == STUDENT_SIZE)
			{
				cout << "No more students can be registered." << endl << endl;
				break;
			}

			cout << "Name: ";
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cin.getline(tStudentArray[iStudentCount].szName, NAME_SIZE);

			cout << "Address: ";
			cin.sync();
			cin.getline(tStudentArray[iStudentCount].szAddress, ADDRESS_SIZE);

			cout << "Phone Number: ";
			cin.sync();
			cin.getline(tStudentArray[iStudentCount].szPhone, PHONE_SIZE);

			cout << endl;

			cout << "Korean: ";
			cin >> tStudentArray[iStudentCount].iKorean;

			cout << "English: ";
			cin >> tStudentArray[iStudentCount].iEnglish;

			cout << "Math: ";
			cin >> tStudentArray[iStudentCount].iMath;

			// Total Score
			tStudentArray[iStudentCount].iTotal =
				tStudentArray[iStudentCount].iKorean +
				tStudentArray[iStudentCount].iEnglish +
				tStudentArray[iStudentCount].iMath;

			// Average
			tStudentArray[iStudentCount].fAverage =
				tStudentArray[iStudentCount].iTotal / 3.f;


			switch (static_cast<int>(tStudentArray[iStudentCount].fAverage / 10))
			{
			case 10:
			case 9:
				tStudentArray[iStudentCount].cGrade = 'A';
				break;
			case 8:
				tStudentArray[iStudentCount].cGrade = 'B';
				break;
			case 7:
				tStudentArray[iStudentCount].cGrade = 'C';
				break;
			case 6:
				tStudentArray[iStudentCount].cGrade = 'D';
				break;
			default:
				tStudentArray[iStudentCount].cGrade = 'F';
				break;
			}

			cout << tStudentArray[iStudentCount].szName << " has been registered." << endl;

			tStudentArray[iStudentCount++].iNumber = iStudentNumber++;

			for (int i = 0; i < iStudentCount; i++)
			{
				tStudentArray[i].iRank = 1;
			}

			for (int i = 0; i < iStudentCount; i++)
			{
				for (int j = 0; j < iStudentCount; j++)
				{
					if (tStudentArray[i].iTotal < tStudentArray[j].iTotal)
						tStudentArray[i].iRank++;
				}
			}
			break;

		case MENU_DELETE:
			system("cls");
			cout << "_______________ STUDENT DELETE _______________" << endl << endl << endl << endl;
			cout << "Enter the name of the student to delete: ";
			{
				cin.ignore();
				char szInput[NAME_SIZE] = {};
				cin.getline(szInput, NAME_SIZE);

				system("cls");

				cout << "______________ SEARCHING RESULT ______________" << endl << endl << endl << endl;
				bool bFind = false;
				for (int i = 0; i < iStudentCount; i++)
				{
					if (strcmp(tStudentArray[i].szName, szInput) == 0)
					{
						for (int j = i; j < iStudentCount - 1; j++)
						{
							tStudentArray[j] = tStudentArray[j + 1];
						}
						iStudentCount--;

						cout << szInput << "'s information has been deleted." << endl;
						bFind = true;
						break;
					}
				}

				if (!bFind)
				{
					cout << szInput << "'s information does not exist." << endl;
				}
			}
			break;

		case MENU_SEARCH:
			system("cls");
			cout << "_______________ STUDENT SEARCH _______________" << endl << endl << endl << endl;
			cout << "Enter the name of the student to search: ";
			{
				cin.ignore();
				char szInput[NAME_SIZE] = {};
				cin.getline(szInput, NAME_SIZE);

				system("cls");
				cout << "______________ SEARCHING RESULT ______________" << endl << endl << endl << endl;
				bool bFind = false;
				for (int i = 0; i < iStudentCount; i++)
				{
					if (strcmp(tStudentArray[i].szName, szInput) == 0)
					{
						cout << "Name: " << tStudentArray[i].szName << "\t\t\t";
						cout << "Student Number: " << tStudentArray[i].iNumber << endl;
						cout << "Address: " << tStudentArray[i].szAddress << "\t";
						cout << "Phone Number: " << tStudentArray[i].szPhone << endl << endl;

						cout << "Grade: " << tStudentArray[i].cGrade << endl;
						cout << "Korean: " << tStudentArray[i].iKorean << "\t";
						cout << "English: " << tStudentArray[i].iEnglish << "\t";
						cout << "Math: " << tStudentArray[i].iMath << endl;
						cout << "Total Score: " << tStudentArray[i].iTotal << "\t";
						cout << "Average: " << tStudentArray[i].fAverage << "\t";
						cout << "Rank: " << tStudentArray[i].iRank << endl << endl << endl << endl << endl;

						bFind = true;
						break;
					}
				}

				if (!bFind)
				{
					cout << szInput << "'s information does not exist." << endl;
				}
			}
			break;

		case MENU_PRINT:
			system("cls");
			cout << "________________ STUDENT LIST ________________" << endl << endl << endl << endl;

			for (int i = 0; i < iStudentCount; i++)
			{
				cout << "Name: " << tStudentArray[i].szName << "\t\t\t";
				cout << "Student Number: " << tStudentArray[i].iNumber << endl;
				cout << "Address: " << tStudentArray[i].szAddress << "\t";
				cout << "Phone Number: " << tStudentArray[i].szPhone << endl << endl;

				cout << "Grade: " << tStudentArray[i].cGrade << endl;
				cout << "Korean: " << tStudentArray[i].iKorean << "\t";
				cout << "English: " << tStudentArray[i].iEnglish << "\t";
				cout << "Math: " << tStudentArray[i].iMath << endl;
				cout << "Total Score: " << tStudentArray[i].iTotal << "\t";
				cout << "Average: " << tStudentArray[i].fAverage << "\t";
				cout << "Rank: " << tStudentArray[i].iRank << endl << endl << endl << endl << endl;
			}

			break;

		default:
			cout << endl << "Invalid menu selection." << endl << endl;
			break;
		}

		system("pause > nul");
	}

	return 0;
}
