#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int o, i, in, d, td, ex;

    cout << "The number of organism = ";
    cin >> o;
    cout << "Increase percentage = ";
    cin >> in;
    cout << "Days of research = ";
    cin >> td;

    if(o >=2 && in >= 0 && td >= 1){
        d = 0;
        for(i = 0; i < td; i++){
            d++;
            ex = pow(o, d+1);
            cout << "The day " << d << " = " << ex << endl;
        }

    }else{
        cout << "Enter the correct number" << endl;
    }

    return 0;
}
