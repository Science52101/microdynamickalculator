#include <cmath>
#include <iostream>
#include <windows.h>
#include <consolelinedrawer.h>
#include <mdkinterfaceelements.h>

using namespace std;

int main()
{
    cld cld;

    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

    mdkinterface mdki;

    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int clmns, rws;

    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);

    clmns = csbi.srWindow.Right - csbi.srWindow.Left;
    rws = csbi.srWindow.Bottom - csbi.srWindow.Top;

    mdki.startanimation(console, cld, clmns, rws);

    SetConsoleTextAttribute(console, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY);

    mdki.cleanterminal(console);

    mdki.showlogo(console, clmns);

    SetConsoleTextAttribute(console, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE);

    short npos;

    npos = rws - 11;

    SetConsoleCursorPosition(console, { 0, npos });

    int loops;

    mdki.showdata(clmns, rws);

    printf("Lines: ");
    cin >> loops;

    SetConsoleTextAttribute(console, FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN);

    mdki.cleanterminal(console);

    for (int i = 0; i < loops; i++)
    {
        mdki.settcolor(console, i);

        mdki.showfuninoutl(console);

        SetConsoleCursorPosition(console, { 0, 0 });

        SetConsoleTextAttribute(console, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY);

        int a, b, c, d, e, vl;

        Sleep(10);
        printf("                                               \n");Sleep(1);
        cout << " L" << i << "(x) = ( a*x^2 + b*x + c + d*sqrt(x) ) / e = \n";Sleep(1);
        printf("                                               \n");Sleep(1);
        printf("       x^2 * _________________________________ \n");Sleep(1);
        printf(" +       x * _________________________________ \n");Sleep(1);
        printf(" +           _________________________________ \n");Sleep(1);
        printf(" + sqrt(x) * _________________________________ \n");Sleep(1);
        printf(" /           _________________________________ \n");Sleep(1);
        printf(" (1/0) V. L. _                                 \n");Sleep(1);
        printf("                                               \n");Sleep(1);
        SetConsoleCursorPosition(console, { 13, 3 });
        cin >> a;
        SetConsoleCursorPosition(console, { 13, 4 });
        cin >> b;
        SetConsoleCursorPosition(console, { 13, 5 });
        cin >> c;z
        SetConsoleCursorPosition(console, { 13, 6 });
        cin >> d;
        SetConsoleCursorPosition(console, { 13, 7 });
        cin >> e;
        SetConsoleCursorPosition(console, { 13, 8 });
        cin >> vl;

        mdki.settcolor(console, i);

        SetConsoleCursorPosition(console, { 0, 0 });

        cld.calculateGraphics(console, clmns, rws, '#', [](int x, int a, int b, int c, int d, int e) {
            short y = ( ( pow(x, 2) * a ) + ( x * b ) + c + ( d * sqrt(x) ) ) / e;
            // short y = sqrt(-x^2 + 50^2);
            return y;
            }, a, b, c, d, e, vl);

        SetConsoleTextAttribute(console, FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN);

        mdki.showfuninoutl(console);

        printf("\n");
    }

    string randvar;
    cin >> randvar;

    Sleep(200);

    mdki.cleanterminal(console);
}

