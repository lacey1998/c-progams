// Starting file for Assignment 2
#include<iostream>
using namespace std;
// Define all the required functions for Question 1 below (and your supporting function(s) if needed). 
// Place them before the complement function. You don't need to declare your functions.
int const BIT=10;
char* binary(int N)
{
	char *arr=new char[BIT+1];
	int i=BIT-1;
	while(N>0)
	{
		arr[i]=N%2+'0';
		N=N/2;
		i--;
	}
	for( ;i>=0;i--)
		arr[i]='0';
	arr[BIT]=NULL;
	return arr;
}

void flip(char* arr)
{
	for(int i=0;arr[i]!=NULL;i++)
	{
		if(arr[i]=='0')
			arr[i]='1';
		else
			arr[i]='0';
	}
}

void addOne(char*arr)
{
	if(arr[BIT-1]==0)
		arr[BIT-1]=1;
	else
	{
		int i=BIT-1;
		for(;arr[i]!='0';i--)
		{
			arr[i]=arr[i]+1;
			if(arr[i]=='2')
				arr[i]='0';
		}
		arr[i]='1';
	}
}

// Do not change anything in this complement function!
char* complement(int N)
{
	char* bit_str = binary (N);
	flip (bit_str);
	addOne (bit_str);
	return bit_str;
}

// Define your function(s) for Question 2 below:
void print_tower(int row,char letter)
{
	char **tower=new char*[row];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<=i;j++)
		{
			tower[i]=new char [j+1];
			tower[i][j]=letter;
			cout<<tower[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	// Testing code for Question 1: (Do not change anything in the following 7 lines of code
	cout << "Enter an integer in range [0-511]: ";
	int num;
	cin >> num;
	char* result = complement (num);
	cout << "The 2's complement representation of negative " << num << " is ";
	print (result);
	cout << endl << endl;
	// Write the code for your main program for Question 2 below:
	char value;
	cout<<"To which letter you want to print to?";
	cin>>value;
	while( !(value>'a'&&value<'z') )
	{
		cout<<"Your need to enter a lower-case English letter !"<<endl;
		cout<<"To which letter you want to print to?";
		cin>>value;
	}
	int num1=value-'a';
	for(int i=0;i<=num1;i++)
	{
		char letter='a'+i;
		int row=i*2+3;
		print_tower(row,letter);
	}
	system("pause");
	return 0;
}