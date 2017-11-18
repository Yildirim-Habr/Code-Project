#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <iomanip>
#include <string>
#include <vector>
#include <ctype.h>
#include <algorithm>

using namespace std;

void getValue(){
    int i, l, h, mon;
    float tot, ave, high, low, rf;

    cout << "How many months will you calculate ? ";
    cin >>  mon;

    int ar[mon] = {};

    tot = 0;
    for(i=0; i<mon; i++){
        cout << "Month " << i+1 << " = ";
        cin >> rf;

        if(rf < 0){
            cout << "Enter the positive number." << endl;
            i--;
        }

        ar[i] = rf;
        tot += rf;

        if(rf >= ar[i-1]){
            high = rf;
            h = i + 1;
        }else{
            low = rf;
            l = i + 1;
        }
    }
    ave = tot/mon;

    cout << "The total rainfall is " << tot << endl;
    cout << "The average rainfall is " << ave << endl;
    cout << "The highest rainfall is " << high << " in month " << h << endl;
    cout << "The lowest rainfall is " << low << " in month " << l << endl;
}

int main() {
    cout << "- The Rainfall Calculator -" << endl << endl;
    getValue();
    return 0;
}
