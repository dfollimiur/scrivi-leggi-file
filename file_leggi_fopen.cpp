/*
Programma che stampa sulla console il contenuto del file ciao.txt
*/

#include <iostream>

using namespace std;

int main()
{
    char nomefile[] = {"ciao.txt"};
    int err;
	char c; //si crea la variabile c i tipo chat
	FILE *puntafile;
	
	puntafile = fopen(nomefile, "r");
	
	if(puntafile == NULL) {
		cout << "\nIl file non puo essere aperto!";
	}
	else {
	    while(!feof(puntafile))
	    {
	        c = fgetc(puntafile);
	        cout << c;
	    }
	    err = fclose(puntafile);	
	}
	
	cout << "\n" << endl;
	system("pause");	
}

