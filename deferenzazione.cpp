#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int* ptr = &a;
    *ptr = 15;

    int b = 50;
    ptr = &b;
    *ptr += 5;
    cout << "a= " << a << endl << endl << "b= " << b << endl;

}