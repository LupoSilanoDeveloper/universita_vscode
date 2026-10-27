#include <iostream>
using namespace std;

int prodotto(int &x, int &y){
    int temp = x;
    for(unsigned i=1; i<y; i++){
        x += temp;
    }
    return x;
}

int main(){
    int a, b;
    
    cout << "Inserisci un numero: \n";
    cin >> a;

    cout << "Per quanto vuoi moltiplicarlo? \n";
    cin >> b;
    cout << endl << endl << endl;
    
    if (b == 0){
        cout << "Ogni moltiplicazione per zero da zero!";
    }
    cout << prodotto(a, b);
    
}