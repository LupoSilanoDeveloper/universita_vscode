#include <iostream>
using namespace std;

void scambio(short int* x, short int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

    // cout << "a = " << *x << endl << "b = " << *y << endl;
}

void invertiArray(short int* inizio, short int dimensione){
    short int* fine = inizio + (dimensione - 1);

    while (fine > inizio){
        scambio(inizio, fine);
        cout << "inizio: " << inizio << endl << endl << "fine: " << fine << endl << endl;
        fine--;
        inizio++;
    }
}

int main() {
    const short int DIM = 6;
    short int numeri[DIM] = {1, 2, 3, 4, 5, 6};

    cout << "Array originale: ";
    for (int i = 0; i < DIM; i++) {
        cout << numeri[i] << " ";
    }
    cout << endl;

    // Chiama la funzione passando l'array e la sua dimensione
    invertiArray(numeri, DIM);

    cout << "Array invertito: ";
    for (int i = 0; i < DIM; i++) {
        cout << numeri[i] << " ";
    }
    cout << endl;

    return 0;
}