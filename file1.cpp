#include <iostream>
#include <string>
using namespace std;

int main()
{

    string inserimento;
    cout << "Inserisci una parola" << endl;
    cin >> inserimento;
    int quanteVolte = 0;
    bool risultato = false;
    int y ;
    string nonUnivoca = "la parola non ha caratteri univoci";
    for (int i = 0; i < inserimento.length() - 1; i++)
    {
        if (inserimento[i] == inserimento[y] || i < inserimento.length() - 1)
        {
            for (int y = i + 1; y < inserimento.length() - 1; y++)
            // inserimento[] ==  stoi(inserimento.length()-1))
            {

                cout << "La lettera " << "-" << inserimento[i] << "-"<< " è ripetuta" << quanteVolte << "volte. Di conseguenza  è univoca";
                quanteVolte++;
            }
            else
            {
                return risultato;
            }
        }
    }
    cout << risultato;
}