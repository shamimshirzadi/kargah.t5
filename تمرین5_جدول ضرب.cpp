#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
 
int main()
{
	int m,n ;
	
	cout<<"vared kon m ra :"; 
	cin>>m ;
	
	cout<<"vared kon n ra :"; 
	cin>>n ;

	for(int j=1; j<=n ;j++)
	{
		cout<<endl ;
	
	for(int i=1 ;i<=m ;i++)
		
		cout<< j*i ;
	}

	return 0;
}
