#include <iostream>
#include <string>
using namespace std;

int main()
{

    int arrayInteri[8] ;
    int pari = 0;
    int dispari = 0;
                                                       // int grandezza = sizeof(arrayInteri)/sizeof(arrayInteri[0]);
    for (int i = 0; i < 8; i++)
    {
        cout << "Inserisci un numero"<<endl;
        cin >> arrayInteri[i];
    }
    for (int i = 0; i < 8; i++)
    {
        if (arrayInteri[i] % 2 == 0)
        {
            pari += arrayInteri[i];
        }
        else
        {
            dispari += arrayInteri[i];
        }
    }

    cout << "Somma degli elementi pari è " << pari << ". "
         << "La somma dei numeri dispari è " << dispari;
}