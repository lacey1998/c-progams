#include<iostream>
#include<cmath>
#include<string>
using namespace std;

//Q1
int LCM(int num1, int num2)
{
	int i=1;
	while(i<num2)
	{
		if(i*num1%num2==0)
			break;
		i++;
	}
	return i*num1;
}

//Q2
double squareRoot(double num)
{
	double guess=num/2,preguess,div;

	do
	{
		preguess=guess;
		div=num/guess;
		guess=(guess+div)/2;
	} while(fabs(preguess-guess)/preguess>0.01);
	
	return guess;
}

//Q3
bool isFibNum (int num)
{
	int i=0, j=1, fib=0;
	bool check=false;
	if((num!=0)&&(num!=1))
	{
		while(num>fib)
		{
			fib=i+j;
			i=j;
			j=fib;
			if(num==fib)
				check=true;
		}
	}
	else
		check=true;
	return check==1;
}

//Q4
double calculatePI(int num)
{
	double PI=0,n=0;
	for(int i=1;i<=num;i+=2)
	{
		
		PI=PI+4*pow(-1.0,n)*(1/i);
		n++;
	}
	return PI;
}

//Q5
int largest_prime_factor(int num)
{
	int factor=num;
	for(int i=num/2;i>1;i--)
	{
		if(num%i==0)
		{
			int j=i/2;
			for(j;j>=1;j--)
			{
				if(i%j==0)
					break;
			}
			if(j==1)
			{
				factor=i;
				break;
			}
		}
	}
	return factor;
}

//Q6
bool  all_larger_than(int arr[], int size,int num)
{
	bool check=true;
	for(int i=0;i<size;i++)
	{
		if(arr[i]<=num)
			check=false;
	}
	return check;
}

//Q7
bool is_parlindrome(string s1)
{
	int num=s1.length();
	bool check=true;
	for(int i=0;i<num/2;i++)
		{
			if(s1[i]!=s1[num-i-1])
				check=false;
		}
	return check;
}

//Q8
int longest_duplicates(int arr[],int size)
{
	int length=1,largest=1;
	for(int i=1;i<size;i++)
	{
		if(arr[i-1]==arr[i])
		{
			length++;
			largest=(largest>length)? largest:length;
		}
		else
			length=1;
	}
	
		return largest;
}

//Q9
void swap_arrays(int arr1[],int arr2[], int size)
{
	for(int i=0;i<size;i++)
	{
		int temp=arr1[i];
		arr1[i]=arr2[i];
		arr2[i]=temp;
	}
}

int main()
{
	/*int arr1[4]={1,3,3,7};
	int arr2[4]={2,2,4,5};
	swap_arrays(arr1,arr2,4,4);
	cout<<arr2<<endl;*/
	int num1;
	cout<<"enter"<<endl;
	cin>>num1; 
	cout<<isFibNum(num1)<<endl;

	//cin>>num2;
	//cout<<LCM(num1,num2);

	//double num;
	//cout<<"enter a number."<<endl;
	//cin>>num;
	//bool i=all_larger_than(arr[],int num,int size)
	//cout<<i<<endl;


	system("pause");
	return 0;
}


	




