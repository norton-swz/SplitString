#include "split.h"
int main()
{
	string str = "sunsunsun";
	string pattern = " ";
	vector<string> result = splitstr(str, pattern);
	cout << result[0] << endl;
	/*cout << "Please input str:" << endl;
	getline(cin, str);

	string pattern;
	cout << "Please input pattern:" << endl;
	getline(cin, pattern);
	vector<string> result = splitstr(str, pattern);
	cout << "The result:" << endl;

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << endl;
	}*/

	return 0;
}