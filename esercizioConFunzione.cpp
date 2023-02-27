#include <iostream>
#include <string>
using namespace std;

bool univoca(string parola)
{
    bool univoca = false;

    for (int i = 0; i < parola.length(); i++)
    {
        for (int y = i + 1; y < parola.length(); y++)
        {
            if (parola[i] == parola[y])
            {
                return true;
            }
        }
    }
}
int main()
{

    string parola;
    cout << "Inserisci una parola qualunque.\n";
    cin >> parola;

    if (univoca)
    {
        cout << "I caratteri nella parola " << parola << " non sono univoci";
    }
    else
    {
        cout << "I caratteri nella parola " << parola << "  sono univoci";
    }
}