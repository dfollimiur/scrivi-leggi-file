#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("ciao.txt");
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Impossibile aprire il file." << endl;
    }

    return 0;
}