#include<iostream.h>
#include<conio.h>
void swap(int&x,int&y);
int main()
{
	
	cout<<"     Coding with HASSAM Developer"<<endl;
	int a,b;
	cout<<"Enter an integer:";
	cin>>a;
	cout<<"Enter an integer:";
	cin>>b;
	cout<<"Value before swapping:\n";
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	cout<<"swapping the values..."<<endl;
	swap(a,b);
	cout<<"values after swapping:\n";
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	getch();
}
void swap(int&x,int&y)
{
	int t;
	t=x;
	x=y;
	y=t;
}