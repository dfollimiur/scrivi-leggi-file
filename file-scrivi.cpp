/*
Programma che memorizza nel file "numeri.txt" i numeri inseriti dall'utente fino al primo zero (escluso)
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout("numeri.txt"); //si crea fout e il file numeri.txt
    int n;
    
    cout<<"Inserisci un numero (0 per terminare): ";
    cin>>n; //leggo il primo valore di n
    while(n!=0) //finché non si e' letto uno zero
    {
        fout<<n<<endl; //si scrice nel file il contenuto di n
        cout<<"Inserisci un altro numero (0 per terminare): ";
        cin>>n; //si legge il nuovo valore di n
    }
    fout.close(); //si chiude fout
}

