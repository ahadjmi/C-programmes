#include<iostream>
#include<string.h>

using namespace std;
int main()
{
	int n=5;
	char a[n];
	cin.getline(a,n);
	
	int max=a[0];
	
	for(int i=1;i<n;i++)
	{
	
		int y=a[i];
		if(max<y)
		{
			max=y;
		}
		
	}
	cout<<char(max);
	
	return 0;
}
