/*
Anthony (Tony) Benincasa 4/27/2024 CIS1202.N01
Week 15 Exceptions
This program 
*/

#include "perslib.h"

// function prototypes
char character(char, int);

int main() {

	try
	{
		cout << character('a', -1) << endl;
	}
	catch (string exceptionString)
	{
		cout << exceptionString << endl;
	}


}
char character(char start, int offset) {
	
	if (start > 90 && start < 97)
	{
		string exceptionICEString = "ICE-ERROR: Invalid Character Exception";
		throw exceptionICEString;
	} else if (start < 65 || start > 122)
		{
			string exceptionICEString = "ICE-ERROR: Invalid Character Exception";
			throw exceptionICEString;
		}

	if ((start+offset) > 90 && (start+offset) < 97)
	{
		string exceptionIREString = "IRE-ERROR: Invalid Range Exception";
		throw exceptionIREString;
	} else if ((start+offset) < 65 || (start+offset) > 122)
		{
			string exceptionIREString = "IRE-ERROR: Invalid Range Exception";
			throw exceptionIREString;
		}
	
	return start + offset;

}