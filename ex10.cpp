#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// écrire une fonction caractere_le_plus_frequent(string const& filename)
// qui retourne une structure ou une paire (voir chapitre 7) qui
// contient le caractère (hors espace ' ') le plus fréquent dans ce fichier,
// ainsi que le nombre de fois qu'il apparait. Ce nombre est négatif
// si le fichier est illisible.

struct requrence {
    char c;
    int n;

};

requrence caractere_le_plus_frequent(string filename){

    requrence res{};
    int most_frequent = 0;
    char lettre_frequent = 0;


    for(char alphabet = 'a'; alphabet < 'z'; alphabet++){
        fstream filen;
        filen.open(filename);
        if (!filen) {
            return res;
        }
        string ligne;
        int i = 0;
        while (filen.eof() == 0) {
            getline(filen, ligne);
            for (size_t j = 0; j <= ligne.length(); j++) {
                if (ligne[j] == alphabet) {
                    i++;
                }
            }
        }
        if(i > most_frequent){
            most_frequent = i;
            lettre_frequent = alphabet;
        }
    }
    return res = { lettre_frequent, most_frequent,};
}
int main() {
   cout << "Entrez le nom du fichier : " << flush;
   string filename;
   cin >> filename;

   auto [c, n] = caractere_le_plus_frequent(filename);
   if (n >= 0)
      cout << "Le caractère " << c
           << " est le plus fréquent et apparait " << n
           << " fois dans le fichier " << filename << endl;
   else
      cout << "Le fichier est illisible";
}