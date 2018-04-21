#include <iostream>  

using namespace std;  

int main() {
  int a, b, c, i, j, k, l, m, n, in;
  
  //cin >> in;
	in = 10;
	cout << endl;
  
  for(i = 1; i <= in; i++){
		//space
		for(j = 0; j < in-i; j++){
			
			cout << " ";
		}
		//stars
		for(k = in-i*2; k < in-1; k++){
			cout << "^";
		}
		
		cout << endl;
  }

  return 0;
}
