#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

double getSales(){
    //return ;
}

void findHighest(int a, int b){
    //int maxv;
    //maxv = max(a, b);
}

int main() {
    int NE, SE, NW, SW;
    int i, x, z;
    double sls, maxv;

    struct store{
        string nm;
        double v;
    };

    store a[4];
    a[0].nm = "NE";
    a[1].nm = "SE";
    a[2].nm = "NW";
    a[3].nm = "SW";

    maxv = 0.00;
    for(i = 0; i < 4; i++){
        cout << "Enter the total sales for " << a[i].nm << " is = $"  ;
        cin >> sls;
        a[i].v = sls;

        if(sls < 0.00){
            cout << "Don't enter the negative number" << endl;
        }

        if(a[i].v > maxv){
            maxv = a[i].v;
            z = i;
        }
    }

    cout << "The highest total sales is regarded by " << a[z].nm << " with $" << maxv << endl;

    return 0;
}
