#include<iostream>
using namespace std;
int main()
{
	int n,first,second,third;
	cout<<"enter three digits number : "<<endl;
	cin>>n;
	first=n/100;
	n=n%100;
	second=n/10;
	third=n%10;
	cout<<"sum of first second and third digit is : "<<(first+second+third)<<endl;
	return 0;
	
}
