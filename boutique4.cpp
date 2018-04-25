#include <iostream>  

using namespace std;  

int main() 
{
int a, b, c, i, j, k, l, m, n, range, range2, coreball, core, length, width, dec;

core = 4;
width = 4;
length = 3;
range = 1;
range2 = range;

//above wall
cout << "O";
for(l = 1; l < core; l++){
	range = range*2;
}

for(a = 0; a < (width + 1)*(range*2 - 1) + width + 2; a++){
	cout << "=";
}
cout << "O" << endl;

//content
for(a = 0; a < length; a++){
	range = 1;
	//above part
	for(i = 1; i <= core; i++){
		cout << "|";
		
		//coreball
		coreball = range;
		for(l = i; l < core; l++){
			coreball = coreball*2;
		}
		
		//cout << coreball;
		dec = coreball;
		//left rest
		for(j = 1; j <= coreball; j++){
			cout << ".";	
		}
		//coreball = coreball*2;
		for(l = 1; l < i; l++){
			coreball = coreball*2;
		}
		
		//cout << coreball;
		for(k = 0; k < width; k++){
			//ball
			for(m = 1; m <= (coreball-dec)*2+1; m++){
				cout << "o";
			}
			//between ball			
			for(j = 1; j <= dec*2 - 1; j++){
				cout << ".";	
			}
		}
		
		//additional ball
		for(m = 1; m <= (coreball-dec)*2+1; m++){
			cout << "o";
		}
		//cout << coreball;
		//right rest
		for(j = 1; j <= dec; j++){
			cout << ".";	
		}
		cout << "|" << endl;
	}

	//below part
	for(i = 1; i <= core; i++){
		//left rest
		cout << "|";
		for(j = 1; j <= range; j++){
			cout << ".";	
		}
		//coreball
		coreball = range;
		for(l = i; l <= core; l++){
			coreball = coreball*2;
		}
		//cout << coreball;
		
		//mid
		for(m = 0; m < width; m++){
			//ball
			for(k = 1; k <= coreball - (range*2)+1; k++){
				cout << "o";
			}
			//between ball
			for(j = 1; j <= range*2-1; j++){
				cout << ".";	
			}
		}
		
		//additional ball
		for(k = 1; k <= coreball - (range*2)+1; k++){
			cout << "o";
		}
		
		//right rest
		for(j = 1; j <= range; j++){
			cout << ".";	
		}
		range  = range*2;
		
		cout << "|" << endl;
	}
}

//below wall
cout << "O";
for(l = 1; l < core; l++){
	range2 = range2*2;
}

for(a = 0; a < (width + 1)*(range2*2 - 1) + width + 2; a++){
	cout << "=";
}
cout << "O" << endl;
return 0;
}
