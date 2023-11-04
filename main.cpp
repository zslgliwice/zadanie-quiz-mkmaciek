#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

string imie;
string odp;

int main()
{
    HANDLE uchwyt = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(uchwyt, 11);
    cout << "\aPodaj imie: ";
    cin >> imie;
    int pkt = 0;

    system("cls");
    cout<< "3";
    Sleep(1000);
    system("cls");
    cout<< "3..2";
    Sleep(1000);
    system("cls");
    cout<< "3..2..1..";
    Sleep(1000);
    system("cls");

    cout << imie << ", witaj w tescie wiedzy!\n";

    // pytanie 1
    cout << "1. Ktory z tych zabytkow jest czescia Siedmiu Cudow Swiata?\n";
    cout << "a) Wieza Eiffla\n";
    cout << "b) Koloseum w Rzymie\n";
    cout << "c) Empire State Building\n";
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if(odp == "b")
    {
        cout << "Poprawna odpowiedz!";
        pkt++;
    }
    else
    {
        cout << "Zle! Poprawna odpowiedz to b) Koloseum w Rzymie!";
    }
    Sleep(3000);
    system("cls");

    // pytanie2
    cout << "2. Ktory z naukowcow byl glownym liderem zespolu pracujacego nad projektem Manhattan,\n";
    cout << "   ktory doprowadzil do stworzenia pierwszej bomby atomowej podczas II wojny swiatowej w Stanach Zjednoczonych?\n";
    cout << "a) Albert Einstein\n";
    cout << "b) J. Robert Oppenheimer\n";
    cout << "c) Enrico Fermi\n";
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if(odp == "b")
    {
        cout << "Poprawna odpowiedz!";
        pkt++;
    }
    else
    {
        cout << "Zle! Poprawna odpowiedz to b) J. Robert Oppenheimer!";
    }
    Sleep(3000);
    system("cls");

    // pytanie 3
    cout << "3. Co oznacza skrot HTML w kontekscie tworzenia stron internetowych?\n";
    cout << "a) HyperText Markup Language\n";
    cout << "b) High Tech Modern Language\n";
    cout << "c) Hyperlink and Text Manipulation Language\n";
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if(odp == "a")
    {
        cout << "Poprawna odpowiedz!";
        pkt++;
    }
    else
    {
        cout << "Zle! Poprawna odpowiedz to a) HyperText Markup Language!";
    }
    Sleep(3000);
    system("cls");

    // pytanie 4
    cout << "4. Ktore panstwo jest najwiekszym na swiecie pod wzgledem powierzchni?\n";
    cout << "a) Rosja\n";
    cout << "b) Kanada\n";
    cout << "c) Stany Zjednoczone\n";
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if(odp == "a")
    {
        cout << "Poprawna odpowiedz!";
        pkt++;
    }
    else
    {
        cout << "Zle! Poprawna odpowiedz to a) Rosja!";
    }
    Sleep(3000);
    system("cls");

    // pytanie 5
    cout << "5. Kto jest uznawany za tworce i autora koncepcji kryptowaluty Bitcoin?\n";
    cout << "a) Elon Musk\n";
    cout << "b) Mark Zuckerberg\n";
    cout << "c) Satoshi Nakamoto\n";
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if(odp == "c")
    {
        cout << "Poprawna odpowiedz!";
        pkt++;
    }
    else
    {
        cout << "Zle! Poprawna odpowiedz to c) Satoshi Nakamoto!";
    }
    Sleep(3000);
    system("cls");

    if (pkt >= 1 && pkt <= 3)
    {
        cout << "\nZdobyles " << pkt << " pkt. Pocwicz.\n";
    }
    else if (pkt >= 4 && pkt <= 5)
    {
        cout << "\nGratulacje! Zdobyles az " << pkt << " pkt!\n";
    }
    Sleep(4000);
    return 0;
}
