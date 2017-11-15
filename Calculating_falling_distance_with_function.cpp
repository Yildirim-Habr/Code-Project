#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

float formula(int t){
    float sqr = pow(t, 2);
    float d = 0.5 * (9.8 * sqr);
    return d;
}

void start(){
    cout << "Enter the time here ";
}

int main() {
    int i, j;
    float in;

    float ar[10] = {};

    for(i = 0; i < 10; i++){
        start();
        cin >> in;

        ar[i] = in;

        if(i == 9){
            cout << endl;

            for(j = 0; j < 10; j++){
                cout << "The distance is " << formula(ar[j]) << " meters." << endl; // enter the number here...

            }
        }
    }

    return 0;
}
