/* Scrivere su file */

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("output.txt");
    if (file.is_open()) {
        file << "Questa è una frase di esempio.";
        file.close();
        cout << "File creato con successo!" << endl;
    } else {
        cout << "Impossibile creare il file." << endl;
    }

    return 0;
}

/* Leggi da file */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("input.txt");
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

/* Conta il numero delle parole in un file di testo */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("input.txt");
    if (file.is_open()) {
        int wordCount = 0;
        string word;
        while (file >> word) {
            wordCount++;
        }
        file.close();
        cout << "Numero di parole nel file: " << wordCount << endl;
    } else {
        cout << "Impossibile aprire il file." << endl;
    }

    return 0;
}

/* Copia il contenuto di un file in un altro file */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");
    if (inputFile.is_open() && outputFile.is_open()) {
        string line;
        while (getline(inputFile, line)) {
            outputFile << line << endl;
        }
        inputFile.close();
        outputFile.close();
        cout << "Contenuto copiato con successo!" << endl;
    } else {
        cout << "Impossibile aprire i file." << endl;
    }

    return 0;
}

/* Aggiunga testo ad un file esistente */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream file("input.txt", ios::app);
    if (file.is_open()) {
        file << "Questa è una nuova riga di testo." << endl;
        file.close();
        cout << "Riga aggiunta con successo!" << endl;
    } else {
        cout << "Impossibile aprire il file." << endl;
    }

    return 0;
}

/* Cancella il contenuto di un file di testo */

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("input.txt", ios::trunc);
    if (file.is_open()) {
        file.close();
        cout << "Contenuto del file cancellato!" << endl;
    } else {
        cout << "Impossibile aprire il file." << endl;
    }

    return 0;
}

/* Verifica se un file esiste */

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("input.txt");
    if (file) {
        cout << "Il file esiste." << endl;
    } else {
        cout << "Il file non esiste." << endl;
    }

    return 0;
}

/* Elimina un file di testo */

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    if (remove("file.txt") == 0) {
        cout << "File eliminato con successo!" << endl;
    } else {
        cout << "Impossibile eliminare il file." << endl;
    }

    return 0;
}

/* Rinomina un file di testo */

include <iostream>
#include <fstream>
using namespace std;

int main() {
    if (rename("old_file.txt", "new_file.txt") == 0) {
        cout << "File rinominato con successo!" << endl;
    } else {
        cout << "Impossibile rinominare il file." << endl;
    }

    return 0;
}


/* Sposta un file di testo */

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    if (rename("source/file.txt", "destination/file.txt") == 0) {
        cout << "File spostato con successo!" << endl;
    } else {
        cout << "Impossibile spostare il file." << endl;
    }

    return 0;
}