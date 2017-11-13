#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {
    int in, rdm;

    rdm = rand() % 10 + 1;

    for(;;){
        cout << "-Game Tebak angka-" << endl << "Masukan angka = " << endl;
        cin >> in;

        if(in == rdm){
            cout << "Congratulation !" << endl;
            break;
        }
    }

    return 0;
}
