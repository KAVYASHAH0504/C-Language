#include<iostream>
using namespace std;

class student
{
private:
	int sno;
	string sname;
	int e;
public:
	void setstu()
	{
		cout<<endl<<"Enter no =>";
		cin>>sno;
		cout<<endl<<"Enter sname =>";
		cin>>sname;
		cout<<endl<<"Enter marks of eng =>";
		cin>>e;	
	}
	void printstu()
	{
		cout<<endl<<"no = "<<sno<<" sname = "<<sname<<" marks of english = "<<e;
	}	
};
main()
{
	student s1,s2,s3;
	s1.setstu();
	s2.setstu();
	s3.setstu();
	
	s1.printstu();
	s2.printstu();
	s3.printstu();
}
