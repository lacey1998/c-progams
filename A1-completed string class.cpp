// Yuxin Liang  LIAYD1701 
#include<iostream>
using namespace std;
//Q1
class String
{
private:
	char* str; // null character terminated character array allocated dynamically 
	int len;  // the actual length of 'this' string,			  // e.g. if s1 is "hello", then the member variable 'len' of s1 is 5.
public:
	String();
	String(const char* s);                       
	String(const String& s);
	~String();
	String operator =(const String& s);       
	char& String::operator[] (int index) const;
	bool empty()const;
	int length() const;
	friend ostream& operator <<(ostream& outs, const String& s);
	friend bool operator ==(const String& s1, const String& s2);
	friend bool operator ==(const String& s1, const char* s2);
	friend String operator +(const String& s1, const String& s2);
	String upper();
	int position(char ch);
	friend String operator += (String s, char ch);
	friend String operator += (String& s1, const String& s2);
	String substr(int start, int size);
	int substring(const String& s);
	int substring(const char* s);
	friend int compareStrings(const String s1, const String s2);
	friend String reversedString(const String& s);
};

String::String()
{
	len=0;
	str=new char[1];
	str=0;
}

String::String(const char* s)
{
	len=0;
	for(int i=0;s[i]!=0;i++)
		len++;
	str=new char[len+1];
	for(int i=0;i<len;i++)
		str[i]=s[i];
	str[len] = '\0';
}

String::String(const String& s)
{
	len=s.len;
	str=new char[len+1];
	for(int i=0;i<len;i++)
		str[i]=s.str[i];
	str[len]=0;
}

String::~String() 
{ 
	delete [] str; 
}

String String::operator= (const String& s)
{
	if(str!=s.str)
	{
		delete[]str;
		len=s.len;
		str=new char[s.len+1];
		for(int i=0;i<len;i++)
			str[i]=s.str[i];
		str[len]=0;
	}
	return String(str);                 
}

bool String::empty() const
{
	if(len==0)
		return true;
	else
		return false;
}

char& String::operator[] (int index) const
{
	if (index < 0 || index >= len)
		throw "index out of bounds";

	return str[index];
}

ostream& operator <<(ostream& outs,const String& s)       
{
	if(s.len!=0)
		outs << s.str;
	else
		outs<<"";

	return outs;
}

bool operator ==(const String& s1, const String& s2)
{
	if(s1.str!=s2.str)
	{
		bool isEqual=true;
		if(s1.len==s2.len)
		{
			for(int i=0;i<s1.len;i++)
			{
				if(s1.str[i]!=s2.str[i])
					isEqual=false;
			}
			return isEqual;
		}
		else
			return false;
	}
	else
		return true;
}

int String::length() const 
{
	return len;
}

bool operator ==(const String& s1, const char* s2)
{
	int chLength=0;
	bool isEqual=true;
	for(int i=0;s2[i]!=0;i++)
		chLength++;
	if(s1.len==chLength)
	{
		for(int i=0;i<s1.len;i++)
		{
			if(s1.str[i]!=s2[i])
				isEqual=false;
		}
		return isEqual;
	}
	else
		return false;
}

String operator + (const String& s1, const String& s2)
{
	int totalLen=s1.len+s2.len;
	String s;
	s.len=totalLen;
	s.str=new char[totalLen+1];
	for(int i=0;i<s1.len;i++)
		s.str[i]=s1.str[i];
	for(int i=0;i<totalLen;i++)
		s.str[i+s1.len]=s2.str[i];
	s.str[totalLen]=0;
	return s;

}

String String::upper()
{
	String s=new char[len+1];
	for(int i=0;i<len;i++)
		s.str[i]=str[i];
	s.str[len]=0;
	for(int i=0;i<len;i++)
	{
		if((s[i]>='a')&&(s[i]<='z'))
			s[i]=s[i]-'a'+'A';
	}
	return s;
}

int String::position(char ch)
{
	for(int i=0;i<len;i++)
	{
		if(str[i]==ch)
			return i;
	}
	return -1;
}

String operator += (String s, const char ch)
{
	String temp=new char[s.len+2];
	temp.len=s.len+1;
	for(int i=0;i<s.len;i++)
		temp.str[i]=s.str[i];
	temp.str[s.len]=ch;
	temp.str[temp.len]=0;
	return s=String(temp.str);
}

String operator += (String& s1, const String& s2)
{
	return s1=s1+s2;
}

String String::substr(int start, int size)
{
	if(start<len)
	{
		if(start+size<=len)
		{
			String s1=new char[size+1];
			s1.len=size;
			for(int i=0;i<size;i++)
				s1.str[i]=str[i+start];
			s1.str[s1.len]=0;
			return s1;
		}
		else
		{
			String s2=new char[len-start+1];
			for(int i=0;i<len-start;i++)
				s2.str[i]=str[i+start];
			s2.str[len-start]=0;
			return s2;
		}

	}
	else
	{
		String empty;
		return empty;
	}
}

int String::substring(const String& s)
{
	int index=-1;
	if(s.len>len)
		return index;
	else
	{
		bool isFound=false;
		if(s.len==0)
			return index=0;
		else
		{
			for(int i=0;i<len&&!isFound;i++)
			{
				if(s.str[0]==str[i])
				{
					isFound=true;
					index=i;
					for(int j=0;j<s.len;j++)
					{
						if(s.str[j]!=str[i+j]||(i+j)>len)
						{
							isFound=false;
							index=-1;
							break;
						}
					}
				}
			}
			return index;
		}
	}
}

int String::substring(const char* s)
{
	String s1(s);
	int index=-1;
	if(s1.len>len)
		return index;
	else
	{
		bool isFound=false;
		if(s1.len==0)
			return index=0;
		else
		{
			for(int i=0;i<len&&!isFound;i++)
			{
				if(s1.str[0]==str[i])
				{
					isFound=true;
					index=i;
					for(int j=0;j<s1.len;j++)
					{
						if(s1.str[j]!=str[i+j]||(i+j)>len)
						{
							isFound=false;
							index=-1;
							break;
						}
					}
				}
			}
		}
		return index;
	}
}

int compareStrings(const String s1, const String s2)
{
	if(s1.len>s2.len)
	{
		for(int i=0;i<s2.len;i++)
		{
			if(s1.str[i]>s2.str[i])
				return 1;
			if(s1.str[i]<s2.str[i])
				return -1;
		}
		return 1;
	}
	else if(s1.len<s2.len)
	{
		for(int i=0;i<s1.len;i++)
		{
			if(s1.str[i]>s2.str[i])
				return 1;
			if(s1.str[i]<s2.str[i])
				return -1;
		}
		return -1;
	}
	else
	{
		for(int i=0;i<s1.len;i++)
		{
			if(s1.str[i]>s2.str[i])
				return 1;
			if(s1.str[i]<s2.str[i])
				return -1;
		}
		return 0;
	}
}

String reversedString(const String& s)
{
	String s1=new char[s.len+1];
	s1.len=s.len;
	for(int i=0;i<s.len;i++)
		s1.str[i]=s.str[s.len-1-i];
	s1.str[s1.len]=0;
	return s1;
}

//Q2
class TwoD
{
private:
	double** matrix;
	int maxRows;
	int maxCols;
public:
	TwoD();
	TwoD(int row, int column);
	TwoD(const TwoD& matri);
	~TwoD();
	void set(int row, int column, double num);
	double getMatrix(int row, int column)const;     
	int numOfRows()const;
	int numOfColumns()const;
	double& TwoD::operator()(int row, int column)const;
	TwoD operator = (const TwoD& m);
	friend TwoD operator + (TwoD m1, TwoD m2);
};

TwoD::TwoD()
{
	maxRows=1;
	maxCols=1;
	matrix=new double*[1];
	matrix[0]=new double[1];
}

TwoD::TwoD(int row, int column)
{
	maxRows=row;
	maxCols=column;
	matrix=new double*[row];
	for(int i=0;i<row;i++)
		matrix[i]=new double[column];
}

TwoD::TwoD(const TwoD& matri)
{
	maxCols=matri.maxCols;
	maxRows=matri.maxRows;
	matrix=new double*[maxRows];
	for(int i=0;i<maxRows;i++)
		matrix[i]=new double[maxCols];
	for(int i=0;i<maxRows;i++)
		for(int j=0;j<maxCols;j++)
			matrix[i][j]=matri.matrix[i][j];
}

TwoD::~TwoD()
{
	for(int i=0;i<maxRows;i++)
		delete[] matrix[i];
	delete matrix;
}

void TwoD::set(int row, int column, double num)
{
	matrix[row][column]=num;
}

double TwoD::getMatrix(int row, int column)const
{
	return matrix[row][column];
}

double& TwoD::operator()(int row, int column)const
{
	if (row < 0 || row >= maxRows|| column<0||column>maxCols)
		throw "index out of bounds";

	return matrix[row][column];
}

int TwoD::numOfRows()const
{
	return maxRows;
}

int TwoD::numOfColumns()const
{
	return maxCols;
}

TwoD TwoD::operator=(const TwoD& m)
{
	for(int i=0;i<maxRows;i++)
		delete[]matrix[i];
	delete matrix;
	maxRows=m.maxRows;
	maxCols=m.maxCols;
	matrix=new double*[maxRows];
	for(int i=0;i<maxRows;i++)
		matrix[i]=new double[maxCols];
	for(int i=0;i<maxRows;i++)
		for(int j=0;j<maxCols;j++)
			matrix[i][j]=m.matrix[i][j];
	return *this;
}

TwoD operator + (TwoD m1, TwoD m2)
{
	if(m1.maxCols==m2.maxCols&&m1.maxRows==m1.maxRows)
	{
		TwoD m3(m1.maxRows,m1.maxCols);
		for(int i=0;i<m3.maxRows;i++)
			for(int j=0;j<m3.maxCols;j++)
				m3.matrix[i][j]=m1.matrix[i][j]+m2.matrix[i][j];
		return m3;
	}
	else
		throw "index out of bounds";
}