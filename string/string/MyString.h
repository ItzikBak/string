#pragma once

class MyString
{
public:
	MyString();
	~MyString();

	MyString(const MyString&);
	MyString(const char*, size_t);

	size_t GetLength() const;

	void Assign(const MyString& otherString);
	void Assign(const char* otherString, size_t otherLen);

	char CharAt(int index) const;

	void Append(MyString& otherString);
	void Append(char* otherString, size_t otherLen);

	int Compare(MyString& otherString) const;
	int Compare(char* otherString, size_t otherLen) const;
	
	bool IsEmpty() const;
	
	void Clear();

private:
	char * mystrptr;
	size_t len;
};

