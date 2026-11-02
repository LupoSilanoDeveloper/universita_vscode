#include <iostream>
using namespace std;

// ++++++++++++++++++sta roba stampa l'alfabeto.++++++++++++++++++
/*
int main(int argc, char *argv){
        char c = 'A';
        while (c != 'Z') {
            cout << c++ << endl
        }
    return 0;
}*/

/*
++++++++++++++++++ 1LL ++++++++++++++++++
int a = 1000000
se faccio long long c = a * a, mi esce un valore sfalsato.
se però mettiamo long long c = 1LL * a * a, quell'1LL avrai un numero a 64bit che funge da cast
*/
/*
++++++++++++++++++Il size_t++++++++++++++++++
Prende la max grandezza in bit di quello che può sostenere il mio pc. Ha il valore di un unsigned long long.
è davvero capiente.
*/

/*
@@@@@@@@@@@@@@@@@@@@@@@@@ Puntatori e Memoria @@@@@@@@@@@@@@@@@@@@@@@@@ 
Il puntatore è un indirizzo di memoria.
++++++++++++++++++ nullptr ++++++++++++++++++
è un puntatore nulla. Si usa per convenzione per levarlo dalla memoria. La macchina lo fa in primis
ma è una convenzione dai. fallo e basta.
sintassi corretta:
    int* p = nullptr;
mettere ** crea un puntatore di puntatore. quindi per prendere l'indirizzo di un puntatore, serve doppio *
ogni stringa in c++ alla fine ha un terminatore nullo che si segna con \0
*/

/*
@@@@@@@@@@@@@@@@@@@@@@@@@  @@@@@@@@@@@@@@@@@@@@@@@@@


}
*/