#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

#define LENGTH 15  

int main()
{
	int dp[LENGTH][LENGTH], triangle[LENGTH][LENGTH];
	// init
	for (int i = 0; i < LENGTH; ++i)
		for (int j = 0; j < LENGTH; ++j)
			dp[0][0] = 0;
	
	// input data
	ifstream fin("input.txt");
	if (!fin)
		return 1;
	for (int i = 0; i < LENGTH; ++i)
		for (int j = 0; j <= i; ++j)
			fin >> triangle[i][j];

	//dp
	dp[0][0] = triangle[0][0];
	for (int i = 1; i < LENGTH; ++i)
		for (int j = 0; j <= i; ++j)
		{
		if (j == 0)
			dp[i][j] = dp[i - 1][j] + triangle[i][j];
		else
			dp[i][j] = triangle[i][j] + max(dp[i - 1][j], dp[i - 1][j - 1]);
		}
	int maxValue = 0;
	for (int i = 0; i != LENGTH; ++i)
		maxValue = max(dp[LENGTH - 1][i], maxValue);
	cout << maxValue << "\n";
	return 0;
}