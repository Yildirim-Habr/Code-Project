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

float presentValue(int x, int y, int z){
    float p = x/pow(1+(y*0.01), z);
    return p;
}

int main() {
    int fut, rat, year;
    cout << "- Deposit Planning Machine -" << endl << endl;
    cout << "Future value what do you want is $";
    cin >> fut;
    cout << "The annual rate is ";
    cin >> rat;
    cout << "How many years ? ";
    cin >> year;
    cout << "How many dollar you need is $" << presentValue(fut, rat, year);

    return 0;
}
