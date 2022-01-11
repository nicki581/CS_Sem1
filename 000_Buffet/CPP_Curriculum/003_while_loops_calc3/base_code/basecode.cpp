// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	int x;
	int y;
	char operation;
	int answer;
	char breaker;
	
	
	while(true) {

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
			cout<<"Invalid operator." << endl;
		}


        cout << "Enter \"y\" to go again or any character to stop" << endl;
        cin >> breaker;
		
		if(breaker== 'y')
		{
			cout << "Okay ";
		}
		else if(breaker== 'n')
		{
			cout << "game over";
		}
		else
		{
			cout << "game over";
			break;
		}
		
		
	}

}
