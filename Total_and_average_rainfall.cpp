#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int y, i, j, m, rf, t_rf;

    cout << "Numbers of years = ";
    cin >> y;

    t_rf = 0;
    m = 0;
    if(y >= 0){
        for(i = 0; i < y; i++){
            for(j = 0; j < 12; j++){
                m++;
                cout << "The inches of rainfall month " << m << " = ";
                cin >> rf;
                t_rf += rf;
            }
        }
    }else{
        cout << "not be the minus" << endl;
    }

    cout << "Number of months = " << 12 * y << endl;
    cout << "Total rainfall = " << t_rf << " inches" << endl;
    cout << "Average rainfall = " << t_rf / (12 * y) << " inches" << endl;

    return 0;
}
