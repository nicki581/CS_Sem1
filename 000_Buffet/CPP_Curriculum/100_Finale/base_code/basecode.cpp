// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	
	//output&input
	char ground;
	cout<<"Enter character for the ground: ";
	cin>>ground;
	
	char star;
	cout<<"Enter character for tree top: ";
	cin>> star;
	
	char character;
	cout<<"Enter character for snowflake: ";
	cin>>character;
	
	//char snow;
	//cout<<"Enter character for snow: ";
	//cin>> snow;
	//output&inut end
	
	//tree
	gotoxy(7,9);
	cout<<star;
	gotoxy(7,10);
	cout<<"*";
	gotoxy(6,11);
	cout<<"* *";
	gotoxy(5,12);
	cout<<"* * *";
	gotoxy(4,13);
	cout<<"* * * *";
	gotoxy(3,14);
	cout<<"* * * * *";
	gotoxy(6,15);
	cout<<"|";
	gotoxy(7,15);
	cout<<"_";
	gotoxy(8,15);
	cout<<"|";
	//tree end
	
	//ground
	for(int y=0; y<50;y++){
		gotoxy(1+y,16);
		cout<<ground;
	}
	cout<<endl;
	//ground end
	
	//gift
	gotoxy(17,12);
	cout<< "%";
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			gotoxy(16+i,13+j);
			cout<<"#";
		}
		cout<<endl;
	}
	
	for(int r= 0; r<17; r++){
	gotoxy(4,6);
	cout<<character;
	gotoxy(5,7);
	cout<<character;
	gotoxy(4,8);
	cout<<character;
	gotoxy(5,9);
	cout<<character;
	gotoxy(4,10);
	cout<<character;
	sleep(1);
	gotoxy(4,6);
	cout<<' ';
	gotoxy(5,7);
	cout<<' ';
	gotoxy(4,8);
	cout<<' ';
	gotoxy(5,9);
	cout<<' ';
	gotoxy(4,10);
	cout<<' ';
	}


	


	
	
	

}
