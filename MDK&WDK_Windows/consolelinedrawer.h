#include <cmath>
#include <iostream>
#include <windows.h>

using namespace std;

class cld
{
public:
    void calculateGraphics(HANDLE console, int clmns, int rws, char coordchar, short (*fx)(int, int, int, int, int, int), int a, int b, int c, int d, int e, int vl)
    {

        short rws2 = rws;

        Sleep(300);

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

            Sleep(1);
        }
    }
};
