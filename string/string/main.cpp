#include "MyString.h"
#include <stdio.h>

int main(int argc, char* argv)
{
	char * chstr = "What about that?";
	MyString myString;
	MyString myStringFromChrPtr(chstr, 10);

	myString.Assign(chstr, 15);

	printf("The length of myString: %d\n", myString.GetLength());
	printf("The length of myStringFromChrPtr: %d\n", myStringFromChrPtr.GetLength());

}