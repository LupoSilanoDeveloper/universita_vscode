#include <iostream>
using namespace std;

int main(){
    unsigned n;
    unsigned r = 1;

    cout << "Inserire numero: \n";
    cin >> n;

    if(n == 0){
        cout << "1";
    }
    for (unsigned i=n; i!=1; i--){
        r *= i;
    }

    cout << "Il fattoriale è: " << r << endl;
}