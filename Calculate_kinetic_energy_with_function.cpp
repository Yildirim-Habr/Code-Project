#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

float kineticEnergy(int m, int v){
    float sqr = pow(v, 2);
    float k = 0.5 * (m * sqr);
    return k;
}

void start(){
    int i;
    float in;

    struct List{
        string unit;
        int val;
    };

    List a[2];
    a[0].unit = "mass";
    a[1].unit = "velocity";

    for(i = 0; i < 2; i++){
        cout << "Enter the " << a[i].unit << " here ";
        cin >> in;
        a[i].val = in;
    }
    cout << kineticEnergy(a[0].val, a[1].val);
}

int main() {
    start();

    return 0;
}
