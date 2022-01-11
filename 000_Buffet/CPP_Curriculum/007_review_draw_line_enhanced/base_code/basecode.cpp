// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	
	int length = 0;
	char symbol;
	int x;
	int y;
	
	cout<<"Please enter line length: ";
	cin>>length;
	
	cout<<"Please enter line symbol: ";
	cin>>symbol;
	
	cout<<"Please enter line x coordinate: ";
	cin>>x;
	
	cout<<"Please enter line y coordinate: ";
	cin>>y;
	
	for(int i = 0; i<length; i++){
		gotoxy(x+i,y);
		cout<<symbol;
}
}
