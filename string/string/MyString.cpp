#include "MyString.h"

int min(int a, int b)
{
	return (a < b) ? a : b;
}

MyString::MyString()
{
	mystrptr = nullptr;
	len = 0;
}

MyString::~MyString()
{
	Clear();
}

MyString::MyString(char* str, size_t otherLen)
{
	len = otherLen;
	mystrptr = new char[ len ];

	//tried to do that without any refernece to string.h
	for(size_t i = 0; i < len; i++)
		*(mystrptr + i) = *(str + i);

}

size_t MyString::GetLength()
{
	return len;
}

void MyString::Assign(MyString& otherString)
{
	if(mystrptr)
	{
		if(otherString.len != len)
		{
			delete[] mystrptr;
			mystrptr = new char[ otherString.len ];
			len = otherString.len;
		}
	}
	else
	{
		mystrptr = new char[ otherString.len ];
		len = otherString.len;
	}

	//tried to do that without any refernece to string.h
	for(size_t i = 0; i < len; i++)
		*(mystrptr + i) = *(otherString.mystrptr + i);
}

char MyString::CharAt(int index)
{
	if(index >= len)
		return '\0';
	return *(mystrptr + index);
}

void MyString::Append(MyString & otherString)
{
	char* newstr = new char[ len + otherString.len ];

	for(size_t i = 0; i < len; i++)
		*(newstr + i) = *(mystrptr + i);

	for(size_t i = len; i < len + otherString.len; i++)
		*(newstr + i) = *(otherString.mystrptr + i);

	delete[] mystrptr;
	mystrptr = newstr;
	len += otherString.len;
}

int MyString::Compare(MyString & otherString)
{
	size_t counter = 0;
	size_t minLen = min(len, otherString.len);

	while(CharAt(counter) == otherString.CharAt(counter)
		&& counter <= minLen)
		counter++;
	if(CharAt(counter) > otherString.CharAt(counter))
		return 1;
	else if(CharAt(counter) < otherString.CharAt(counter))
		return -1;
	return 0;
}

bool MyString::IsEmpty()
{
	return len > 0;
}

void MyString::Clear()
{
	if(mystrptr)
		delete[] mystrptr;
	len = 0;
}
