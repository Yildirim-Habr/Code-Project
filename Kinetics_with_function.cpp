#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

float formula(int t){
    float d = 0.5 * (9.8 * t * t);
    return d;
}

void start(){
    cout << "Enter the time here ";
}

int main() {

    float in;
    start();
    cin >> in;

    cout << "The distance is " << formula(in) << " meters."; // enter the number here...

    return 0;
}
