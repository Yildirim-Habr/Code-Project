#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int i, in, z;

    cout << "How many the function going? ";
    cin >> in;

    double f[in] = {};
    f[0] = 3;

    cout << "f(0) = 3.00" << endl;

    for(i = 1; i <= in; i++){
        f[i] = f[i-1]*3/4 + 4;
        cout << "f(" << i << ") = " << setprecision(2) << fixed << f[i] << endl;
    }

    return 0;
}
