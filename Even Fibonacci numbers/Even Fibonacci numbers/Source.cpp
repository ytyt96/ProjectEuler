using namespace std;
#include <iostream>
#include <vector>

int main()
{
	vector<int> seq;
	long long sum = 2;
	seq.push_back(1);
	seq.push_back(2);
	while (seq[seq.size() - 1] + seq[seq.size() - 2] <= 4000000)
	{
		seq.push_back(seq[seq.size() - 1] + seq[seq.size() - 2]);
		if (seq.back() % 2 == 0)
			sum += seq.back();
	}
	cout << sum << "\n";
	return 0;
}