#include<iostream>
using namespace std;

//function to reverse a number
int reverse(int n)
{
	if(n<10)
	{
		return n;
	}
	else
	{
		cout << n%10;
		reverse(n/10);
	}
}

//Dec 2015 Question 3
int fun(int a,int b)
{
	if(a==b)
	 return a;
	else
	{
		int c = (a+b)/2;
		return fun(a,c) + fun(c+1,b);
	}
}

//Dec 2016 Question 1
int fun1(int a,int b)
{
	if(a==b)
	 return a+1;
	else
	{
		int c =((2*a)+b)/3;
		return fun1(a,c) + fun1(c+1,b);
	}
}
	
int main()
{
	int x;
	cout << "Enter a number ";
	cin >> x;
	cout << reverse(x) << endl;
	
	cout << fun(1,6) << endl;
	
	cout << fun1(3,8) << endl;
	
}
