/*@author : yildirim_habr
 *
 *
 */

#include <iostream>

using namespace std;

int a, b, c, d, biggest, range;
int size = 3;
int width = 2;
int length = 2;

void biggestMachine(){
	//biggest machine
	biggest = 1;
	for(b = 1; b < size; b++){
		biggest = biggest*2;
	}
}

void exponentialMachinePlus(){
	//exponential machine (+)
	range = 1;
	for(b = 1; b < a; b++){
		range = range*2;
	}
}

void exponentialMachineMinus(){
	//exponential machine (-)
	range = biggest;
	for(b = 1; b < a; b++){
		range = range/2;
	}
}

void partOne()
{
for(a = 1; a < size; a++){
	biggestMachine();
	exponentialMachinePlus();
	
	cout << "|";
	
	for(c = 0; c < width; c++){
		//range
		for(b = 1; b <= biggest + biggest-range; b++){
			cout << "-";
		}
		
		//waru
		for(b = 1; b <= range*2-1; b++){
			cout << "#";
		}
		
		//range
		for(b = 1; b <= biggest + biggest-range; b++){
			cout << "-";
		}
	}
	
	cout << "|" << endl;
}
}

void partTwo()
{
for(a = 1; a <= size; a++){
	biggestMachine();
	exponentialMachineMinus();
	//range = 1;

	cout << "|";

	
	for(c = 0; c < width; c++){
		//range
		for(b = 1; b <= range; b++){
			cout << "-";
		}
		
		biggestMachine();
		//cout << biggest;
		//waru
		for(b = 1; b <= (biggest - range)*2 + (biggest)*2-1; b++){
			cout << "#";
		}
		
		//range
		for(b = 1; b <= range; b++){
			cout << "-";
		}
	}
	
	cout << "|" << endl;
}
}

void sideWaru(){
	biggestMachine();
	exponentialMachinePlus();
	
	//range
	for(b = 1; b <= range; b++){
		cout << "-";
	}
	
	//waru
	for(b = 1; b <= (biggest-range)*2-1; b++){
		cout << "#";
	}
	
	//range
	for(b = 1; b <= range; b++){
		cout << "-";
	}
}

void partThree()
{
for(a = 1; a < size; a++){
	cout << "|";

	for(c = 0; c < width; c++){
		sideWaru();
		
		//stem
		cout << "#";
		
		sideWaru();
	}
	
	cout << "|" << endl;
}
}

void partFour()
{
for(a = 2; a < size; a++){
	biggestMachine();
	exponentialMachinePlus();

	cout << "|";	
	
	for(c = 0; c < width; c++){
		//range
		for(b = 1; b < range + (biggest-range)*2; b++){
			cout << "-";
		}
		
		//base stem
		for(b = 1; b <= range*2 + 1 ; b++){
			cout << "#";
		}
		
		//range
		for(b = 1; b < range + (biggest-range)*2; b++){
			cout << "-";
		}
	}
	
	cout << "|" << endl;
}
}
	
void coverLine()
{
biggestMachine();
range = 1;

cout << "|";

for(a = 0; a < ((biggest + biggest-range)*2 + 1)*width; a++){
	cout << "-";
}	

cout << "|" << endl;
}

void wall()
{
biggestMachine();
range = 1;

cout << "O";

for(a = 0; a < ((biggest + biggest-range)*2 + 1)*width; a++){
	cout << "=";
}	

cout << "O" << endl;
}

int main()
{
wall();
for(d = 0; d < length; d++){
	partOne();
	partTwo();
	partThree();
	partFour();
	coverLine();
}	
wall();
return 0;
}
