// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	int x=5;
    while(true){
    	cout<<x<<endl;
		if(x==25){
			break;
		}
		x=x+1;
	}
	cout<<endl;
	
	int y=15;
	while(true){
		cout<<y<<endl;
		if(y==5){
			break;
		}
		y=y-1;
	}
	
    for(int i=5; i<=25; i=i+1){
    	cout << i << endl;
    }
    
    for(int k = 15; k>= 5; k=k-1){
    	cout << k << endl;
}
    int b=123;
        while(true){
		if(b>=200){
			break;
		}
		cout<<b<<endl;
		b=b+2;
}
   for(int x= 123; x<=200; x=x+2){
   	cout <<x<<endl;
   	}
   	
   for(int x= 1253; x>=55; x=x-7){
   	cout<< x <<endl;
   }
   
}
