#ifndef _PALINDROME_H_
#define _PALINDROME_H_

#include <string>
using namespace std;

// Prototypes
bool isPalindrome(string);
string reverseString(string);

bool isPalindrome(string in_string)
{
	string fwd_str = in_string;
	string rev_str = reverseString(in_string);
	int str_len = in_string.length();

	for (int i = 0; i < str_len; i++)
	{
		if (fwd_str[i] == rev_str[i]) 
		{
			if (i == str_len - 1)
			{
				return true;
			}
		}
		else
		{
			return false;
		}
	}
}

string reverseString(string in_string)
{
	string str_reversed = "";

	for (int i = in_string.length() - 1; i >= 0; i--)
	{
		str_reversed += in_string[i];
	}
	return str_reversed;
}
#endif // End palindrome.h
