#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct runner
{
	string name;
	double firstTime;
	double otherTime;
	bool usedAsFirst;
};

bool sortFunc(runner LHS, runner RHS);

int main()
{
	runner aRunner;
	vector<runner> allRunners;
	vector<runner> sortedSeconds;

	vector<string> testList;
	vector<string> bestList;
	bestList.resize(4);

	int numRunners, count;
	double totalTime, bestTime;
	bestTime = 10000000;
	count = 0;

	string firstName;

	for(int i = 0; i < numRunners; i++)
	{
		cin >> aRunner.name >> aRunner.firstTime >> aRunner.otherTime;
		aRunner.usedAsFirst = false;
		allRunners.push_back(aRunner);
	}

	sortedSeconds = allRunners;

	sort(sortedSeconds.begin(), sortedSeconds.end(), sortFunc);

	for(int j = 0; j < numRunners; j++)
	{
		firstName = allRunners[j].name;
		totalTime = allRunners[j].firstTime;
		for(int k = 0; k < numRunners; k++)
		{
			if(sortedSeconds[k].name != firstName)
			{
				totalTime = totalTime + sortedSeconds[k].otherTime;
				count++;
			}
			if(count < 4)
			{
				break;
			}
		}

		if(totalTime < bestTime)
		{
			bestTime = totalTime;
			bestList[0] = firstName;
						

		}
	}	
	
	return 0;
}


bool sortFunc(runner LHS, runner RHS)
{
	return LHS.otherTime < RHS.otherTime;
}

