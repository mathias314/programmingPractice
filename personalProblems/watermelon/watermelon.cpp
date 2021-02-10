#include <iostream>

using namespace std;


int main()
{
	int size;

	cin >> size;
	
	if(size == 2)
	{
		cout << "NO" << endl;
		exit(0);
	}

	if(size % 2 == 0)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	return 0;
}
