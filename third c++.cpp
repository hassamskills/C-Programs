#include<iostream.h>
#include<conio.h>
void table(int n);
int main()
{
	cout<<"  Hassam Developer"<<endl;
	int num;
	cout<<"Enter a number;";
	cin>>num;
	table(num);
	getch();
}
void table(int n)
{
	int c;
	for(c=1;c<=10;c++)
	{
		cout<<n<<"*"<<c<<"="<<n*c<<endl;
	}
}