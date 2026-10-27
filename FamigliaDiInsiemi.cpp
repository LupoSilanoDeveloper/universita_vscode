#include <iostream>
using namespace std;

int main (){
    int n = 0;
    int card_fam = 0, card_max = 0, count = 0;

    cout << "Inserisci le famiglie. 0 per finire le famiglia e iniziarne un altra, -1 per interrompere l'esecuzione \n" << endl;
    while(n != -1){
        cin >> n;
        if (n == 0){
            count--;
            card_fam += 1;
            if (card_max < count){
                card_max = count;
            }
            count = 0;   
        }
        count += 1;  
    }

    cout << "Cardinalità famiglie: " << card_fam << endl;
    cout << "Cardinalità massima: " << card_max << endl;

    return 0;
}