#include<iostream>
using namespace std;

class usa
{
public:
	void hi()
	{
	cout<<endl<<"hi in usa";
	}	
};
class japan:public usa
{
public:
		void hi()
		{
			cout<<endl<<"hi in japan";
		}
};


main()
{
japan j1;
j1.hi();
j1.hi();

}
