#include <iostream>
#include <vector>
#include <string>

using namespace std;

void printNameList(vector<string> nameList, int setNum);

int main()
{
	int numNames;
	string newName;
	vector<string> nameList;

	int frontInsert, backInsert;
	unsigned int setNum = 1;

	cin >> numNames;
	
	while(numNames != 0)
	{	
		nameList.resize(numNames);

		frontInsert = 0;
		backInsert = nameList.size() - 1;

		for(int i = 0; i < numNames; i++)
		{	
			cin >> newName;

			if(i % 2 == 0)
			{
				// insert front
				// nameList.insert(frontIt, newName);
				// frontIt++;
				
				nameList[frontInsert] = newName;
				frontInsert++;

				// cout << "insert front" << endl;
			}
			else
			{
				// insert at end
				// nameList.insert(backIt, newName);
				// backIt--;
				//cout << "insert back" << endl;
				//
				nameList[backInsert] = newName;
				backInsert = backInsert - 1;
			}
		}
	        printNameList(nameList, setNum);
		setNum++;

		cin >> numNames;
		nameList.clear();
	}

	return 0;
}


void printNameList(vector<string> nameList, int setNum)
{
	vector<string>::iterator it;
	it = nameList.begin();

	cout << "SET " << setNum << endl;

	for(auto i = nameList.begin(); i != nameList.end(); i++)
	{
		cout << *it << endl;
		// cout << "count++" << endl;
		it++;
	}
}

