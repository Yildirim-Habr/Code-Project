#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int d, i;
    float a, t;

    cin >> d;

    a = 1;
    t = 0;
    for(i = 1; i <= d; i++){
        cout << "Day " << i << " = $"<< a/100 << endl;
        t += a;
        a += a;
    }

    cout << "\nThe total is = $" << t/100;

    return 0;
}﻿
