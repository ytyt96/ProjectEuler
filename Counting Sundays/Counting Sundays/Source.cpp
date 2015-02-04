#include <iostream>

using namespace std;

int months[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main()
{
	int year = 1900, month = 1, date = 1, cnt = 0, day = 1;
	while (year <= 2000)
	{
		if (year != 1900)
			if (day == 7 && date == 1)
				++cnt;
		++day;
		if (day == 8)
			day = 1;
		++date;
		if (date > months[month])
		{
			date = 1;
			++month;
		}
		if (month > 12)
		{
			month = 1;
			++year;
		}
		if (year % 4 == 0) // ingore 1900 here
			months[2] = 29;
		else
			months[2] = 28;
	}
	cout << cnt << "\n";
	return 0;
}