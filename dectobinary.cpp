#include<iostream>
#include<math.h>

using namespace std;
int main()
{
	int decimal,binary=0,num;
	
	cout<<"Enter decimal number: ";
	cin>>decimal;
	
	for(int i=0;i<50;i++)
	{
		num=decimal%2;
		binary += pow(10,i)*num;
		decimal=decimal/2;
		
		
	}
	
	cout<<binary;
	
	return 0;
	
}
