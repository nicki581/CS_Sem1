// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	
    //cout<<"yeah we are starting c++"<<endl;
    
    //*****
    //*****
    //*****
    
    for(int y=1; y<4; y++){
    	for(int x=1; x<6; x++){
    		gotoxy(x+11,y+4);
    	cout<< "*";
    	}
    	//cout<< endl;
    }

}

