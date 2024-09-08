#include <cmath>
#include <iostream>
#include <windows.h>
#include <consolelinedrawer.h>
#include <mdkinterfaceelements.h>
#include <math.h>
#define _USE_MATH_DEFINES

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

    SetConsoleCursorPosition(console, { 0, 0 });
        for (int i = 0; i <= 5000; i++)
        {
            printf("-WDK-");
            if ((rand() % 400) == 0)
            {
                Sleep(1);
            }
        }

        SetConsoleCursorPosition(console, { 0, 0 });

        SetConsoleTextAttribute(console, BACKGROUND_RED | FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN);

        printf("                                  |\n");Sleep(1);
        printf("  W   W   W       D       K    K  |\n");Sleep(1);
        printf("  W  W W  W      D D      K  KK   |\n");Sleep(1);
        printf("  W W   W W     D   D     KKK     |\n");Sleep(1);
        printf("  WW     WW    D     D    K  KK   |\n");Sleep(1);
        printf("  W       W   DDDDDDDDD   K    K  |\n");Sleep(1);
        printf("                                  |\n");Sleep(1);
        printf("   -   waves Dynamic Kalculator   |\n");Sleep(1);
        printf("   -   For Basic Science          |\n");Sleep(1);
        printf("   -   version 20240218-a         |\n");Sleep(1);
        printf("----------------------------------+\n");Sleep(1);

        Sleep(2000);

    SetConsoleTextAttribute(console, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY);

    mdki.cleanterminal(console);

    short npos;

    npos = ( clmns / 2 ) - 15;

    SetConsoleTextAttribute(console, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE);

    SetConsoleCursorPosition(console, { npos, 2 });
    printf("W   W   W       D       K    K\n");Sleep(10);
    SetConsoleCursorPosition(console, { npos, 3 });
    printf("W  W W  W      D D      K  KK \n");Sleep(10);
    SetConsoleCursorPosition(console, { npos, 4 });
    printf("W W   W W     D   D     KKK   \n");Sleep(10);
    SetConsoleCursorPosition(console, { npos, 5 });
    printf("WW     WW    D     D    K  KK \n");Sleep(10);
    SetConsoleCursorPosition(console, { npos, 6 });
    printf("W       W   DDDDDDDDD   K    K\n");Sleep(10);
    SetConsoleCursorPosition(console, { npos, 8 });

    printf(" - waves Dynamic Kalculator - \n");Sleep(10);

    SetConsoleTextAttribute(console, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE);

    npos = rws - 11;

    SetConsoleCursorPosition(console, { 0, npos });

    int loops;

    mdki.showdata(clmns, rws);

    printf("Waves: ");
    cin >> loops;

    SetConsoleTextAttribute(console, FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN);

    mdki.cleanterminal(console);

    for (int i = 0; i < loops; i++)
    {
        mdki.settcolor(console, i);

        Sleep(10);
        SetConsoleCursorPosition(console, { 0, 0 });
        printf("                                               |\n");Sleep(1);
        printf("                                               |\n");Sleep(1);
        printf("                                               |\n");Sleep(1);
        printf("                                               |\n");Sleep(1);
        printf("                                               |\n");Sleep(1);
        printf("                                               |\n");Sleep(1);
        printf("                                               |\n");Sleep(1);
        printf("                                               |\n");Sleep(1);
        printf("-----------------------------------------------+\n");Sleep(1);

        SetConsoleCursorPosition(console, { 0, 0 });

        SetConsoleTextAttribute(console, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY);

        int a, b, c, d, e, vl;

        Sleep(10);
        printf("                                               \n");Sleep(1);
        cout << " W" << i << " =                                          \n";Sleep(1);
        printf("                                               \n");Sleep(1);
        printf("           l _________________________________ \n");Sleep(1);
        printf("           a _________________________________ \n");Sleep(1);
        printf("           f _________________________________ \n");Sleep(1);
        printf(" (1/0) V. L. _                                 \n");Sleep(1);
        printf("                                               \n");Sleep(1);
        SetConsoleCursorPosition(console, { 13, 3 });
        cin >> a;
        SetConsoleCursorPosition(console, { 13, 4 });
        cin >> b;
        SetConsoleCursorPosition(console, { 13, 5 });
        cin >> c;
        d = clmns;
        e = rws;
        SetConsoleCursorPosition(console, { 13, 6 });
        cin >> vl;

        if ( a <= (clmns/20)*1 ) { SetConsoleTextAttribute(console, BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN); }
        else if ( a <= (clmns/20)*2.5 ) { SetConsoleTextAttribute(console, BACKGROUND_RED | BACKGROUND_BLUE | FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN); }
        else if ( a <= (clmns/20)*4 ) { SetConsoleTextAttribute(console, BACKGROUND_BLUE | FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN); }
        else if ( a <= (clmns/20)*5.5 ) { SetConsoleTextAttribute(console, BACKGROUND_BLUE | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN); }
        else if ( a <= (clmns/20)*7 ) { SetConsoleTextAttribute(console, BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN); }
        else if ( a <= (clmns/20)*8.5 ) { SetConsoleTextAttribute(console, BACKGROUND_GREEN | BACKGROUND_RED | FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN); }
        else if ( a <= (clmns/20)*10 ) { SetConsoleTextAttribute(console, BACKGROUND_RED | FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN); }
        else { SetConsoleTextAttribute(console, BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN); }

        SetConsoleCursorPosition(console, { 0, 0 });

        cld.calculateGraphics(console, clmns, rws, '*', [](int x, int a, int b, int c, int d, int e) {
            short y = (sin((x*6.283185307179586)/a)*b)+(e/2);
            return y;
            }, a, b, c, d, e, vl);

        SetConsoleTextAttribute(console, FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN);

        Sleep(10);
        SetConsoleCursorPosition(console, { 0, 0 });
        printf("                                               |\n");Sleep(1);
        printf("                                               |\n");Sleep(1);
        printf("                                               |\n");Sleep(1);
        printf("                                               |\n");Sleep(1);
        printf("                                               |\n");Sleep(1);
        printf("                                               |\n");Sleep(1);
        printf("                                               |\n");Sleep(1);
        printf("                                               |\n");Sleep(1);
        printf("-----------------------------------------------+\n");Sleep(1);

        printf("\n");
    }

    string randvar;
    cin >> randvar;

    Sleep(200);

    mdki.cleanterminal(console);
}

