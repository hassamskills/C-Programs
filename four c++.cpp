#include<iostream.h>
#include<conio.h>
void value(int);
int main()
{
	cout<<" Hassam coder"<<endl;
	int x;
	cout<<"Enter an integer:";
	cin>>x;
	value(x);
	getch();
}
	void value(int x)
{
	int p,n;
	p=x-1;
	n=x+1;
	cout<<"the number before"<<x<<"is"<<p<<endl;
	cout<<"the number after"<<x<<"is"<<n<<endl;
}
