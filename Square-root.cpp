#include <iostream>
#include<string>
using namespace std;

double squareRoot(double num)
{
	double guess=num/2;
	double pre_guess;
	do
	{
		pre_guess=guess;
		double div=num/guess;
		guess=(guess+div)/2;
	}while( (fabs(pre_guess-guess)/pre_guess)>0.01);///??pregress?guess??????fabs??double
		
	return guess;
}
int main()
{
  int num1;
  cout<<"Enter a number:"<<endl;
  cin>>num1;
  cout<<"The square root of this number is "<<squareRoot(num1)<<endl;
  system("pause");
  return 0;
}