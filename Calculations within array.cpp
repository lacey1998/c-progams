#include<iostream>
using namespace std;
//bool myArr(int arr[],int number,int specific);
//bool myArr(int arr[],int number);
//int myArr(int arr[],int number);
int sum_of_numbers(int arr[],int number);
int main()
{
	int arr[4];
	for(int i=0;i<4;i++)
	{
		cout<<"Enter the number "<<i<<" ";
		cin>>arr[i];
	}
	/*bool value=myArr(arr,4);*/
	/*cout<<value<<endl;*/
	int sum=sum_of_numbers(arr,4);
	cout<<sum<<endl;
	system("pause");
	return 0;
}


//1 a determine if an array has any odd number
bool myArr(int arr[],int number)
{
	bool value=false;
	for(int n=0;n<number;n++)
	{
		if(arr[n]%2==0)
			value=true;
	}
	return value;
}




//b whether the array has specific number 3
//bool myArr(int arr[],int number,int specific)
//{
//	bool value=false;
//	for(int n=0;n<number;n++)
//	{
//		if(arr[n]==3)
//			value=true;
//	}
//	return value;
//}




//c count the number of even numbers in an array
//int myArr(int arr[],int number)
//{
//	int number_of_even=0;
//	for(int n=0;n<number;n++)
//	{
//		if(arr[n]%2==0)
//			number_of_even+=1;
//	}
//	return number_of_even;
//}




//d count the number of times that a 3 that appear

//int number_of_3(int arr[],int number,int specific)
//{
//	int number_of_times=0;
//	for(int n=0;n<number;n++)
//	{
//		if(arr[n]==specific)
//			number_of_times+=1;
//	}
//	return number_of_times;
//}
//
//
//
////e 1 find the first appearance of number 3
//int first_3(int arr[],int number,int specific)
//{
//	int location;
//	for(int n=0;n<number;n++)
//	{
//		if(arr[n]==3)
//		{
//			location=n;
//			break;
//		}
//		else
//			location=-1;
//	}
//	return location;
//}
////e2 find the last location of number 3,only need to delete break.



//f find the largest number in an array
//int largest_number(int arr[],int number)
//{
//		int largest=arr[0];
//		for(int n=0;n<number;n++)
//		{
//			if(arr[n]>largest)
//				largest=arr[n];
//		}
//		return largest;
//}
			




//g find the position of the largest number n an array
//int position_of_largest(int arr[],int number)
//{
//	int position;
//	for(int n=1;n<number;n++)
//	{
//		if (arr[n]>arr[n-1])
//			position=n;
//	}
//	return position;
//}








//h calculate the sum of numbers
//int sum_of_numbers(int arr[],int number)
//{
//	int sum=0;
//	for(int n=0;n<number;n++)
//		sum=sum+arr[n];
//	return sum;
//}



//i calculate the averager of the numbers 
int average_of_numbers(int arr[],int number)
{
	int sum=0;
	int sum=0;
	for(int n=0;n<number;n++)
		sum=sum+arr[n];
	return sum/number;
}



