#include<iostream>
using namespace std;

int ask_user_to_fill_array(int* arr,int max_size)
{
	for(int i=0;i<max_size;i++)
	{
		cin>>arr[i];
		if(arr[i]==0)
			return i;
	}
}
void printArray(int* arr,int used_size)
{
	for(int i=0;i<used_size;i++)
		cout<<"["<<arr[i]<<"]";
}

int largestDifference(int* arr,int used_size)
{
	int largest=arr[0],smallest=arr[0];
	for(int i=1;i<used_size;i++)
	{
		largest=(arr[i]>largest)?arr[i]:largest;
		smallest=(arr[i]>smallest)?smallest:arr[i];
	}
	return largest-smallest;
}

bool has_duplicates(int* arr,int used_size)
{
	bool check=false;
	for(int i=0;i<used_size-1;i++)
	{
		int temp=i+1;
		while(temp<used_size)
		{
			if(arr[i]==arr[temp])
				check= true;
			temp++;
		}
	}
	return check;
}

int main()
{
	cout<<"Step 1:\n";
	int max_size;
	cout<<"what is the max size of the array?";
	cin>>max_size;

	int *arr=new int[max_size];
	int used_size=ask_user_to_fill_array(arr,max_size);

	cout<<"\nstep 2:\n";
	printArray(arr,used_size);

	cout<<"\nstep 3:\n";
	if(has_duplicates(arr,used_size))
		cout<<"there are duplicates in the array.\n";
	else
		cout<<"No duplicates in the array.\n";

	cout<<"\nstep 4:\n";
	int max= largestDifference(arr,used_size);
	cout<<"The largest difference between any two array elements is"<<max<<endl;

	system ("pause");

	return 0;
}