#include<iostream>
using namespace std;

class bank
{
private:
int acno;
string cname;
int balance;
public:
void setac()
{
cout<<endl<<"Enter acno =>";
cin>>acno;
cout<<endl<<"Enter cname =>";
cin>>cname;
cout<<endl<<"Enter balance =>";
cin>>balance;
}
void printac()
{
cout<<endl<<"acno = "<<acno<<" cname = "<<cname<<" balance = "<<balance;
}
void deposit()
{
int d;
cout<<endl<<"Enter amount for deposit =>";
cin>>d;
balance=balance+d;
}
void with()
{
int w;
cout<<endl<<"Enter amount for With =>";
cin>>w;
balance=balance-w;
}
};

main()
{
bank b1;
b1.setac();
b1.printac();
b1.deposit();
b1.printac();
b1.with();
b1.printac();
}

