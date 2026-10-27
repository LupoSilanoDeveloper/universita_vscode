#include <iostream>
using namespace std;

int main(){
    float eur;
    unsigned sym;
    
    cout << "inserire quantità soldi: \n";
    cin >> eur;

    cout << "INSERIRE NUMERO VALUTA: \n" << "\n 1: USD \n 2: YEN (JAP) \n 3: Sterline Brit \n";
    cin >> sym;
    cout << endl << endl;

    switch(sym){
        case 1:
            cout << " CONVERSIONE IN CORSO ... \n";
            cout << eur << " -----> " << eur * 1.08 << " dollari" << endl;
            break;
        case 2:
            cout << " CONVERSIONE IN CORSO ... \n";
            cout << eur << " -----> " << eur * 168.22 << " yen" << endl;
            break;
        case 3:
            cout << " CONVERSIONE IN CORSO ... \n";
            cout << eur << " -----> " << eur * 0.86 << " sterline britanniche" << endl;
            break;
        default:
            cout << " Operazione errata!!!";
    }

    return 0;
}