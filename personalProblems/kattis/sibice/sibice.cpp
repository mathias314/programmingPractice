#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int numMatches, boxWidth, boxHeight;
	int maxLength;
	int matchLength;

	cin >> numMatches >> boxWidth >> boxHeight;

	maxLength = pow( (pow(boxWidth, 2)) + (pow(boxHeight, 2)), .5);


	for(int i = 0; i < numMatches; i++)
	{
		cin >> matchLength;

		if(matchLength <= maxLength)
			cout << "DA" << endl;
		else
			cout << "NE" << endl;
	}

	return 0;
}
