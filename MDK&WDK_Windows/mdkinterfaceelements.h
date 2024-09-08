#include <cmath>
#include <iostream>
#include <windows.h>

using namespace std;

class mdkinterface
{
public:
    void cleanterminal(HANDLE console)
    {
        SetConsoleCursorPosition(console, { 0, 0 });
        for (int i = 0; i <= 20000; i++)
        {
            printf(" ");
            if ((rand() % 1000) == 0)
            {
                Sleep(1);
            }
        }
    }

public:
    void startanimation(HANDLE console, cld cld, int clmns, int rws)
    {
        SetConsoleTextAttribute(console, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY);

        SetConsoleCursorPosition(console, { 0, 0 });
        for (int i = 0; i <= 20000; i++)
        {
            printf(" ");
            if ((rand() % 1000) == 0)
            {
                Sleep(1);
            }
        }

        SetConsoleTextAttribute(console, BACKGROUND_RED | BACKGROUND_INTENSITY);

        cld.calculateGraphics(console, clmns, rws, 'D', [](int x, int a, int b, int c, int d, int e) {
            short y = (sin((x*6.283185307179586)/a)*b)+(e/2);
            return y;
            }, clmns/3, rws/3, 0, clmns, rws, 0);

        SetConsoleTextAttribute(console, FOREGROUND_INTENSITY);

        cld.calculateGraphics(console, clmns, rws, 'K', [](int x, int a, int b, int c, int d, int e) {
            short y = (cos((x*6.283185307179586)/a)*b)+(e/2);
            return y;
            }, clmns/3, rws/3, 0, clmns, rws, 0);

        SetConsoleTextAttribute(console, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY);

        SetConsoleCursorPosition(console, { 0, 0 });
        for (int i = 0; i <= 5000; i++)
        {
            printf("-MDK-");
            if ((rand() % 400) == 0)
            {
                Sleep(1);
            }
        }

        SetConsoleCursorPosition(console, { 0, 0 });

        SetConsoleTextAttribute(console, BACKGROUND_RED | FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN);

        printf("                                  |\n");Sleep(1);
        printf("  M       M       D       K    K  |\n");Sleep(1);
        printf("  MM     MM      D D      K  KK   |\n");Sleep(1);
        printf("  M M   M M     D   D     KKK     |\n");Sleep(1);
        printf("  M  M M  M    D     D    K  KK   |\n");Sleep(1);
        printf("  M   M   M   DDDDDDDDD   K    K  |\n");Sleep(1);
        printf("                                  |\n");Sleep(1);
        printf("   -   micro Dynamic Kalculator   |\n");Sleep(1);
        printf("   -   For Basic Science          |\n");Sleep(1);
        printf("   -   version 20240218-a         |\n");Sleep(1);
        printf("----------------------------------+\n");Sleep(1);

        Sleep(1000);
    }

public:
    void showlogo(HANDLE console, int clmns)
    {
        short npos;

        npos = ( clmns / 2 ) - 15;

        SetConsoleTextAttribute(console, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE);

        SetConsoleCursorPosition(console, { npos, 2 });
        printf("M       M       D       K    K\n");Sleep(10);
        SetConsoleCursorPosition(console, { npos, 3 });
        printf("MM     MM      D D      K  KK \n");Sleep(10);
        SetConsoleCursorPosition(console, { npos, 4 });
        printf("M M   M M     D   D     KKK   \n");Sleep(10);
        SetConsoleCursorPosition(console, { npos, 5 });
        printf("M  M M  M    D     D    K  KK \n");Sleep(10);
        SetConsoleCursorPosition(console, { npos, 6 });
        printf("M   M   M   DDDDDDDDD   K    K\n");Sleep(10);
        SetConsoleCursorPosition(console, { npos, 8 });

        printf(" - micro Dynamic Kalculator - \n");Sleep(10);
    }

public:
    void showdata(int clmns, int rws)
    {
        printf("Data:\n\n");
        printf("Console resolution:\n");
        cout << "--- clmns: " << clmns << "\n";
        cout << "--- rws: " << rws << "\n\n";
        cout << "Middle point: ( " << clmns/2 << " , " << rws/2 << ")\n\n";
        printf("\n\n");
    }

public:
    void settcolor(HANDLE console, int i)
    {
        if ( i == 0 ) { SetConsoleTextAttribute(console, BACKGROUND_RED | FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN); }
        else if ( i == 1 ) { SetConsoleTextAttribute(console, BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN); }
        else if ( i == 2 ) { SetConsoleTextAttribute(console, BACKGROUND_BLUE | FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN); }
        else if ( i == 3 ) { SetConsoleTextAttribute(console, BACKGROUND_RED | BACKGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN); }
        else if ( i == 4 ) { SetConsoleTextAttribute(console, BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN); }
        else if ( i == 5 ) { SetConsoleTextAttribute(console, BACKGROUND_BLUE | BACKGROUND_RED | FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN); }
        else if ( i == 6 ) { SetConsoleTextAttribute(console, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE); }
        else if ( i == 7 ) { SetConsoleTextAttribute(console, FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN); }
        else if ( i == 8 ) { SetConsoleTextAttribute(console, FOREGROUND_INTENSITY | FOREGROUND_RED); }
        else if ( i == 9 ) { SetConsoleTextAttribute(console, FOREGROUND_INTENSITY | FOREGROUND_GREEN); }
        else if ( i == 10 ) { SetConsoleTextAttribute(console, FOREGROUND_INTENSITY | FOREGROUND_BLUE); }
        else if ( i == 11 ) { SetConsoleTextAttribute(console, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); }
        else if ( i == 12 ) { SetConsoleTextAttribute(console, FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE); }
        else if ( i == 13 ) { SetConsoleTextAttribute(console, FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_RED); }
    }

public:
    void showfuninoutl(HANDLE console)
    {
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
        printf("                                               |\n");Sleep(1);
        printf("                                               |\n");Sleep(1);
        printf("-----------------------------------------------+\n");Sleep(1);
    }
};
