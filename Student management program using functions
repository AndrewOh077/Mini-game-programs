#include <iostream>
#include <cstring>

using std::endl;
using std::cout;
using std::cin;

struct STUDENT
{
	char szName[20];
	int iScore;
};

struct NODE
{
	STUDENT tStudent;
	NODE* pNext;
};

void AddStudent(NODE*& pFirst)
{
	NODE* pNewNode = new NODE;

	cout << "Name: ";
	cin >> pNewNode->tStudent.szName;

	cout << "Score: ";
	cin >> pNewNode->tStudent.iScore;

	pNewNode->pNext = nullptr;

	if (pFirst == nullptr)
	{
		pFirst = pNewNode;
		return;
	}

	NODE* pCurrent = pFirst;

	while (pCurrent->pNext != nullptr)
	{
		pCurrent = pCurrent->pNext;
	}

	pCurrent->pNext = pNewNode;
}

void PrintStudent(NODE* pFirst)
{
	NODE* pCurrent = pFirst;

	while (pCurrent != nullptr)
	{
		cout << "Name: " << pCurrent->tStudent.szName << endl;

		cout << "Score: " << pCurrent->tStudent.iScore << endl;

		pCurrent = pCurrent->pNext;
	}
}

void SearchStudent(NODE* pFirst)
{
	char SearchName[20];

	cout << "Enter the name of the student to search: ";
	cin >> SearchName;

	NODE* pCurrent = pFirst;

	while (pCurrent != nullptr)
	{
		if (strcmp(pCurrent->tStudent.szName, SearchName) == 0)
		{
			cout << endl << "Student found." << endl;

			cout << "Name: " << pCurrent->tStudent.szName << endl;

			cout << "Score: " << pCurrent->tStudent.iScore << endl;

			return;
		}

		pCurrent = pCurrent->pNext;
	}

	cout << "Student does not exist." << endl;
}

void DeleteStudent(NODE*& pFirst)
{
	char DeleteName[20];

	cout << "Enter the name of the student to delete: ";
	cin >> DeleteName;

	NODE* pCurrent = pFirst;
	NODE* pPrev = nullptr;

	while (pCurrent != nullptr)
	{
		if (strcmp(pCurrent->tStudent.szName, DeleteName) == 0)
		{
			if (pPrev == nullptr)
			{
				pFirst = pCurrent->pNext;
			}
			else
			{
				pPrev->pNext = pCurrent->pNext;
			}

			delete pCurrent;
			cout << "Student has been deleted." << endl;

			return;
		}

		pPrev = pCurrent;
		pCurrent = pCurrent->pNext;
	}
}

void ShutDown(NODE*& pFirst)
{
	while (pFirst != nullptr)
	{
		NODE* pDelete = pFirst;

		pFirst = pFirst->pNext;

		delete pDelete;
	}
}

int main()
{
	NODE* pFirst = nullptr;

	while (true)
	{
		system("cls");

		int iMenu;

		cout << endl << endl;

		cout << "======= STUDENT MANAGEMENT PROGRAM =======" << endl;
		cout << "1. Add Student" << endl;
		cout << "2. Delete Student" << endl;
		cout << "3. Search Student" << endl;
		cout << "4. Print All Students" << endl;
		cout << "5. Exit" << endl;

		cout << "Menu: ";
		cin >> iMenu;

		switch (iMenu)
		{
			case 1:
			{
				AddStudent(pFirst);
				break;
			}
			case 2:
			{
				DeleteStudent(pFirst);
				break;
			}
			case 3:
			{
				SearchStudent(pFirst);
				break;
			}
			case 4:
			{
				PrintStudent(pFirst);
				break;
			}
			case 5:
			{
				ShutDown(pFirst);
				return 0;
				break;
			}
		}

		cout << endl << endl << endl << endl
			 << "The operation is complete. Press Enter to return to the menu.";

		system("pause>null");
	}
}
