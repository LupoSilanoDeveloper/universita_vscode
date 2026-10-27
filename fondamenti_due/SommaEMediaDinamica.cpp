#include <iostream>
using namespace std;

int main() {
    int n;
    double media = 0.0, somma = 0.0;
    double x;
    cout << "Quanti numeri vuoi inserire? ";
    cin >> n;

    double* p = new double[n]; // p è diventato il mio array.

    cout << "Inserisci i numeri da inserire nell'array: " << endl;
    for(int i = 0; i < n; i++){
        cin >> x;
        p[i] = x;
        somma += p[i];
    }
    media = somma / n;

    cout << "Somma: " << somma << endl << "Media: " << media << endl;
    delete[] p;

}