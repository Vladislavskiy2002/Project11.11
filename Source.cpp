#include "../std_lib_facilities.h"
#include <locale>
#include "windows.h"

vector<string> split(const string& s);


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string str = "";
	string s = "";
	string w = "(probel)";
	while (getline(cin, s) && s != "q")
	{
		stringstream ss{ s };
		for (string temp_s; ss >> temp_s;)
		{
			if (temp_s == w)
			{
				temp_s = "\n";
				str += temp_s;
			}
			else
				str += temp_s + " ";
		}
		str += '\n';
	}
	vector<string> vec_str;


	vec_str = split(str);
	for (int i = 0; i < vec_str.size(); i++)
	{
		cout << vec_str[i] << endl;
	}

	cin.get();
	cin.get();
	return 0;
}

vector<string> split(const string& s)
{
	vector <string> temp_vec_str;
	stringstream ss{ s };
	string st;
	for (string temp_s; getline(ss, temp_s);)
	{
		st += temp_s;
		temp_vec_str.push_back(st);
		st = "";

	}
	return temp_vec_str;
}
