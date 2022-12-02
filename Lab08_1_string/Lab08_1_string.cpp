// Lab08_1_string.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int Count(const string s, const string cs)
{
	int k = 0;
	size_t pos = 0;
	while ((pos = s.find_first_of(cs, pos)) != -1)
	{
		pos++;
		k++;
	}
	return k;
}
string Change(string& s, int& k)
{
	size_t pos = 0;
	while ((pos = s.find('+', pos)) != -1)
	{
		s.replace(pos, 1, "**");
		pos++;
	}
	size_t pos_2 = 0;
	while ((pos_2 = s.find('-', pos_2)) != -1)
	{
		s.replace(pos_2, 1, "**");
		pos_2++;
	}
	size_t pos_3 = 0;
	while ((pos_3 = s.find('=', pos_3)) != -1)
	{
		s.replace(pos_3, 1, "**");
		pos_3++;
	}
	return s;
}
int main()
{
	string str;
	string cs = "'+','-','='";
	int k = 0;

	cout << "Enter string:" << endl;

	getline(cin, str);

	cout << "String contained " << Count(str,cs) << " symbols of '+ - ='" << endl;

	string dest = Change(str, k);

	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;

	return 0;
}