#include<iostream>

using namespace std;

int main()
{
	int a[5],temp[5],max=-65664,l,sum=0,s,e;
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	
	for(int i=0;i<5;i++)
	{
		
		for(int j=0;j<5;j++)
		{
			sum=0;
			for(int k=i;k<5-j;k++)
			{
				sum+=a[k];
	
				
			}
			
			if(sum>max)
			{
				max=sum;
			}
			
				   
		}
			
	}
	
	cout<<max;
	
	return 0;
}
