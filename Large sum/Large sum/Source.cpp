#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	ifstream fin("input.txt");
	if (!fin)
		return 1;
	vector<int> sum(60, 0), num(60, 0);
	for (int i = 0; i != 100; ++i)
	{
		string line;
		fin >> line;
		for (int i = 0; i != line.size(); ++i)
			num[60 - 11 - i] = line[i] - '0';
		for (int i = 0; i != 59; ++i)
		{
			sum[i] += num[i];
			sum[i + 1] += sum[i] / 10;
			sum[i] %= 10;
		}
	}
	int i = 59;
	while (sum[i] == 0)
		--i;
	for (int j = 0; j != 10; ++j)
		cout << sum[i--];
	return 0;
}