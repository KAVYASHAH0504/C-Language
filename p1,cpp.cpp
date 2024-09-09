#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
	int c;
	c=a;
	a=b;
	b=c;
}

main()
{
int x=22,y=2;
cout<<endl<<"X = "<<x<<" Y = "<<y;
swap(x,y);
cout<<endl<<"X = "<<x<<" Y = "<<y;
}
