#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

float celcius(float f){
    float c = (f - 32) * 5 / 9;
    return c;
}

void start(){
    int i;

    for(i = 0; i < 21; i++){
        cout << i << " Fahrenheit is " << celcius(i) << " celcius." << endl;
    }
}

int main() {
    start();

    return 0;
}
