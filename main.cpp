#include <iostream>
using namespace std;
int liczba_testow, liczba_liczb, tablica[100];

int main()
{
    cin >> liczba_testow;
    for (int i=0; i < liczba_testow; i++)
    {
        cin >> liczba_liczb;
        for (int j=0; j < liczba_liczb; j++)
        {
            cin >> tablica[j];
        }
        for (int k=1; k < liczba_liczb; k++)
        {
            cout << tablica[k] << " ";
        }
        cout << tablica[0];
        cout << endl;
    }
    return 0;
}

