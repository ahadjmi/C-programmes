#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int bi,len,t,decimal=0;
	
	cout<<"Length of binary:";
	cin>>len;
	cout<<"Enter binary number:";
	cin>>bi;
	for(int i=0;i<len;i++)
	{
		t=bi%10;
		decimal += pow(2,i)*t;
		bi=bi/10;
	}
	
	cout<<"Decimal is: "<<decimal;
	
	return 0;
}
