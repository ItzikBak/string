#pragma once

class MyString
{
public:
	MyString();
	~MyString();

	MyString(MyString&);
	MyString(char*, size_t);

	size_t GetLength();

	void Assign(MyString& otherString);
	void Assign(char* otherString, size_t otherLen);

	char CharAt(int index);

	void Append(MyString& otherString);
	void Append(char* otherString, size_t otherLen);

	int Compare(MyString& otherString);
	int Compare(char* otherString, size_t otherLen);
	
	bool IsEmpty();
	
	void Clear();

private:
	char * mystrptr;
	size_t len;
};

