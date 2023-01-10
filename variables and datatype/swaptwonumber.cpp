#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter a:"<<endl;
	cin>>a;
	cout<<"enter b:"<<endl;
	cin>>b;
	int c;
	c=a;
	a=b;
	b=c;
	cout<<"after swapping"<<endl;
	cout<<"the value of a : "<<a<<endl;
	cout<<"the value of b : "<<b<<endl;
	
	
	return 0;
}
