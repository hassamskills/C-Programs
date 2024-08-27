#include<iostream.h>
#include<conio.h>
void factorial(int n);
int main()
{
	cout<<" Hassam developer"<<endl;
	int num;
	cout<<"enter number:";
	cin>>num;
	factorial(num);
	getch();
}
void factorial(int n)
{
	int i;
	long fact;
	fact=1;
	for(i=1;i<=n;i++)
	fact*=i;
	cout<<"factorial of "<<n<<"is"<<fact;
}