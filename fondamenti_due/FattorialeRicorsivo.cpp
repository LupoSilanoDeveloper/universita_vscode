#include <iostream>
using namespace std;

int fattoriale(int x){
    if (x == 1){
        return x; // caso base
    }
    else return x * fattoriale(x-1); //ricorsione
}

int main(){
    int n;
    cin >> n;
    cout << fattoriale(n);
    return 0;
}