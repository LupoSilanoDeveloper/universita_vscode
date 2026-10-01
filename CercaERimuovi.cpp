#include <iostream>
using namespace std;

int main()
{   
    const unsigned n = 5;
    int A[n] ={0};
    for(unsigned i = 0; i <= n; ++i){ // "++i" è più efficiente perche esegue prima l'incrementazione dell'assegnazione.
        cout << A[i] << " ";
    }
    cout << "inserire interi, 0 per terminare " << endl;
    int N;
    cin >> N;
    int i = 0;
    while (N!=0){
        A[i++] == N; // facendo cosi, PRIMA assegnamo alla pos i il valore di N, POI i incrementa.
        cin >> N;
    }
    return 0;
}