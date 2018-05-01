#include <iostream>  
#include <math.h>  

using namespace std;  

int main() 
{
int a, b, c, i, j, k, l, m, n, biggest, space;
int size = 3;//min. 2
int width = 3;
int length = 2;
int range = 1;//patent

//rope	
range = 1;
biggest = range;

for(a = 1; a < size; a++){
	biggest = biggest*2;
}

//pyramid machine
range = 0;
for(a = 0; a < (((biggest-1)*4 + 2)*width)/4; a++){
	range = range + 2;
}
if(fmod(width,2) == 0){	
	for(a = 0; a < range; a++){
		cout << " ";
	}
}else{		
	for(a = 0; a <= range; a++){
		cout << " ";
	}
}

cout << "(O)" << endl;

for(a = 1; a <= (((biggest-1)*4 + 2)*width)/4; a++){
	range = 1;
	biggest = range;
	
	for(i = 1; i < size; i++){
		biggest = biggest*2;
	}
	
	//pyramid machine
	range = 0;
	for(i = a; i < (((biggest-1)*4 + 2)*width)/4; i++){
		range = range + 2;
	}
	
	for(i = 0; i <= range; i++){
		cout << " ";
	}
	
	cout << "+";
	
	space = 0;
	for(i = 0; i < a; i++){
		space = space + 4;
	}
		
	if(fmod(width,2) == 0){			
		for(i = 1; i < space; i++){
			cout << " ";
		}
	}else{			
		for(i = 0; i <= space; i++){
			cout << " ";
		}
	}
	
	cout << "+" << endl;
}

//above wall
cout << "O";
range = 1;
biggest = range;
for(a = 1; a < size; a++){
	biggest = biggest*2;
}
for(a = 0; a < ((biggest-range)*4 + 2)*width + 1; a++){
	cout << "=";
}
cout << "O" << endl;

////content
for(a = 0; a < length; a++){
	//above part
	for(i = 1; i <= size; i++){
		range = 1;
		biggest = range;
		
		cout << "|";
		
		//pow machine
		for(j = i; j < size; j++){
			range = range*2;
		}
		
		//leftrest
		for(k = 0; k < range; k++){
			cout << "'";
		}
		//biggest result
		for(j = 1; j < size; j++){
			biggest = biggest*2;
		}
		//cout << biggest;
		
		for(m = 0; m < width*2-1; m++){
			//core
			for(l = 0; l < (biggest-range)*2; l++){
				cout << "#";
			}
			//space
			for(k = 0; k < range*2-1; k++){
				cout << "'";
			}
		}

		//additional core
		for(l = 0; l < (biggest-range)*2; l++){
			cout << "#";
		}
		
		//rightrest
		for(k = 0; k < range; k++){
			cout << "'";
		}
		
		cout << "|" << endl;
	}

	//middle part
	for(i = 1; i < size; i++){
		range = 1;
		biggest = range;
		
		cout << "|";
		
		//biggest machine
		for(j = 1; j < size; j++){
			biggest = biggest*2;
		}
		
		//pow machine
		for(j = 1; j < i; j++){
			range = range*2;
		}
		
		//leftrest
		for(j = 0; j < range; j++){
			cout << "'";
		}
		//cout << range;
		
		for(k = 0; k < width-1; k++){
		//core
			for(j = 0; j < (biggest-range)*4 + range*2-1; j++){
				cout << "#";
			}
			//space
			for(j = 0; j < range*2-1; j++){
				cout << "'";
			}
		}
		
		//additional core
		for(j = 0; j < (biggest-range)*4 + range*2-1; j++){
			cout << "#";
		}
		
		//rightrest
		for(j = 0; j < range; j++){
			cout << "'";
		}
		cout << "|" << endl;
	}

	//below part
	for(i = 1; i <= size; i++){	
		range = 1;
		biggest = range;
		
		cout << "|";
		
		//biggest machine
		for(j = 1; j < size; j++){
			biggest = biggest*2;
		}
		
		//sqrt machine
		range = biggest;
		for(j = 1; j < i; j++){
			range = range/2;
		}
		
		//leftrest
		for(j = 0; j < biggest + biggest-range; j++){
			cout << "'";
		}
		//cout << range;
		
		for(k = 0; k < width-1; k++){
			//core
			for(j = 0; j < range*2-1; j++){
				cout << "#";
			}
			
			//space
			for(j = 0; j < (biggest + biggest-range)*2-1; j++){
				cout << "'";
			}
		}
		
		//additional core
		for(j = 0; j < range*2-1; j++){
			cout << "#";
		}
		
		//rightrest
		for(j = 0; j < biggest + biggest-range; j++){
			cout << "'";
		}
		cout << "|" << endl;
	}
}

//below wall
cout << "O";

biggest = range;
for(a = 1; a < size; a++){
	biggest = biggest*2;
}

for(a = 0; a < ((biggest-range)*4 + 2)*width + 1; a++){
	cout << "=";
}
cout << "O" << endl;

return 0;
}
