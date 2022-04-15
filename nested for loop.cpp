// nested for loop : c++
#include<iostream>
using namespace std;
main()
{
	int i,j;
	for(i=1;i<5;i++)
	{
		cout<<"\n";
		for(j=i;j>0;j--)
		{
			cout<<j;
		}
	}
	return 0;
}
