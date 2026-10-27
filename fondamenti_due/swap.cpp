#include <iostream>
using namespace std;


void scambio(int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

    // cout << "a = " << *x << endl << "b = " << *y << endl;
}

int main(){
    int a = 5;
    int b = 7;

    cout << "a = " << a << endl << "b = " << b << endl;
    cout << endl << endl;

    scambio(&a, &b);

    cout << "a = " << a << endl << "b = " << b << endl;
    return 0;
}