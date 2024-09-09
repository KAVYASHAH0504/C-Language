#include<iostream>
using namespace std;
class student{
	private:
		int sno;
		string sname;
		static int y;
	public:
		void setdata()
		{
			cout<<endl<<"Enter sno =>";
			cin>>sno;
			cout<<endl<<"Enter sname =>";
			cin>>sname;
			y++;
		}
		void printdata()
		{
			cout<<endl<<"sno = "<<sno<<" sname = "<<sname;
		}
		void static printcnt()
		{
			cout<<endl<<"cnt = "<<y;
		}
};
int student::y;

main()
{
	student s1,s2,s3;
	
	s1.setdata();
	s2.setdata();
	s3.setdata();
	
	s1.printdata();
	s2.printdata();
	s3.printdata();
	
	student::printcnt();
}
