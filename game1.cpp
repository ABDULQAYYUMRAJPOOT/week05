#include <iostream>
#include <windows.h>
using namespace std;
void maze();
void gotoxy(int, int);
void pacman(int x, int y);
void erase(int x, int y);
char getcharatxy(short int x, short int y);
int main()
{
    int x = 1, y = 1;
    system("cls");
    maze();
    pacman(x, y);
    gotoxy(1, 16);
    while (true)
    {
        if (GetAsyncKeyState(VK_RIGHT))
        {
            char nextlocation;
            nextlocation = getcharatxy(x + 1, y);
            if (nextlocation == ' ')
            {
                erase(x, y);
                x = x + 1;
                pacman(x, y);
            }
        }
        if (GetAsyncKeyState(VK_LEFT))
        {
            char nextlocation;
            nextlocation = getcharatxy(x - 1, y);
            if (nextlocation == ' ')
            {
                erase(x, y);
                x = x - 1;
                pacman(x, y);
            }
        }
        if (GetAsyncKeyState(VK_UP))
        {
            char nextlocation;
            nextlocation = getcharatxy(x, y - 1);
            if (nextlocation == ' ')
            {
                erase(x, y);
                y = y - 1;
                pacman(x, y);
            }
        }

        if (GetAsyncKeyState(VK_DOWN))
        {
            char nextlocation;
            nextlocation = getcharatxy(x, y + 1);
            if (nextlocation == ' ')
            {
                erase(x, y);
                y = y + 1;
                pacman(x, y);
            }
        }
        Sleep(100);
    }
}

void maze()
{
    cout << "####################################################################" << endl;
    cout << "#                                                                  #" << endl;
    cout << "#                                                                  #" << endl;
    cout << "#                                                                  #" << endl;
    cout << "#                                                                  #" << endl;
    cout << "#                                                                  #" << endl;
    cout << "#                                                                  #" << endl;
    cout << "#                                                                  #" << endl;
    cout << "#                                                                  #" << endl;
    cout << "#                                                                  #" << endl;
    cout << "#                                                                  #" << endl;
    cout << "#                                                                  #" << endl;
    cout << "#                                                                  #" << endl;
    cout << "####################################################################" << endl;

}
void gotoxy(int x, int y)
{
    COORD coordinate;
    coordinate.X = x;
    coordinate.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}

void pacman(int x, int y)
{
    gotoxy(x, y);
    cout << "P";
}
void erase(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}
char getcharatxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD choordBufSize;
    choordBufSize.X = 1;
    choordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, choordBufSize, xy, &rect) ? ci.Char.AsciiChar:' ';
}