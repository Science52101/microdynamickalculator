#include <cmath>
#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

void calculateGraphics(HANDLE console, int clmns, int rws, char coordchar, short (*fx)(int, int, int, int, int, int), int a, int b, int c, int d, int e, int vl, int st = 1)
{

    short rws2 = rws;

    for (short i = 0; i < clmns; i++)
    {
        COORD pos = { 0, 0 };
        if (rws >= fx(i, a, b, c, d, e))
        {
            pos = { i,  static_cast<SHORT>(rws2 - fx(i, a, b, c, d, e)) };
        }
        else
        {
            pos = { i,  0 };
        }
        SetConsoleCursorPosition(console, pos);
        cout << coordchar;
        if (vl == 1)
        {
            cout << static_cast<SHORT>(fx(i, a, b, c, d, e));
        }

        Sleep(st);
    }
}

int main()
{
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    int clmns, rws;

    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);

    clmns = csbi.srWindow.Right - csbi.srWindow.Left;
    rws = csbi.srWindow.Bottom - csbi.srWindow.Top;

    int a = 50, b = 0, c = 0, d = 50;

    while (true)
    {
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            break;
        };
        if (_kbhit())
        {
            if (_getch() == 'i')
            {
                a++;
            }
            else if (_getch() == 'k')
            {
                a--;
            }
            else if (_getch() == 'w')
            {
                b++;
            }
            else if (_getch() == 's')
            {
                b--;
            }
            else if (_getch() == 'd')
            {
                c++;
            }
            else if (_getch() == 'a')
            {
                c--;
            }
            else if (_getch() == 'l')
            {
                d++;
            }
            else if (_getch() == 'j')
            {
                d--;
            }
        }
        system("cls");
        calculateGraphics(console, clmns, rws, '#', [](int x, int a, int b, int c, int d, int e) {
                                            x -= c;
                                            float x2 = x;
                                            x2 *= (d/50);
                                            short y = (x2*x2*x2)/30 *((float)a/50) + b;
                                            return y;
                                            }, a, b, c, d, 0, 0, 0);
    }
    return 0;
}
