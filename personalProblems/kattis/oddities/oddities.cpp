#include <iostream>

using namespace std;

int main()
{
	int testCases, num;

	cin >> testCases;

	for(int i = 0; i < testCases; i++)
	{
		cin >> num;

		if(num % 2 == 0)
		{
			cout << num << " is even" << endl;
		}
		else 
		{
			cout << num << " is odd" << endl;
		}
	}

	return 0;
}
