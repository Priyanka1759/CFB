// DEFAULT CONSTRUCTOR
#include<iostream>
using namespace std;
class car
{
	public:
		string brand;
		string model;
		int year;
		car(string x,string y,int z)
		{
			brand=x;
			model=y;
			year=z;
		}
};
int main()
{
	car carobj1("BMW","XS",'1999');
	car carobj2("FORD","MUSTANG",'1969');
	cout<<carobj1.brand<<"\n "<<carobj1.model<<"\n"<<carobj1.year<<"\n";
	cout<<carobj2.brand<<"\n "<<carobj2.model<<"\n"<<carobj2.year<<"\n";
	return 0;
}
