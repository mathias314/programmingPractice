#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool checkIfNewCity(vector<string> vec, string city);

int main()
{
	int testCases;
	int numCities;
	string city;
	vector<string> listOfCities;


	cin >> testCases;

	for(int i = 0; i < testCases; i++)
	{
		cin >> numCities;
		
		for(int j = 0; j < numCities + 1; j++)
		{
			getline(cin, city);
		
			if(checkIfNewCity(listOfCities, city) )
			{
				listOfCities.push_back(city);
			}
		}
		
		cout << listOfCities.size() - 1 << endl;

		listOfCities.clear();
		listOfCities.resize(0);	
	}
}


bool checkIfNewCity(vector<string> vec, string city)
{
	vector<string>::iterator it;

	it = vec.begin();

	while(it != vec.end() )
	{
		if(*it == city)
		{
			return false;
		}
		it++;
	}

	return true;
}
