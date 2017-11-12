#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int num, i;
    string stu, maxc, minc;

    cout << "The numbers of students is ";
    cin >> num;

    if(num >= 1 && num <= 25){
        maxc = "a";
        minc = "z";
        for(i = 1; i <= num; i++){
            cout << i <<" The name is ";
            cin >> stu;
            maxc = max(stu, maxc);
            minc = min(stu, minc);
        }
    }else{
        cout << "The number between 1 - 25";
    }

    cout << minc << " is in the front" << endl;
    cout << maxc << " is in the back" << endl;

    return 0;
}
