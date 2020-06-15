//ex3 2 

#include<iostream>
#include<cmath>
using namespace std;
int reversedInteger(int);
int numberofdigits(int);
int main()
{
	int n1,n2;
	cout<<"Enter a num"<<endl;
	cin>>n1;
	n2=reversedInteger(n1);
	cout<<n2<<endl;
	system("Pause");
	return 0;
}

int reversedInteger(int num1)
{
	int reverse=0,num3;
	num3=numberofdigits(num1)-1;
	while(num3>=0)
	{
		double num4=pow(10.0,num3);
		num4=static_cast<int>(num4);
		int num5=num1-reverse*pow(10.0,num3+1);
		int num6=0;
		reverse=reverse+(num5/num4)*pow(10.0,num6);
		num3--;
		num6++;
	}
	return(reverse);
}
int numberofdigits(int number)
{
	int n =1;
	while(number>=10)
	{
		number=number/10;
		n++;
	}
	return n ;
}