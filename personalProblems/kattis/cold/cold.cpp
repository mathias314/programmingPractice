#include <iostream>

using namespace std;

int main()
{
	int theTemp, num;
	int count = 0;

	cin >> num;

	for(int i = 0; i < num; ++i)
	{
		cin >> theTemp;

		if(theTemp < 0)
			++count;
	}

	cout << count << endl;
}
