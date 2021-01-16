#include <iostream>
#include <string>

using namespace std;

int main()
{
	string messageToBeat;
	int lengthToBeat;
	string winningMessage;

	cin >> messageToBeat;
	lengthToBeat = messageToBeat.length();

	winningMessage = "AWAWHO";

	for(int i = 0; i < lengthToBeat; i++)
	{
		winningMessage.append("O");
	}

	cout << winningMessage << endl;

	return 0;

}

