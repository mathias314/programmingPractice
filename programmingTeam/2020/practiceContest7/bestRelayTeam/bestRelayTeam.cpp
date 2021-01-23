#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct runner
{
	string name;
	double firstTime;
	double secondTime;
	bool used;
};

bool sortStartTimes(runner LHS, runner RHS);
bool sortSecondTimes(runner LHS, runner RHS);

int main()
{
	runner aRunner;
	vector<runner> allRunners;
	vector<runner> sortedStart;	

	int numRunners, outputCount, numSelected;
	double totalTime;
	string firstName;

	cin >> numRunners;

	for(int i = 0; i < numRunners; i++)
	{
		cin >> aRunner.name >> aRunner.firstTime >> aRunner.secondTime;
		aRunner.used = false;
		allRunners.push_back(aRunner);
	}
	
	sort(allRunners.begin(), allRunners.end(), sortStartTimes);
	totalTime = allRunners[0].firstTime;
	firstName = allRunners[0].name;
	allRunners[0].used = true;
	numSelected = 1;

	sort(allRunners.begin(), allRunners.end(), sortSecondTimes);
	
	for(int i = 0; i < numRunners; i++)
	{
		if(allRunners[i].used == false)
		{
			totalTime = totalTime + allRunners[i].secondTime;
			allRunners[i].used = true;
			++numSelected;
		}
		if(numSelected >= 4)
		{
			break;
		}	
	}

	cout << totalTime << endl;
	cout << firstName << endl;
	outputCount = 1;
	for(int i = 0; i < numRunners; i++)
	{
		if(allRunners[i].name != firstName)
		{
			cout << allRunners[i].name << endl;
			++outputCount;
		}
		if(outputCount >= 4)
		{
			break;
		}
	}


	return 0;
}


bool sortStartTimes(runner LHS, runner RHS)
{
	if (LHS.firstTime < RHS.firstTime)
	{
		return true;
	}
	else
	{
		return false;
	}
}


bool sortSecondTimes(runner LHS, runner RHS)
{
	if(LHS.secondTime < RHS.secondTime)
	{
		return true;
	}
	else
	{
		return false;
	}
}

