#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {
    int b, s, num;
    
    b = NULL;
    for(;;){
        cout << "The number is ";
        cin >> num ;
        if(num == -99){
            cout << "boom !" << endl;
            break;
        }
        b = max(num, b);
        s = min(num, s);
    }

    cout << "The biggest number is " << b << endl;
    cout << "The smallest number is " << s << endl;

    return 0;
}
