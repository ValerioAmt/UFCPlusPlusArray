#include <iostream>
#include <string>
using namespace std;

int main()
{

    string inserimento;
    cout << "Inserisci una parola" << endl;
    cin >> inserimento;
    int quanteVolte = 0;
    for (int i = 0; i < inserimento.length()-1; i++)
    {
        for (int y = i+1; y < inserimento.length()-1; y++)
        {
            if (inserimento[i] == inserimento[y]) // inserimento[] ==  stoi(inserimento.length()-1))
            {
                int quanteVolte;
                quanteVolte++;
            }
          else if (i < inserimento.length() - 1 )
          {
                       cout << "La lettera "<< " " << inserimento[i] << " è ripetuta" << quanteVolte << "volte. Di conseguenza la parola non  è univoca";

          }

             
           else {
                cout << "La parola ha caratteri univoci!!!";
                break;
            }

            break;
        }
    }
}