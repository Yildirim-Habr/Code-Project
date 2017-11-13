#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int num, i;
    string x;

    cout << "Enter any number = ";
    cin >> num;

    x.append(num, 'X');

    for(i = 0; i < num; i++){
        cout << x << endl;
    }

    return 0;
}
