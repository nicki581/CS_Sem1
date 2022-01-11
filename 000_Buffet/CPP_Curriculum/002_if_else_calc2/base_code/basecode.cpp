// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

//main(){
	//srand(time(NULL));
	// write code here
	//int x = 10;
	//cout << (x) << endl;
	
	//cout << "Enter yo number";
    //int y = 0;
    //cin >> y;
    //cout <<"your number is 5" << y;
    
    //char z = 'c';
    //cout << z << endl;
    //char zz = '&';
    //cin >> zz;
	
	//cout<<"yeah we are starting c++" << endl;
	//cout<<"yeah we are starting c++" << endl << endl <<endl <<endl;
	//cout<<"yeah we are starting c++" << endl;

main(){	
	int x;
	int y;
	char operation;
	int answer;
	
		cout << "Please enter your first number: ";
		cin >> x;
		cout << "Please enter your second number: ";
		cin >> y;
		cout << "Please enter the operation: ";
		cin >> operation;
		
		if(operation=='+')
		{
			answer = x+y;
			cout << "Your answer is: " << (answer) << endl;
		}
		else if(operation=='-')
		{
			answer = x-y;
			cout << "Your answer is: " << (answer) << endl;
		}
		else if(operation=='*')
		{
			answer = x*y;
			cout << "Your answer is: " << (answer) << endl;
		}
		else if(operation=='/')
		{
			answer = x/y;
			cout << "Your answer is: " << (answer) << endl;
		}
		else
		{
			cout<<"Sorry Joe!";
		}
		
		



}
