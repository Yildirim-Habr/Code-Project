#include <iostream>

using namespace std;

int a, b, c, d, biggest, range;
int size = 3;
int width = 3;
int length = 2;

void biggestMachine(){
	biggest = 1;
	
	//biggest machine
	for(b = 1; b < size; b++){
		biggest = biggest*2;
	}
}

void exponentialMachinePlus(){
	range = 1;
	//exponential machine (+)
	for(b = 1; b < a; b++){
		range = range*2;
	}
}

void exponentialMachineMinus(){
	//exponential machine (-)
	range = biggest;
	for(b = 0; b < a; b++){
		range = range/2;
	}
}

void partThree(){
	//left clover
	for(b = 0; b < (biggest-range)*2; b++){
		cout << "#";
	}
	
	//center space
	for(b = 0; b <= range*2; b++){
		cout << "#";
	}
	
	//right clover
	for(b = 0; b < (biggest-range)*2; b++){
		cout << "#";
	}
}

void partFour(){
	//left clover
	for(b = 0; b < (biggest-range)*2; b++){
		cout << "#";
	}
	
	//range 2
	for(b = 0; b < range; b++){
		cout << "-";
	}
	
	cout << "#";
	
	//range 2
	for(b = 0; b < range; b++){
		cout << "-";
	}
	
	//right clover
	for(b = 0; b < (biggest-range)*2; b++){
		cout << "#";
	}
}

void partFive(){
	//clover stem
	for(b = 0; b <= range*2; b++){
		cout << "#";
	}
}

void wall(){
	range = 1;
	biggestMachine();
	
	cout << "O";
	
	for(a = 0; a < ((biggest-range)*4 + (range*4) + 1)*width; a++){
		cout << "=";
	}
	cout << "O" << endl;
}

int main() 
{
wall();

cout << "|";
		
for(a = 0; a < ((biggest-range)*4 + (range*4) + 1)*width; a++){
	cout << "-";
}
cout << "|" << endl;

for(d = 0; d < length; d++){
	//part 1
	for(a = 1; a < size; a++){
		cout << "|";
		
		biggestMachine();
		
		exponentialMachineMinus();
		
		//range 1
		for(b = 0; b < biggest + range; b++){
			cout << "-";
		}
		
		for(c = 1; c < width; c++){
			//center clover
			for(b = 0; b <= (biggest-range)*2; b++){
				cout << "#";
			}

			//space between
			for(b = 0; b < (biggest + range)*2; b++){
				cout << "-";
			}
		}
		
		//center clover
		for(b = 0; b <= (biggest-range)*2; b++){
			cout << "#";
		}

		//rightrange
		for(b = 0; b < biggest + range; b++){
			cout << "-";
		}
		
		cout << "|" << endl;
	}

	//part 2
	for(a = 1; a < size; a++){
		cout << "|";
		
		biggestMachine();
		
		exponentialMachinePlus();
		
		//leftrange
		for(b = 0; b < biggest + range; b++){
			cout << "-";
		}
		
		for(c = 1; c < width; c++){
			//center clover
			for(b = 0; b <= (biggest-range)*2; b++){
				cout << "#";
			}
			
			//space between
			for(b = 0; b < (biggest + range)*2; b++){
				cout << "-";
			}
		}

		//center clover
		for(b = 0; b <= (biggest-range)*2; b++){
			cout << "#";
		}

		//rightrange
		for(b = 0; b < biggest + range; b++){
			cout << "-";
		}
		
		cout << "|" << endl;
	}

	//part 3
	for(a = 1; a < size; a++){
		cout << "|";
		
		biggestMachine();
		
		exponentialMachineMinus();
		//leftrange 
		for(b = 0; b < range; b++){
			cout << "-";
		}
		//cout << range;
		for(c = 1; c < width; c++){
			partThree();
			
			//space between
			for(b = 0; b < range*2; b++){
				cout << "-";
			}
		}
		
		partThree();
		
		//rightrange
		for(b = 0; b < range; b++){
			cout << "-";
		}
		
		cout << "|" << endl;
	}

	//part 4
	for(a = 1; a < size; a++){
		cout << "|";
		
		biggestMachine();
		
		exponentialMachinePlus();
		
		//range 2
		for(b = 0; b < range; b++){
			cout << "-";
		}
		
		for(c = 1; c < width; c++){
			partFour();
			
			//space between
			for(b = 0; b < range*2; b++){
				cout << "-";
			}
		}
		
		partFour();
		
		//range 2
		for(b = 0; b < range; b++){
			cout << "-";
		}
		
		cout << "|" << endl;
	}

	//part 5
	for(a = 1; a < size; a++){
		cout << "|";
		
		biggestMachine();
		
		exponentialMachinePlus();
		
		//range
		for(b = 0; b < (biggest-range)*2 + range; b++){
			cout << "-";
		}
		
		for(c = 1; c < width; c++){
			partFive();
			
			//between space
			for(b = 0; b < ((biggest-range)*2 + range)*2; b++){
				cout << "-";
			}
		}
		
		partFive();
		
		//range
		for(b = 0; b < (biggest-range)*2 + range; b++){
			cout << "-";
		}
		
		cout << "|" << endl;
	}
	
	cout << "|";
		
	for(a = 0; a < ((biggest-range)*4 + (range*4) + 1)*width; a++){
		cout << "-";
	}
	
	cout << "|" << endl;
}

wall();

return 0;
}
