// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	
	char character;
	int width= 0;
	int height = 0;
	
	cout<< "Pls enter character: ";
	cin>> character;
	
	cout<< "Pls enter width of box: ";
	cin>> width;
	
	cout<< "Pls enter height of box: ";
	cin>> height;
	
	for(int y=1; y<height+1; y++){
		for(int x=1; x<width+1; x++){
			cout<<character;
		}
		cout<<endl;
	}

}
