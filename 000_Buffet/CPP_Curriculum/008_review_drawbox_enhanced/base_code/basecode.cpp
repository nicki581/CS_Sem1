// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	
	char character;
	int width= 0;
	int height = 0;
	int x=0;
	int y=0;
	
	cout<< "Pls enter character: ";
	cin>> character;
	
	cout<< "Pls enter width of box: ";
	cin>> width;
	
	cout<< "Pls enter height of box: ";
	cin>> height;
	
	cout<<"Pls enter x coordinate: ";
	cin>>x;
	
	cout<<"Pls emter y coordnate: ";
	cin>>y;
	
	for(int i=0; i<height; i++){
		for(int j=0; j<width; j++){
			gotoxy(x+j,y+i);
			cout<<character;
		
		}
		cout<<endl;
	}

}
