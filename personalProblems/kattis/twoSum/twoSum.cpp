#include <iostream>
#include <vector>


using namespace std;

vector<int> twoSum(vector<int> &nums, int target);

int main()
{
	vector<int> nums{3, 3};
	int target = 6;
	vector<int> results;

	results = twoSum(nums, target);

	for(int x : results)
	{
		cout << x << " ";
	}
	cout << endl;

	return 0;
}

vector<int> twoSum(vector<int> &nums, int target)
{
	vector<int> result;

	for(int i = 0; i < nums.size(); i++)
	{
		for(int j = i + 1; j < nums.size(); j++)
		{
			if(nums[j] == target - nums[i])
			{
				result.push_back(i);
				result.push_back(j);
				return result;
			}	
		}	
	}

	cout << "Failed to find solution :( " << endl;
	exit(1);
}
