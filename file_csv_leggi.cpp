#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    ifstream file("rubrica.csv");
    string riga;

    if (file.is_open()) {
        while (getline(file, riga)) {
            stringstream ss(riga);
            string valore;
            while (getline(ss, valore, ';')) { // Il delimitatore è il punto e virgola
                cout << valore << "\t";
            }
            cout << endl;
        }
        file.close();
    } else {
        cerr << "Impossibile aprire il file." << endl;
    }
    return 0;
}

