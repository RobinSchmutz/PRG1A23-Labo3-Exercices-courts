#include <iostream>
#include <cstring>
using namespace std;

// écrire la fonction plus_petite_lettre(str) qui retourne
// le plus petite caractère (au sens du code ASCII) de la chaine
// str. Si cette lettre apparait plusieurs fois c'est la
// dernière instance qui doit être retournée.
char& plus_petite_lettre(string &s){
    char min = 'z';

    for(size_t i = 0; i < s.size(); ++i) {
        if(s[i] < min){
            min = s[i];
        }

    }
    size_t pos = s.find_last_of(min);
    return s[pos];


}
int main() {

   string s{"wisigoth"};
   plus_petite_lettre(s) = '*';
   cout << s << endl;
   // affiche wisi*oth

   s = "abraracourcix";
   plus_petite_lettre(s) = '*';
   cout << s << endl;
   // affiche abrar*courcix
}