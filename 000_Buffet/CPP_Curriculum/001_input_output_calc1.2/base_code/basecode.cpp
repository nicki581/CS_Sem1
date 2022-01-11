// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout << "Happy Halloween" << endl;
	
	int x=0;
	char y='a';
	while(true){
		cout << "You've been gnomed";
		cin >> y;
		if(y=='q'){
			cout << "look behind ur mom";
			break;
		}
		
		if(x==1000){
			break;
		}
		x = x+1;
	}
}
