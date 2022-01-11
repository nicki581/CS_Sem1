// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	// write code here
	char symbol;
	int miku = 0;
	char lumine;
	
	cout << "Pls put in symbol: ";
	cin >> symbol;
	
	cout << "Please enter length of line: ";
	cin >> miku;
	
	cout << "Enter \"h\" for horizantal and \"v\" for verical?: ";
	cin >> lumine;
	
	for(int i= 1; i <=miku; i++){
		if(lumine == 'h'){
			cout << symbol;
		}
	}
	for(int c=1; c <= miku; c++){
		if(lumine == 'v'){
			cout << symbol << endl;
		}
	}
		
	}





