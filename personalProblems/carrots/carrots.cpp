#include <iostream>
#include <string>

using namespace std;

int main()
{
	string description;
	int contestents, solved;

	cin >> contestents >> solved;

	for(int i = 0; i < contestents; i++)
	{
		getline(cin, description);
	}

	cout << solved << endl;
}
