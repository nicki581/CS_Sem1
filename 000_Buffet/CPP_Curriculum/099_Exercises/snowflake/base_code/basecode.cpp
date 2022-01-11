// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	
	char character;
	cout<< "Enter a character for ur snowflake: ";
	cin>> character;
	
	gotoxy(4,4);
	cout<<character;
	cout<< endl;
	sleep(1);
	gotoxy(4,4);
	cout<<" ";
	
	gotoxy(4,4);
	cout<<character;
	cout<< endl;
	sleep(1);
	gotoxy(4,4);
	cout<<" ";
	
	gotoxy(4,5);
	cout<<character;
	cout<< endl;
	sleep(1);
	gotoxy(4,5);
	cout<<" ";
	
	gotoxy(4,6);
	cout<<character;
	cout<< endl;
	sleep(1);
	gotoxy(4,6);
	cout<<" ";
	
	gotoxy(4,7);
	cout<<character;
	cout<< endl;
	sleep(1);
	gotoxy(4,7);
	cout<<" ";
	
	gotoxy(4,8);
	cout<<character;
	cout<< endl;
	sleep(1);
	gotoxy(4,8);
	cout<<" ";
	
	gotoxy(4,9);
	cout<<character;
	cout<< endl;
	sleep(1);
	gotoxy(4,9);
	cout<<" ";
	
	gotoxy(4,10);
	cout<<character;
	cout<< endl;
	sleep(1);
	gotoxy(4,10);
	cout<<" ";


}
