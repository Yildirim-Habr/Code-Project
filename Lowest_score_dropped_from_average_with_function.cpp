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

void getScore(){
    int mins, x, i, in;
    int sco;
    float av, p;
    cout << "How many members of this group ? ";
    cin >> in;

    int ar[in] = {};

    for(i=0; i<in; i++){
        cout << "The score of member " << i+1 << " is ";
        cin >> sco;
        
        if(sco < 0 || sco > 100){
            cout << "Enter the right number, guys." << endl;
            i--;
        }

        ar[i] = sco;
        mins = min(sco, mins);
        if(sco == mins){
            x = i;
        }
    }
    ar[x] = 0;

    p = 0;
    for(i=0; i<in; i++){
        p += ar[i];
    }
    av = p/(in-1);

    cout << av;
}

int main() {
    cout << "- Drop The Lowest and Call The Exist Average -" << endl;
    cout << "The score acquired is between 0 - 100" << endl << endl;
    getScore();
    return 0;
}
