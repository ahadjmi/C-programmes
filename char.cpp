#include<iostream>
#include<string>

using namespace std;

int main()
{
	char a;
	
	a=cin.get();
	int cur_word=0;
	int count_word=0;
	int ch=0;
	int line=1;


	while(a!='$')
	{
		if(a==' ' || a=='\t')
		{
			if(cur_word>0){
			   count_word++;
			   cur_word=0;   
		    }
		}
		else if(a=='\n')
		{
			line++;
			if(cur_word>0){
			   count_word++;
			   cur_word=0;   
		    }
		}
		
	   else
	   {
	   	 cur_word++;
	   }  
	   
	   ch++;
		a=cin.get();
		
	}
	if(cur_word>0)
	{
		count_word++;
	}
	cout<<count_word<<endl;
	cout<<line<<endl;
	cout<<ch<<endl;
	return 0;
}
