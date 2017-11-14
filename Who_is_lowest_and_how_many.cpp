#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int c, e, w, s, n;
    int i, in, minv, z;

    struct List{
        string reg;
        int acc;
    };

    List a[5];
    a[0].reg = "north";
    a[1].reg = "south";
    a[2].reg = "east";
    a[3].reg = "west";
    a[4].reg = "center";

    for(i = 0; i < 5; i++){
        cout << "The numbers of accident in region " << a[i].reg << " is ";
        cin >> in;

        if(in < 0){
            cout << "Dont enter the negative number" << endl;
            break;
        }else if(in < minv){
           z = i;
        }

        minv = min(in, minv);

    }

    cout << "The region with lowest accident is " << a[z].reg << " with " << minv << " accidents.";

    return 0;
}
