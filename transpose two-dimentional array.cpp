#include <iostream>
using namespace std;
//keqianlianxi
//int* func(int size)
//{
//	int *pt=new int[size];
//	for(int i=0;i<size;i++)
//	{
//		if((i+1)%2==0)
//			pt[i]=i+1;
//		else
//			pt[i]=-(i+1);
//	}
//	return pt;
//}
//in main function;
/*int size;
	cout<<"enter an int"<<endl;
	cin>>size;
	int *arr=func(size);
	for(int i=0;i<size;i++)
		cout<<arr[i]<<",";*/
int ** transpose(int row,int column,int**my_Matrix);

//week 10 ex 1
int main()
{
	int row,column;
	cout<<"Enter the row and columns of the array:\n";
	cin>>row>>column;
	//step 1
	int **my_Matrix = new int *[row];
	for (int i=0;i<row;i++)
		my_Matrix[i]=new int [column];

	//step 2
	cout<<"\nEnter "<<row<<"rows of "<< column<<"integers each:\n";
	for(int i=0;i<row;i++)
		for(int j=0;j<column;j++)
			cin>>my_Matrix[i][j];
	
	//step3
	cout<<"\nEchoing the 2 dimensional array:\n";
	for (int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
			cout<<my_Matrix[i][j]<<" ";
		cout<<endl;
	}

	int** p =transpose(row,column,my_Matrix);

	for (int i=0;i<column;i++)
	{
		for(int j=0;j<row;j++)
			cout<<p[i][j]<<" ";
		cout<<endl;
	}
	//step 4
	for(int i=0;i<row;i++)
		delete[]my_Matrix[i];
	delete[]my_Matrix;
	
	
	system("pause");
	return 0;
}


int ** transpose(int row,int column,int**my_Matrix)
{
	int **trans=new int*[column];
	for (int i=0;i<column;i++)
		trans[i]=new int [row];

	for(int i=0;i<column;i++)
	{
		for(int j=0;j<row;j++)
			trans[i][j]=my_Matrix[j][i];
	}
	return trans;
}

		



//ex3


