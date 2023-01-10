#include<iostream>
using namespace std;
int main()
{
	int cp,sp,profit,loss;
	cout<<"enter cost price:";
	cin>>cp;
	cout<<"enter selling price:";
	cin>>sp;
	if(sp>cp)
	{
		profit=sp-cp;
		cout<<"profit is :"<<profit<<endl;
	}
	else
	{
		loss=cp-sp;
		cout<<"loss is :"<<loss<<endl;
	}
	
	
	return 0;
}
