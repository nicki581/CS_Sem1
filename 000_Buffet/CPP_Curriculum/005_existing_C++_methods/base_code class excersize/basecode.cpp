// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	gotoxy(1,2);
	cout<< 'a' ;
	gotoxy(1,3);
	cout<< 'n' ;
	gotoxy(1,4);
	cout<< 'u' ;
	gotoxy(1,5);
	cout<< 's' ;
	gotoxy(1,6);
	cout<< 'h' ;
	gotoxy(1,7);
	cout<< 'k' ;
	gotoxy(1,8);
	cout<< 'a' ;
	
    for(int i=0; i<5; i++){
    	gotoxy(1+i,2+i);
    	cout<<'N';
    }
}

