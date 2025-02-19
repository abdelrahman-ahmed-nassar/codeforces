// Count Words
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool is_alpha(char c)
{
	return (('z' >= c && c >= 'a') || ('Z' >= c && c >= 'A'));
}

bool is_special(char c)
{
	return (c == '!' || c == '.' || c == ',' || c == 32 || c == '?');
}

int main()
{
	string s;
	getline(cin, s);

	int c = 0;
	bool faced = false;

	for (int i = 0; i < s.size(); i++)
	{
		if (is_alpha(s[i]))
		{
			faced = true;
			break;
		}
	}

	for (int i = 0; i < s.size(); i++)
	{
		if (is_special(s[i]) && is_alpha(s[i + 1]))
		{
			c++;
		}
	}

	if (!faced)
	{
		cout << 0;
		return 0;
	}

	if (is_special(s[0]))
	{
		cout << c;
		return 0;
	}

	cout << c + 1;

	return 0;
}