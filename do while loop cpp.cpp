// table of number - do while loop : c++
#include<iostream>
using namespace std;
main()
{
	int a,product,i=1;
	cout<<"enter the values of a ";
	cin>>a;
	do
	{
	 product=a*i;
	 cout<<"\n"<<product;
	 i++; 	
	}
    while(i<=10);
    
    return 0;	

}
