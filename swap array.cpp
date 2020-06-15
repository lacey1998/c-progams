#include <iostream>
#include<string>
using namespace std;
void swap_arrays(int arr1[],int arr2[],int size1,int size2)
{
	for(int i=0;i<size1;i++)
	{
		int a=arr1[i];
		arr1[i]=arr2[i];
		arr2[i]=a;
	}
}
int main()
{
	int arr1[4]={1,3,3,7};
	int arr2[4]={2,2,4,5};
	swap_arrays(arr1,arr2,4,4);
	for(int i=0;i<4;i++)
	{
		cout<<arr2[i]<<" ";
	}
	system("pause");
	return 0;
}