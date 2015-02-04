#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	ifstream fin("names.txt");
	vector<string> names;
	char ch;
	string newName;
	bool isName = false;
	while (fin >> ch)
	{
		if (ch == '"')
		{
			isName = !isName;
			if (!isName)
			{
				names.push_back(newName);
				newName.clear();
			}
		}
			
		if (isName && ch!='"')
			newName += ch;
	}
	sort(names.begin(), names.end());

	int score = 0;
	for (size_t i = 0; i != names.size(); ++i)
	{
		int nameScore = 0;
		for (size_t j = 0; j != names[i].size(); ++j)
			nameScore += names[i][j] - 'A' + 1;
		score += nameScore*(i + 1);
	}
	cout << score << "\n";
	return 0;
}