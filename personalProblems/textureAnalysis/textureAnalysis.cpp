#include <iostream>
#include <string>

using namespace std;

bool checkParity(string theLine);

int main()
{

	string theLine;
	int i = 1;
	
	getline(cin, theLine);
	while(theLine != "END" )
	{
		if(checkParity(theLine) == true)
		{
			cout << i << " EVEN" << endl;
		}
		else
		{
			cout << i << " NOT EVEN" << endl;
		}

		getline(cin, theLine);
		i++;
	}
}


bool checkParity(string theLine)
{
	// get each line, store into string
	// use iterator, increment for number of dots
	// make sure that in between astericks there is the same number of dots
	// if there is return true, otherwise return false

	string::iterator it;
	int neededDots = 0;
	int actualDots = 0;
	

	it = theLine.begin() + 1;
	while(it != theLine.end() )
	{
		if(*it == '.' )
		{
			neededDots++;
		}
		if(*it == '*')
		{
			break;
		}
		it++;
	}

	
	it = theLine.begin() + 1;
	while(it != theLine.end() )
	{
		if(*it == '.' )
		{
			actualDots++;
		}
		if(*it == '*' )
		{
			if(actualDots != neededDots)
			{
				return false;
			}
			actualDots = 0;
		}
		it++;
	}

	return true;

}

