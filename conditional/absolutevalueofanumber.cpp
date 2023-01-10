#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter the value of a :";
	cin>>a;
	if(a<0)
	{
		a=a*(-1);
	}
	cout<<"absolute value is "<<a<<endl;
	
	return 0;
}
