#include <iostream>
using namespace std;

int main(){
    int x = 3;
    int *p = &x; //inizializiamo una var di tipo puntatore di int che punta alla cella di memoria di x.

    cout << "Deferenzazione: ";
    cout << *p << endl <<endl; //DEREFERENZIAMO il puntatore. Segue la freccia e stampa l'oggetto puntato.

    *p = 4; // questo cambia la nostra x, poichè abbiamo detto che quello che punta a p adesso immagazzina 4.
    cout << "nuovo valore di x cambiato tramite *p: \n";
    cout << x << endl << endl; // darà 4

    cout << "stampiamo l'indirizzo di x: \n";
    cout << p << endl << endl; //stampa l'indirizzo di x.
}