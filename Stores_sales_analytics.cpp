#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int num, i, j, sto, n, num_star, x, z;
    string star, stari;

    cout << "The number of stores is ";
    cin >> num;

    string t_star[num] = {};

    n = 0;
    for(i = 0; i < num; i++){
        n++;
        cout << "The today's sales at store " << n << " is ";
        cin >> sto;

        num_star = sto/100;
        star.append(num_star, '*');
        t_star[i] = star;

        if(i == num-1){
            z = 0;
            for(j = 0; j < num; j++){
                z++;
                cout << "Store " << z << " = " << t_star[j] << endl;
            }
        }
        star = "";
    }
    return 0;
}
