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

string upperCase(string z){
    for(int i=0; i<z.length(); i++){
        z[i] = toupper(z[i]);
    }
    return z;
}

void sameString(string a, string b){
    if(upperCase(a) == upperCase(b)){
        cout << "Same" << endl;
    }else{
        cout << "Different" << endl;
    }

}

int main() {
    string in, in2;
    cout << "- Same Name Testing Machine -" << endl << endl;
    cout << "Enter the first name here ";
    getline(cin, in);
    cout << "Enter the second name here ";
    getline(cin, in2);
    sameString(in, in2);

    return 0;
}
