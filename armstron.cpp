#include<iostream>
#include<math.h>

using namespace std;
int main()
{
	int num,len,x,temp=0,num1;
	cin>>len;
	cin>>num;
	num1=num;
	
	for(int i=0;i<len;i++)
	{
		x=num%10;
		temp += pow(x,len);
		num=num/10;
	}
	
	if(num1==temp)
	{
		cout<<"Yes Armstrong number";
	}
	else
	{
		cout<<"Not a Armstrong number";
	}
	
	return 0;
}
