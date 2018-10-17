#include<iostream>
#include<string>

using namespace std;

int main()
{
	int num,e=0,o=0,x;
	cin>>num;
	for(int i=0;i<10;i++)
	{
		x=num%100;
		e += x/10;
		o += x%10;
		
		num=num/100;
		
	}
	
	cout<<"Even sum: "<<e<<endl;
	cout<<"Odd sum:"<<o<<endl;
	
	return 0;
}
