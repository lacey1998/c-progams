#include <iostream>
using namespace std;
//int* sorted (int* arr1,int* arr2,int size1,int size2)
//{
//	int* sort=new int[size1+size2];
//	int i1=0,i2=0,j=0;
//	while(i1<size1&&i2<size2)
//	{
//		sort[j]=(arr1[i1]<arr2[i2])? arr1[i1++]:arr2[i2++];
//		j++;
//	}
//
//	if(i2==size2)
//	{
//		for(int i=j;i<size1+size2;i++)
//		{
//			sort[i]=arr1[i1];
//			i1++;
//		}
//	}
//
//	else
//	{
//		for(int i=j;i<size1+size2;i++)
//		{
//			sort[i]=arr2[i2];
//			i2++;
//		}
//	}
//	return sort;
//}
int* sort1(int *arr1, int*arr2,int size1,int size2);
int main()
{
	int size1,size2;
	cout<<"Enter size1 size2"<<endl;
	cin>>size1>>size2;
	int* arr1=new int[size1];
	int* arr2=new int[size2];

	cout<<"Enter arr1"<<endl;
	for(int i=0;i<size1;i++)
		cin>>arr1[i];
	cout<<"Enter arr2"<<endl;
	for(int i=0;i<size2;i++)
		cin>>arr2[i];

	/*int * pt=sorted(arr1,arr2,size1,size2);*/
	int* pt= sort1(arr1, arr2,size1,size2);

	for(int i=0;i<size1+size2;i++)
		cout<<pt[i]<<" ";
	system ("pause");
	return 0;
}



int* sort1(int *arr1, int*arr2,int size1,int size2)
{
	int* sorted_array=new int [size1+size2];
	for(int i=0;i<size1;i++)
		sorted_array[i]=arr1[i];
	for(int i=size1,j=0;i<size1+size2; i++)
	{
		sorted_array[i]=arr2[j];
		j++;
	}

//this is insertion sort, and this works by comparing the ith element with the rest of
//element and finds the place where ith element is gonna be sorted in array[0....j]
	for(int i = 1;i < n;i++){
		int temp = sorted_array[i];
		int j = i - 1;

		while(temp < sorted_array[j]){
			sorted_array[j+1] = sorted_array[j];
			// if the temp element is smaller we need to create space to insert this
			// smaller element to the front
			j--;
			if(j == -1){
				break;
			}
		}
		sorted_array[j+1] = temp;
		//insertion step, use j+1 because we have this step of j--
	}
}


