/*
Programma che stampa sulla console il contenuto del file ciao.txt
*/
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    char c; //si crea la variabile c i tipo chat
    ifstream fin("ciao.txt"); //si crea fin e si apre ciao.txt
    while(fin.get(c))//si legge un carattere e se non si � alla fine del file
    {
        cout<<c; //stampa sulla console il contenuto di c
    }
    fin.close(); //si chiude fin
}

