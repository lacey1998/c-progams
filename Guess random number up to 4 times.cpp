#include <iostream>
#include<ctime>
using namespace std;
int main()
{
	int g1,g2,g3,g4;
	srand( (unsigned)time(NULL) );
	int guess=rand()%10+1;
	cout<<"Guess up to 4 times"<<endl;
	cout<<"Enter guess 1 : ";
	cin>>g1;
	if(g1==guess)
	{
	cout<<"Got it."<<endl<<"The random number is "<<guess<<endl;
	}
	else 
	{	
		cout<<"Enter guess 2 : ";
		cin>>g2;
		if(g2==guess)
		{
		cout<<"Got it."<<endl<<"The random number is "<<guess<<endl;
		}
		else
			{
				cout<<"Enter guess 3 : ";
				cin>>g3;
				if(g3==guess)
				{
					cout<<"Got it."<<endl<<"The random number is "<<guess<<endl;
				}
				else
				{
				cout<<"Enter guess 4 : ";
				cin>>g4;
				if(g4==guess)
				{
					cout<<"Got it."<<endl<<"The random number is "<<guess<<endl;
				}
				else
					cout<<"No luck."<<endl<<"The random number is  "<<guess<<endl;
				}
			}
	}
	system("pause");
	return 0;

}



//#include<iostream>
//using namespace std;
//int main()
//
//{
//	int n1,n2,n3,n4,max1,max2,max3;
//	cout<<"Enter number 1 : ";
//	cin>>n1;
//	cout<<"The largest so far is "<<n1<<endl;
//	cout<<"Enter number 2 : ";
//	cin>>n2;
//	max1=(n1>n2)? n1:n2;
//	cout<<"The largest number so far is "<<max1<<endl;
//	cout<<"Enter number 3 : ";
//	cin>>n3;
//	max2=(n3>max1)?n3:max1;
//	cout<<"The largest number so far is "<<max2<<endl;
//	cout<<"Enter number 4 : ";
//	cin>>n4;
//	max3=(n4>max2)?n4:max2;
//	cout<<"The largest number so far is "<<max3<<endl;
//
//	system("pause");
//
//	return 0;
//
//}
//	
//
//			
//	