#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int i, j;
    string p, p2;

    for(i = 0; i < 10; i++){
        p.append(1, '+');
        cout << p << endl;

        if(i == 9){
            cout << endl << endl;

            for(j = 10; j > 0; j--){
                p2.assign(p, 0, j);
                cout << p2 << endl;
            }
        }
    }

    return 0;
}
