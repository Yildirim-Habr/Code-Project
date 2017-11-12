#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    float r, o, i, f, tr, to, p;

    cout << "Floors in the hotel = ";
    cin >> f;

    if(f <= 10){
        cout << "min 10 floors" << endl;
    }else{
        tr = 0;
        to = 0;
        for(i = 1; i <= f; i++){
            cout << "Rooms in the floor " << i << " is ";
            cin >> r;
            tr += r;

            cout << "Rooms are occupied = ";
            cin >> o;
            to += o;
        }
    }

    cout << "The total of rooms is " << tr << endl;
    cout << "The total of occupied rooms is " << to << endl;

    p = to * 100 /tr;
    cout << "The occupied rooms percentage is " << p << " %";
    return 0;
}
