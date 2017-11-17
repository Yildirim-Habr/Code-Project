#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int coinToss(){
    int r = rand() % 2 + 1;
    return r;
}

void start(){
    int in, i;

    cout << "How many times to toss the coin? ";
    cin >> in;

    for(i = 0; i < in; i++){
        if(coinToss() == 1){
            cout << "Head" << endl;
        }else{
            cout << "Tail" << endl;
        }
    }
}

int main() {
    start();

    return 0;
}
