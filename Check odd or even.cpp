#include<iostream>
#include<string>
using namespace std;
bool check_prime(int);
int main()
{
	int num;
	bool ans;
	cout<<"Enter a positive integer"<<endl;
	cin>>num;
	ans=check_prime(num);
	system("pause");
	return 0;
}
bool check_prime(int num)
{
	int divisor;
	for(divisor=2;divisor<=(num/2);divisor++)
	{
		if( (num%divisor) ==0)
			cout<<"This is an even number!"<<endl;
		else
			cout<<"This is an odd number!"<<endl;
	}
	return 0;
}