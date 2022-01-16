#include<iostream>
#include<math.h>
#include<conio.h>
#include<stdio.h> 


using namespace std;

int main()
{
	
	int  kalame=1 ,ch=0, n=0;
	char str[200];
	
	cout<<"vared kon 1 jomle :";
    gets(str);
	
	while(true)
	{
	 ch=str[n];
	 
	 if(ch==' ')
	 kalame++;
	
    else if(ch>='0' && ch<='9')

	break;
	n++;
	}
cout<<"tedad kalamat jomle : "<< kalame;
cout << endl;

return 0;
}
