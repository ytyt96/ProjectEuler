#include <iostream>
using namespace std;

// zero(0), one, two, three, four, five, six, seven, eight, nine
const int ones[10] = { 0, 3, 3, 5, 4, 4, 3, 5, 5, 4 };

// ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen, seventeen, eighteen, nineteen
const int tensSpecial[10] = { 3, 6, 6, 8, 8, 7, 7, 9, 8, 8 };

// twenty, thirty, forty, fifty, sixty, seventy, eighty, ninety
const int tens[10] = { 0, 0, 6, 6, 5, 5, 5, 7, 6, 6 };

int countLetter(int number)
{
	int ret = 0;
	// 1-9
	if (number < 10)
		ret = ones[number];
	else
		//  10-99
		if (number < 100)
		{
		// special case 10-19
		if (number < 20)
			ret = tensSpecial[number % 10];
		// 20-99
		else
			ret = tens[number / 10] + countLetter(number % 10);
		}
		else
			// 100-999
			if (number < 1000)
			{
				ret = ones[number / 100] + 7;// hundred
				if (number % 100 != 0)
					ret += 3;// and
				ret += countLetter(number % 100);
			}
			else
			{
				ret = 11;//one thousand
			}
	return ret;
}	

int main()
{
	int cnt = 0;
	for (int i = 1; i <= 1000; ++i)
		cnt += countLetter(i);
	cout << cnt << "\n";
	return 0;
}