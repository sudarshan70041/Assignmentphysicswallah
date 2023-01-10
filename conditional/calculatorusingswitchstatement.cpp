#include<iostream>
using namespace std;
int main()
{
	char op;
	float num1,num2;
	cout<<"enter an operator(+, -, *, /)"<<endl;
	cin>>op;
	cout<<"enter the value of num1:"<<endl;
	cin>>num1;
	cout<<"enter the value of num2:"<<endl;
	cin>>num2;
	switch(op)
	{
		case '+':
			cout<<num1+num2;
			break;
			
		case '-':
			cout<<num1-num2;
			break;
		
		case '*':
			cout<<num1*num2;
			break;
		
		case '/':
			cout<<num1/num2;
			break;		
		default:
		cout<<"ERROR! the operator is not correct:"<<endl;
		break;		
	}
	
	return 0;
	
}
