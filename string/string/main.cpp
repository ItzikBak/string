#include "MyString.h"
#include <stdio.h>

int main(int argc, char* argv)
{
	MyString first;
	MyString second("How are you?", 4);
	MyString third("is life", 8);

	printf("The len of the first MyString object is: %d\n", first.GetLength());
	printf("The len of the second MyString object is: %d\n", second.GetLength());

	
	printf("The 3rd char at the second: %c\n", second.CharAt(2));
	
	second.Append(third);
	printf("The 6rd char at the second: %c\n", second.CharAt(6));

}