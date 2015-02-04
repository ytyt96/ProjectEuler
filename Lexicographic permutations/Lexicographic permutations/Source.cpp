#include <iostream>
#include <vector>

using namespace std;

void work(int& cnt, vector<bool>& status, unsigned pos, vector<int>& number)
{
	if (cnt == -1)
		return;
	if (pos >= status.size())
	{
		++cnt;
		if (cnt == 1000000)
		{
			for (const auto& it : number)
				cout << it;
			cout << "\n";
			cnt = -1;
			return;
		}
		return;
	}
	
	for (size_t i = 0; i != status.size(); ++i)
	{
		if (!status[i])
		{
			status[i] = true;
			number.push_back(i);
			work(cnt, status, pos + 1, number);
			number.pop_back();
			status[i] = false;
		}
	}
	return;
}

int main()
{
	int N;
	cin >> N;
	vector<bool> status(N, false);
	vector<int> number;
	int cnt = 0;
	work(cnt, status, 0, number);
	return 0;
}