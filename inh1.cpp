#include<iostream>
using namespace std;

class india
{
	
	protected:
	int a;
	public:
		void setindia()
		{
            cout<<endl<<"Enter a=>";
            cin>>a;
		}
		void printindia()
		{
            cout<<endl<<"a="<<a;
		}
};

class usa : public india
{
	private:
	int b;
	public:
		void setusa()
		{
            cout<<endl<<"Enter b=>";
            cin>>b;
		}
		void printusa()
		{
            cout<<endl<<"b="<<b;
		}
		void multi()
		{
			cout<<endl<<"Multi = "<<a*b;
		}
};

main()
{
 usa u1;
 u1.setindia();
 u1.setusa();
 u1.printindia();
 u1.printusa();
 u1.multi();
 }
 
 
