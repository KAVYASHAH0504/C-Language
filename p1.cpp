#include<iostream>
using namespace std;
class book
{
private: //access modifier , access specifier , visbility control
	int bid;
	string bname;
	int bprice;
public:
	void setbook()
	{
		cout<<endl<<"Enter bid =>";
		cin>>bid;
		cout<<endl<<"Enter bname =>";
		cin>>bname;
		cout<<endl<<"Enter bprice =>";
		cin>>bprice;
	}
	void printbook()
	{
		cout<<endl<<"bid = "<<bid<<" bname = "<<bname<<" bprice = "<<bprice;
	}
};

main()
{
	book b1,b2,b3;
	b1.setbook();
	b2.setbook();
	b3.setbook();
	
	b1.printbook();
	b2.printbook();
	b3.printbook();
}
