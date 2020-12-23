#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct babyName
{
	string name;
	int gender;
};

int query(vector<babyName> data, char start, char end, int gender);
bool nameSort(babyName LHS, babyName RHS);


int main()
{
	int command, gender;
	string name, compareName;
	babyName nameData;
	vector<babyName> data;
	vector<babyName>::iterator it;

	int num;
	char start, end;

	cin >> command;
	while(command != 0)
	{
		if(command == 1)
		{
			// add new name
			cin >> name >> gender;
			nameData.name = name;
			nameData.gender = gender;
			data.push_back(nameData);
		}
		else if(command == 2)
		{
			// remove name
			cin >> name; 
			it = data.begin();
	 		for(auto d : data)
			{
				if(d.name == name)
				{
					data.erase(it);
				}
				it++;
			}
		}
		else if(command == 3)
		{
			// count num suitable names
			cin >> start >> end >> gender;
		        num = query(data, start, end, gender);
			cout << num << endl;
		}
 		cin >> command;
	}

	return 0;	
}


int query(vector<babyName> data, char start, char end, int gender)
{
	int nameCount = 0;

	sort(data.begin(), data.end(), nameSort);

	if(gender == 0)
	{
		for(auto d : data)
		{
			if(d.name.at(0) >= end)
			{
				return nameCount;
			}
			if(d.name.at(0) >= start)
			{
				nameCount++;
			}
		}
	}
	else if(gender == 1)
	{
		for(auto d : data)
		{
			if(d.name.at(0) >= end)
			{
				return nameCount;
			}

			if(d.name.at(0) >= start && d.gender == 1)
			{
				nameCount++;
			}
		}
	}
	else if(gender == 2)
	{
		for(auto d : data)
		{
			if(d.name.at(0) > end)
			{
				return nameCount;
			}

			if(d.name.at(0) >= start && d.gender == 2)
			{
				nameCount++;
			}
		}
	}

	return nameCount;
}


bool nameSort(babyName LHS, babyName RHS)
{
	if(LHS.name < RHS.name)
	{
		return true;
	}
	else
	{
		return false;
	}
}
