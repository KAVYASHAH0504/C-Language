#include<iostream>
using namespace std;
class student
{
private:
	int sno;
	string sname;
public:
	void setstudent()
	{
		cout<<endl<<"Enter no and name =>";
		cin>>sno>>sname;
	}
	void printstudent()
	{
		cout<<"sno = "<<sno<<" sname = "<<sname;
	}
};
class marks : public student
{
protected:
	int eng,hindi;
public:
	void setmarks()
	{
		cout<<endl<<"Enter marks of eng and hindi =>";
		cin>>eng>>hindi;
	}
	void printmarks()
	{
		cout<<endl<<"English = "<<eng<<" Hindi = "<<hindi;
	}
	
};
class result: public marks
{
public:
	void printresult()
	{
	cout<<endl<<"Total marks = "<<eng+hindi;	
	}	
};
main()
{
	result r1;
	r1.setstudent();
	r1.setmarks();
	r1.printstudent();
	r1.printmarks();
	r1.printresult();
}





