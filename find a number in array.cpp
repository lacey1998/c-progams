#include<iostream>
#include<string>
using namespace std;

//[5 Marks] Write a function named isFound that takes three arguments, namely an array of integers, its size and an integer value m;
//and then returns true if m is found in the array and returns false otherwise.

bool isFound(int arr[],int size,int m)
{
	int value=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]==m)
			value=value-1;
		else
			value=value+1;
	}
	return value!=size;
}
int main()
{
	int arr[4];
	for(int i=0;i<4;i++)
	{
		cout<<"enter arr"<< i<<endl;
		cin>>arr[i];
	}
	cout<<isFound(arr,4,3);
	system("pause");
	return 0;
}

		
