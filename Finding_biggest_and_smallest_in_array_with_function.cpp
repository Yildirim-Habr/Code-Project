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
    int i, num;
    float val, z, maxv, minv;
    cout << "How many value ? ";
    cin >> num;

    float ar[num] = {};

    z = 0;
    for(i=0; i<num; i++){
        cout << "Enter the " << i+1 << " value here = ";
        cin >> val;

        ar[i] = val;
        maxv = max(val, maxv);
        minv = min(val, minv);
    }
    cout << "The max value is " << maxv << endl;
    cout << "The min value is " << minv << endl;
}

int main() {
    getValue();
    return 0;
}
