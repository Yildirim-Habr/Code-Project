#include <iostream>  

using namespace std;  

int main() {
  int a, b, c, i, j, k, l, m, n, in;
  
  //cin >> in;
	in = 5;
	cout << endl;
  
  for(i = 1; i <= in; i++){
		//space
		for(j = 0; j < in-i; j++){
			
			cout << " ";
		}
		//stars
		for(k = in-i*2; k < in-1; k++){
			cout << "*";
		}
		
		cout << endl;
  }
	
	for(l = in-1; l > 0; l--){
		//space
		for(m = 0; m < in-l; m++){
			cout << " ";
		}
		//stars
		for(n = l*2; n > 1; n--){
			cout << "*";
		}
		
		cout << endl;
	}

  return 0;
}
