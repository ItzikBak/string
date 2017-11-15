#pragma once

class MyString
{
public:
	MyString();
	~MyString();

	MyString(char* , size_t);

	size_t GetLength();

	void Assign(MyString& otherString);

	char CharAt(int index);

	void Append(MyString& otherString);

	int Compare(MyString& otherString);
	
	bool IsEmpty();
	
	void Clear();

private:
	char * mystrptr;
	size_t len;
};

