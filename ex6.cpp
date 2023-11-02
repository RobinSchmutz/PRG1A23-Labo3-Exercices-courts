#include <iostream>
#include <limits>
using namespace std;

// écrire la fonction multiplier qui permette au programme
// ci dessous de fonction comme dans l'exemple d'utilisation
// suivant :
//
//2 3
//2 * 3 = 6
//543 876
//543 * 876 = 475668
//1234567 8765432
//Le produit de 1234567 et 8765432 depasse la limite du type unsigned
unsigned multiplier(unsigned &a, unsigned &b, unsigned &r){
    long long c = a, d = b, res;
    res  = c * b;
    if(numeric_limits<unsigned>::max()< (c *d)){
        return 0;
    }
    r = a * b;


    return r;
}
int main() {

   unsigned a, b, r;
   do {
      cin >> a >> b;
   } while (multiplier(a, b, r) and
            cout << a << " * " << b << " = " << r << endl);

   cout << "Le produit de " << a << " et " << b << " depasse la limite du type unsigned";
}