#include<iostream>
using namespace std;
void add_number(int arr[], int number);
void swap_numbers(int arr[],int num1,int num2,int size);
void add_arrays(int arr1[],int arr2[],int size);
void replace(int arr1[],int size,int num1,int num2);
int main()
{
	int arr1[4];
	for(int i=0;i<4;i++)
	{
		cout<<"Enter the number "<<i<<" ";
		cin>>arr1[i];
	}
	int arr2[4]={1,2,3,4};
	/*swap_numbers(arr,1,2,4);*/
	replace(arr1,4,1,2);
	system ("pause");
	return 0;
}



//a add numbers
//void add_number(int arr[],int number)
//{
//	for(int n=0;n<number;n++)
//	{
//		arr[n]=arr[n]+1;
//		cout<<arr[n]<<"  ";
//	}
//}



//b swap th enumbers
//void swap_numbers(int arr[],int num1,int num2,int size)
//{
//	int a=arr[num1];
//	int b=arr[num2];
//	arr[num1]=b;
//	arr[num2]=a;
//	for(int n=0;n<size;n++)
//		cout<<arr[n]<<" ";
//}



//c add the numbers intwo arrays
//void add_arrays(int arr1[],int arr2[],int size)
//{
//	for (int n=0;n<size;n++) 
//	{
//		arr1[n]=arr1[n]+arr2[n];
//		cout<<arr1[n];
//	}
//}



//d replace one number in anarray
//void replace(int arr1[],int size,int num1,int num2)
//{
//	for (int n=0;n<size;n++) 
//	{
//		if(arr1[n]==num1)
//			arr1[n]=num2;
//		cout<<arr1[n];
//	}
//}



//e move all the negative 
void move(int arr1[],int size)
{
	int position=0;
	for (int n=0;n<size;n++)
	{
		if(arr1[n]<0)
		{
			int negative_num=arr1[n];
			for(int num=n-1;num>=0;num--)
				arr1[num+1]=arr1[num];
			arr1[position]=negative_num;
			position++;
		}
	}
}


