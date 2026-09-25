#include <iostream>
#include <Windows.h>

#define SleepTime      50

#pragma execution_character_set("utf-8")

using std::cout;
using std::endl;

enum ROCK_PAPER_SCISSORS
{
    SCISSORS = 1,
    ROCK,
    PAPER,

    GAME_EXIT
};

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleTitle(L"ROCK PAPER SCISSORS");
    system("mode con:cols=67 lines=40");

    srand(time(NULL));

    int iPlayer, iComputer;


    while (true)
    {
        int iSleepTerm = 0;
        while (true)
        {
            bool bRet = false;
            system("cls");
            cout << "_______________________ ROCK PAPER SCISSORS _______________________" << endl << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);      // Red
            cout << "\t\t\t⠀⠀⠀⢀⣠⣤⣀⣠⣤⠶⠶⠒⠶⠶⣤⣀" << endl;
            cout << "\t\t\t⠀⢀⡴⠋⣠⠞⠋⠁⠀⠀⠀⠀⠙⣄⠀⠙⢷⡀" << endl;
            cout << "\t\t\t⢀⡾⠁⣴⠋⠰⣤⣄⡀⠀⠀⠀⠀⠈⠳⢤⣼⣇⣀⣀" << endl;
            cout << "\t\t\t⢸⠃⢰⠇⠰⢦⣄⡈⠉⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠉⠛⠛⠓⠲⢦⣄" << endl;
            cout << "\t\t\t⠸⣧⣿⠀⠻⣤⡈⠛⠳⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⢻⡆" << endl;
            cout << "\t\t\t⠀⠈⠹⣆⠀⠈⠛⠂⠀⠀⠀⠀⠀⠀⠈⠐⠒⠒⠶⣶⣶⠶⠤⠤⣤⣠⡼⠃" << endl;
            cout << "\t\t\t⠀⠀⠀⠹⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠳⢦⣀⠀⠀" << endl;
            cout << "\t\t\t⠀⠀⠀⠀⠈⠻⣦⣀⠀⠀⠀⠀⠐⠲⠤⣤⣀⡀⠀⠀⠀⠀⠀⠉⢳⡄" << endl;
            cout << "\t\t\t⠀⠀⠀⠀⠀⠀⠀⠉⠛⠶⠤⠤⠤⠶⠞⠋⠉⠙⠳⢦⣄⡀⠀⠀⠀⡷" << endl;
            cout << "\t\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠳⠦⠾⠃" << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);      // White
            cout << endl << endl << endl << endl << "\t\t\t Press Enter Key" << endl << endl;
            //Sleep(SleepTime);

            iSleepTerm = 0;
            while (iSleepTerm++ < SleepTime)
            {
                iPlayer = SCISSORS;
                if (GetAsyncKeyState(VK_RETURN) & 0x1)
                {
                    bRet = true;
                    break;
                }
                Sleep(1);
            }
            if (bRet)
                break;


            system("cls");
            cout << "_______________________ ROCK PAPER SCISSORS _______________________" << endl << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);   // Green
            cout << "\t\t\t⠀⠀⠀⠀⠀⣠⡴⠖⠒⠲⠶⢤⣄⡀" << endl;
            cout << "\t\t\t⠀⠀⠀⢀⡾⠁⠀⣀⠔⠁⠀ ⠈⠙⠷⣤⠦⣤⡀" << endl;
            cout << "\t\t\t ⣠⠞⠛⠛⠛⠋⠉⠀⠀⠀⠀⠀⠀⠀⠘⢧⠈⢿⡀" << endl;
            cout << "\t\t\t⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠟⠛⠛⠃⠸⡇⠈⣇" << endl;
            cout << "\t\t\t⣹⡷⠤⠤⠤⠄⠀⠀⠀⠀⢠⣤⡤⠶⠖⠛⠀⣿⠀⣿" << endl;
            cout << "\t\t\t⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡤⠖⠋⢀⣿⣠⠏" << endl;
            cout << "\t\t\t⢿⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡾⠋⠁" << endl;
            cout << "\t\t\t⠀⠉⢿⡋⠉⠉⠁⠀⠀⠀⠀⠀⢀⣠⠾⠋" << endl;
            cout << "\t\t\t⠀⠀⠈⠛⠶⠦⠤⠤⠤⠶⠶⠛⠋⠁" << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);      // White
            cout << endl << endl << endl << endl << endl << "\t\t\t Press Enter Key" << endl << endl;
            //Sleep(SleepTime);
            iSleepTerm = 0;
            while (iSleepTerm++ < SleepTime)
            {
                iPlayer = ROCK;
                if (GetAsyncKeyState(VK_RETURN) & 0x1)
                {
                    bRet = true;
                    break;
                }
                Sleep(1);
            }
            if (bRet)
                break;


            system("cls");
            cout << "_______________________ ROCK PAPER SCISSORS _______________________" << endl << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);      // Yellow
            cout << "\t\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⠀  ⠀⣠⡴⠖⠒⢶⣄" << endl;
            cout << "\t\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀   ⠀⢀⡼⠋⠀ ⠀⠀⢀⡿" << endl;
            cout << "\t\t\t⢠⡶⠒⠳⠶⣄⠀⠀ ⠀ ⠀⣴⠟⠁ ⠀⠀ ⠀⣰⠏⢀⣤⣤⣄⡀" << endl;
            cout << "\t\t\t⠸⡇⠀⠀⠀⠘⣇⠀ ⠀⣠⡾⠁⠀⠀  ⢀⣾⣣⡴⠚⠉⠀ ⠈⠹⡆" << endl;
            cout << "\t\t\t⠀⢻⡄⠀⠀⠀⢻⣠⡾⠋⠀⠀ ⠀⠀⣠⡾⠋⠁⠀⠀⠀⠀⢀⣠⡾⠃" << endl;
            cout << "\t\t\t⠀⠀⣿⠀⠀⠀⠘⠉⠀⠀⠀⠀⠀⡰⠋⠀⠀⠀⠀⠀⣠⠶⠋⠁" << endl;
            cout << "\t\t\t⠀⠠⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠁⠀ ⠀⢀⣴⡿⠥⠶⠖⠛⠛⢶⡄" << endl;
            cout << "\t\t\t⢀⣰⡇⠀⠀⢀⡄⠀⠀⠀⠀⠀⠀⠀⠀⢀⡴⠋⠀⠀⠀⠀⠀⢀⣠⠼⠃" << endl;
            cout << "\t\t\t⣿⠉⣇⠀⡴⠟⠁⣠⡾⠃⠀⠀⠀⠀⠀⠈⠀⠀⠀⣀⣤⠶⠛⠉" << endl;
            cout << "\t\t\t⢻⡄⠹⣦⠀⠶⠛⢁⣠⡴⠀⠀⠀⠀⠀⠀⣠⡶⠛⠉" << endl;
            cout << "\t\t\t⠀⠻⣄⠈⢷⣄⠈⠉⠁⠀⠀⠀⢀⣠⡴⠟⠁" << endl;
            cout << "\t\t\t ⠀⠉⠳⢤⣭⡿⠒⠶⠶⠒⠚⠋⠁" << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);      // White
            cout << endl << endl << "\t\t\t Press Enter Key" << endl << endl;
            //Sleep(SleepTime);
            iSleepTerm = 0;
            while (iSleepTerm++ < SleepTime)
            {
                iPlayer = PAPER;
                if (GetAsyncKeyState(VK_RETURN) & 0x1)
                {
                    bRet = true;
                    break;
                }
                Sleep(1);
            }
            if (bRet)
                break;
        }


        iComputer = rand() % PAPER + SCISSORS;




        // Print Result
        system("cls");
        cout << "_______________________ ROCK PAPER SCISSORS _______________________" << endl << endl;

        cout << "YOU: " << endl << endl;
        switch (iPlayer)
        {
        case SCISSORS:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);   // Red
            cout << "\t⠀⠀⠀⢀⣠⣤⣀⣠⣤⠶⠶⠒⠶⠶⣤⣀" << endl;
            cout << "\t⠀⢀⡴⠋⣠⠞⠋⠁⠀⠀⠀⠀⠙⣄⠀⠙⢷⡀" << endl;
            cout << "\t⢀⡾⠁⣴⠋⠰⣤⣄⡀⠀⠀⠀⠀⠈⠳⢤⣼⣇⣀⣀" << endl;
            cout << "\t⢸⠃⢰⠇⠰⢦⣄⡈⠉⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠉⠛⠛⠓⠲⢦⣄" << endl;
            cout << "\t⠸⣧⣿⠀⠻⣤⡈⠛⠳⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⢻⡆" << endl;
            cout << "\t⠀⠈⠹⣆⠀⠈⠛⠂⠀⠀⠀⠀⠀⠀⠈⠐⠒⠒⠶⣶⣶⠶⠤⠤⣤⣠⡼⠃" << endl;
            cout << "\t⠀⠀⠀⠹⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠳⢦⣀⠀⠀" << endl;
            cout << "\t⠀⠀⠀⠀⠈⠻⣦⣀⠀⠀⠀⠀⠐⠲⠤⣤⣀⡀⠀⠀⠀⠀⠀⠉⢳⡄" << endl;
            cout << "\t⠀⠀⠀⠀⠀⠀⠀⠉⠛⠶⠤⠤⠤⠶⠞⠋⠉⠙⠳⢦⣄⡀⠀⠀⠀⡷" << endl;
            cout << "\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠳⠦⠾⠃" << endl;
            break;
        case ROCK:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);   // Green
            cout << "\t⠀⠀⠀⠀⠀⣠⡴⠖⠒⠲⠶⢤⣄⡀" << endl;
            cout << "\t⠀⠀⠀⢀⡾⠁⠀⣀⠔⠁⠀ ⠈⠙⠷⣤⠦⣤⡀" << endl;
            cout << "\t ⣠⠞⠛⠛⠛⠋⠉⠀⠀⠀⠀⠀⠀⠀⠘⢧⠈⢿⡀" << endl;
            cout << "\t⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠟⠛⠛⠃⠸⡇⠈⣇" << endl;
            cout << "\t⣹⡷⠤⠤⠤⠄⠀⠀⠀⠀⢠⣤⡤⠶⠖⠛⠀⣿⠀⣿" << endl;
            cout << "\t⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡤⠖⠋⢀⣿⣠⠏" << endl;
            cout << "\t⢿⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡾⠋⠁" << endl;
            cout << "\t⠀⠉⢿⡋⠉⠉⠁⠀⠀⠀⠀⠀⢀⣠⠾⠋" << endl;
            cout << "\t⠀⠀⠈⠛⠶⠦⠤⠤⠤⠶⠶⠛⠋⠁" << endl;
            break;
        case PAPER:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);   // Yellow
            cout << "\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⠀  ⠀⣠⡴⠖⠒⢶⣄" << endl;
            cout << "\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀   ⠀⢀⡼⠋⠀ ⠀⠀⢀⡿" << endl;
            cout << "\t⢠⡶⠒⠳⠶⣄⠀⠀ ⠀ ⠀⣴⠟⠁ ⠀⠀ ⠀⣰⠏⢀⣤⣤⣄⡀" << endl;
            cout << "\t⠸⡇⠀⠀⠀⠘⣇⠀ ⠀⣠⡾⠁⠀⠀  ⢀⣾⣣⡴⠚⠉⠀ ⠈⠹⡆" << endl;
            cout << "\t⠀⢻⡄⠀⠀⠀⢻⣠⡾⠋⠀⠀ ⠀⠀⣠⡾⠋⠁⠀⠀⠀⠀⢀⣠⡾⠃" << endl;
            cout << "\t⠀⠀⣿⠀⠀⠀⠘⠉⠀⠀⠀⠀⠀⡰⠋⠀⠀⠀⠀⠀⣠⠶⠋⠁" << endl;
            cout << "\t⠀⠠⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠁⠀ ⠀⢀⣴⡿⠥⠶⠖⠛⠛⢶⡄" << endl;
            cout << "\t⢀⣰⡇⠀⠀⢀⡄⠀⠀⠀⠀⠀⠀⠀⠀⢀⡴⠋⠀⠀⠀⠀⠀⢀⣠⠼⠃" << endl;
            cout << "\t⣿⠉⣇⠀⡴⠟⠁⣠⡾⠃⠀⠀⠀⠀⠀⠈⠀⠀⠀⣀⣤⠶⠛⠉" << endl;
            cout << "\t⢻⡄⠹⣦⠀⠶⠛⢁⣠⡴⠀⠀⠀⠀⠀⠀⣠⡶⠛⠉" << endl;
            cout << "\t⠀⠻⣄⠈⢷⣄⠈⠉⠁⠀⠀⠀⢀⣠⡴⠟⠁" << endl;
            cout << "\t ⠀⠉⠳⢤⣭⡿⠒⠶⠶⠒⠚⠋⠁" << endl;
            break;
        }
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);      // White
        cout << endl << endl << endl;


        cout << "COM: " << endl << endl;
        switch (iComputer)
        {
        case SCISSORS:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);   // Red
            cout << "\t\t\t\t⠀⠀⠀⢀⣠⣤⣀⣠⣤⠶⠶⠒⠶⠶⣤⣀" << endl;
            cout << "\t\t\t\t⠀⢀⡴⠋⣠⠞⠋⠁⠀⠀⠀⠀⠙⣄⠀⠙⢷⡀" << endl;
            cout << "\t\t\t\t⢀⡾⠁⣴⠋⠰⣤⣄⡀⠀⠀⠀⠀⠈⠳⢤⣼⣇⣀⣀" << endl;
            cout << "\t\t\t\t⢸⠃⢰⠇⠰⢦⣄⡈⠉⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠉⠛⠛⠓⠲⢦⣄" << endl;
            cout << "\t\t\t\t⠸⣧⣿⠀⠻⣤⡈⠛⠳⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⢻⡆" << endl;
            cout << "\t\t\t\t⠀⠈⠹⣆⠀⠈⠛⠂⠀⠀⠀⠀⠀⠀⠈⠐⠒⠒⠶⣶⣶⠶⠤⠤⣤⣠⡼⠃" << endl;
            cout << "\t\t\t\t⠀⠀⠀⠹⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠳⢦⣀⠀⠀" << endl;
            cout << "\t\t\t\t⠀⠀⠀⠀⠈⠻⣦⣀⠀⠀⠀⠀⠐⠲⠤⣤⣀⡀⠀⠀⠀⠀⠀⠉⢳⡄" << endl;
            cout << "\t\t\t\t⠀⠀⠀⠀⠀⠀⠀⠉⠛⠶⠤⠤⠤⠶⠞⠋⠉⠙⠳⢦⣄⡀⠀⠀⠀⡷" << endl;
            cout << "\t\t\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠳⠦⠾⠃" << endl;
            break;
        case ROCK:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);   // Green
            cout << "\t\t\t\t⠀⠀⠀⠀⠀⣠⡴⠖⠒⠲⠶⢤⣄⡀" << endl;
            cout << "\t\t\t\t⠀⠀⠀⢀⡾⠁⠀⣀⠔⠁⠀ ⠈⠙⠷⣤⠦⣤⡀" << endl;
            cout << "\t\t\t\t ⣠⠞⠛⠛⠛⠋⠉⠀⠀⠀⠀⠀⠀⠀⠘⢧⠈⢿⡀" << endl;
            cout << "\t\t\t\t⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠟⠛⠛⠃⠸⡇⠈⣇" << endl;
            cout << "\t\t\t\t⣹⡷⠤⠤⠤⠄⠀⠀⠀⠀⢠⣤⡤⠶⠖⠛⠀⣿⠀⣿" << endl;
            cout << "\t\t\t\t⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡤⠖⠋⢀⣿⣠⠏" << endl;
            cout << "\t\t\t\t⢿⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡾⠋⠁" << endl;
            cout << "\t\t\t\t⠀⠉⢿⡋⠉⠉⠁⠀⠀⠀⠀⠀⢀⣠⠾⠋" << endl;
            cout << "\t\t\t\t⠀⠀⠈⠛⠶⠦⠤⠤⠤⠶⠶⠛⠋⠁" << endl;
            break;
        case PAPER:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);   // Yellow
            cout << "\t\t\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⠀  ⠀⣠⡴⠖⠒⢶⣄" << endl;
            cout << "\t\t\t\t⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀   ⠀⢀⡼⠋⠀ ⠀⠀⢀⡿" << endl;
            cout << "\t\t\t\t⢠⡶⠒⠳⠶⣄⠀⠀ ⠀ ⠀⣴⠟⠁ ⠀⠀ ⠀⣰⠏⢀⣤⣤⣄⡀" << endl;
            cout << "\t\t\t\t⠸⡇⠀⠀⠀⠘⣇⠀ ⠀⣠⡾⠁⠀⠀  ⢀⣾⣣⡴⠚⠉⠀ ⠈⠹⡆" << endl;
            cout << "\t\t\t\t⠀⢻⡄⠀⠀⠀⢻⣠⡾⠋⠀⠀ ⠀⠀⣠⡾⠋⠁⠀⠀⠀⠀⢀⣠⡾⠃" << endl;
            cout << "\t\t\t\t⠀⠀⣿⠀⠀⠀⠘⠉⠀⠀⠀⠀⠀⡰⠋⠀⠀⠀⠀⠀⣠⠶⠋⠁" << endl;
            cout << "\t\t\t\t⠀⠠⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠁⠀ ⠀⢀⣴⡿⠥⠶⠖⠛⠛⢶⡄" << endl;
            cout << "\t\t\t\t⢀⣰⡇⠀⠀⢀⡄⠀⠀⠀⠀⠀⠀⠀⠀⢀⡴⠋⠀⠀⠀⠀⠀⢀⣠⠼⠃" << endl;
            cout << "\t\t\t\t⣿⠉⣇⠀⡴⠟⠁⣠⡾⠃⠀⠀⠀⠀⠀⠈⠀⠀⠀⣀⣤⠶⠛⠉" << endl;
            cout << "\t\t\t\t⢻⡄⠹⣦⠀⠶⠛⢁⣠⡴⠀⠀⠀⠀⠀⠀⣠⡶⠛⠉" << endl;
            cout << "\t\t\t\t⠀⠻⣄⠈⢷⣄⠈⠉⠁⠀⠀⠀⢀⣠⡴⠟⠁" << endl;
            cout << "\t\t\t\t ⠀⠉⠳⢤⣭⡿⠒⠶⠶⠒⠚⠋⠁" << endl;
            break;
        }
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);      // White
        cout << endl << endl << endl;


        // 승부 판정

        switch (iPlayer - iComputer)
        {
        case 1:
        case -2:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);   // Green
            cout << "\t\t\t Win !!!!!!!" << endl;
            break;
        case 0:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);   // Yellow
            cout << "\t\t\t Draw !!!!!!" << endl;
            break;
        default:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);   // Red
            cout << "\t\t\t Lose !!!!!!" << endl;
            break;
        }

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);      // White

        system("pause>null");

        if (GetAsyncKeyState(VK_RETURN) & 0x1)
            continue;
    }

    return 0;
}
