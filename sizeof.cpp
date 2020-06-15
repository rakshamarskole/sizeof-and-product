#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	a=sizeof(char);
	b=sizeof(int);
	c=sizeof(float);
	d=sizeof(double);
	cout<<"Size of char: "<<a<<" bytes\n"<<"Size of int: "<<b<<" bytes\n"<<"Size of float: "<<c<<" bytes\n"<<"Size of double: "<<d<<" bytes\n";
	return 0;
}
