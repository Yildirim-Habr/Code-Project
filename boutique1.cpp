#include <iostream>  

using namespace std;  

int main() 
{
int a, b, c, i, j, k, l, m, n, core, length, width;

core = 3;
length = 5;
width = 12;

cout << endl;

//above wall
cout << "O";
for(j = 0; j < 2 + width + ((width+1)*(core*2-1)); j++){
	cout << "=";
}
cout << "O" << endl;

//boutique
for(n = 0; n < length; n++){
	//above part
	for(i = 1; i <= core; i++){
		cout << "|";
		//left rest
		for(j = core; j >= i; j--){
			cout << "-";
		}	
		//mid
		for(l = 0; l < width; l++){			
			for(k = 0; k < i*2-1; k++){
				cout << "#";
			}
			
			for(j = core*2-i; j > i-1; j--){
				cout << "-";
			}
		}
		//additional part
		for(k = 0; k < i*2-1; k++){
			cout << "#";
		}
		//right rest
		for(m = 0; m < core-i+1; m++){
			cout << "-";
		}
		cout << "|" << endl;
	}
	
	//below part
	for(i = 1; i <= core; i++){
		cout << "|";
		//left rest
		for(j = 0; j < i; j++){
			cout << "-";
		}
		//mid
		for(l = 0; l < width; l++){
			for(j = core*2-i; j > i-1; j--){
				cout << "#";
			}
			
			for(k = 0; k < i*2-1; k++){
				cout << "-";
			}
		}
		//additional part
		for(j = core*2-i; j > i-1; j--){
			cout << "#";
		}
		//right rest
		for(m = 0; m < i; m++){
			cout << "-";
		}
		
		cout << "|" << endl;
	}
}

//below wall
cout << "O";
for(j = 0; j < 2 + width + ((width+1)*(core*2-1)); j++){
	cout << "=";
}
cout << "O";

return 0;
}
