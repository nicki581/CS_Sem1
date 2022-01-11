// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	char symbol;
	int miku = 0;
	char lumine;
	
	cout << "Pls put in symbol: ";
	cin >> symbol;
	
	cout << "Please enter length of line: ";
	cin >> miku;
	
	cout << "Enter \"h\" for horizantal, \"v\" for verical, or \"d\" for diagonal: ";
	cin >> lumine;
	
	for(int i=1; i <=miku; i++){
		if(lumine == 'h'){
			cout << symbol;
		}
	}
	for(int c=1; c <= miku; c++){
		if(lumine == 'v'){
			cout << symbol << endl;
		}
	}
	for(int r=1; r<miku+1; r++){
		if(lumine == 'd'){
			gotoxy(1+r,5+r);
			cout << symbol << endl;
			
		}
	}
		
	}

