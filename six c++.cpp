#include<iostream.h>
#include<conio.h>
void chk_number(int n)
{
	int c=0,i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		c=1;
	}
	if(n%2==0 &&c==0)
	cout<<n<<"is a prime even number:";
	else if(n%2!=0&&c==0)
	cout<<n<<"is a odd prime number:";
	else if(n%2==0&&c!=0)
	cout<<n<<"is only an even number, not prime.";
	else if(n%2!=0)
	cout<<n<<"is only an odd number, not prime.";
	else
	cout<<"is not a prime number.";
}
int main()
{
	int n;
	cout<<"\nEnter a number:";
	cin>>n;
	cout<<"\nNatural of number \n";
	cout<<"\n---------\n";
	chk_number(n);
	getch();
}