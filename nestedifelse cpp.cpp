// to find which number is greater in a,b,c : using nested if else c++
#include<iostream>
using namespace std;
main()
{
	int a,b,c; 
	cout<<"enter the value of a b c :";
	cin>>a>>b>>c;
	if(a>b)
	 {
	   if(a>c)
	  {
	  	cout<<"a is greater ";
	  }
	  else
	  {
	  	cout<<"c is greater";
	  } 
	 }
    else 
    {
	if(b>c)
	{
      cout<<"b is greater"	;	
    }	  
    else
    {
	 cout<<"c is greater ";
	}
   }
}
