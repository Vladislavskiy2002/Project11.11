#include "../std_lib_facilities.h"
#include <locale>
#include "windows.h"

vector<string> split(const string& s, const string& w);

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
			str += temp_s + " ";
		}
		str += '\n';
	}
	vector<string> vec_str;
	vec_str = split(str, w);
	for (int i = 0; i < vec_str.size(); i++)
	{
		cout << vec_str[i] << endl;
	}

	cin.get();
	cin.get();
	return 0;
}

vector<string> split(const string& s, const string& w)
{
	vector <string> temp_vec_str;
	string str;
	stringstream ss{ s };
	for (string temp_str_get; getline(ss,temp_str_get);)
	{
		stringstream sw{ temp_str_get };
		for (string temp_s; sw >> temp_s;)
		{
			if (temp_s == w || temp_s == "\n")
			{
				str += "\n";
				continue;
			}
			else
			{
				str += temp_s + " ";
			}
		}
		temp_vec_str.push_back(str);
		str = "";
	}
	return temp_vec_str;
}