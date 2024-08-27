#include<iostream.h>
#include<conio.h>
void shape(int,char);
int main()
{
	
	cout<<" Hassam coding"<<endl;
	int num;
	char ch;
	cout<<"\nEnter a number:";
	cin>>num;
	cout<<"Enter a charcter:";
	cin>>ch;
	shape(num,ch);
	getch();
}
void shape(int n,char c)
{
	int i,j;
	for(i=1;i<=n;i++)
{
 cout<<endl;
 for(j=1;j<=n; j++)
 cout<<c;	
 }
}