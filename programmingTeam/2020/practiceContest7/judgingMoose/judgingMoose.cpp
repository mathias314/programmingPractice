#include <iostream>

using namespace std;

int main()
{
	int left, right;
	int oddNum;

	cin >> left >> right;

	if(left != right)
	{
		// odd moose
		if(left > right)
		{
			oddNum = left * 2;

		}
		else
		{
			oddNum = right * 2;
		}
		
		cout << "Odd " << oddNum << endl;	
	}
	else if(left == right && left != 0)
	{
		// even moose
		cout << "Even " << left + right << endl;
	}
	else
	{
		cout << "Not a moose" << endl;
	}


	return 0;
}
