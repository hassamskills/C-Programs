#include<iostream.h>
#include<conio.h>
void cal(int a,int b,char op);
int main()
{
	cout<<" coding with Hassam"<<endl;
	int x,y;
	char c;
	cout<<"enter first number,operator and second number;";
	cin>>x>>c>>y;
	cal(x,y,c);
	getch();	
}
void cal(int a, int b, char op)
{
	switch(op)
	{
		case'+':
		cout<<a<<"+"<<b<<"="<<a+b;
		break;
		case'-':
		cout<<a<<"-"<<b<<"="<<a-b;
		break;
		case'*':
		cout<<a<<"*"<<b<<"="<<a*b;
		break;
		case'/':
		cout<<a<<"/"<<b<<"="<<a/b;
		break;
		case'%':
		cout<<a<<"%"<<b<<"="<<a%b;
		break;
		default:
		cout<<"invalid operator!";
	}
}