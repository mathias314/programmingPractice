#include <iostream>
#include <string>

using namespace std;

string operator*(string a, unsigned int b)
{
	string output = "";
	while(b--)
	{
		output += a;
	}
	return output;
}

int main()
{
	int numQuestions;
	string correctSequence;
	string Adrian = "ABC";
	string Bruno = "BABC";
	string Goran = "CCAABB";
	//  adrianCount = numQuestions / 3; 
	//  brunoCount = numQuestions / 4;
	//  goranCount = numQuestions / 6;
	
	int AdrianCount, BrunoCount, GoranCount;
	AdrianCount = BrunoCount = GoranCount = 0;	

	cin >> numQuestions;
	cin >> correctSequence;
	
	Adrian = Adrian * unsigned(100);
	Bruno = Bruno * unsigned(100);
	Goran = Goran * unsigned(100);

	for(int i = 0; i < numQuestions; i++)
	{
		if(correctSequence.at(i) == Adrian.at(i) )
		{
			AdrianCount++;
		}
		if(correctSequence.at(i) == Bruno.at(i) )
		{
			BrunoCount++;
		}
		if(correctSequence.at(i) == Goran.at(i) )
		{
			GoranCount++;
		}
	}

	if(AdrianCount > BrunoCount && AdrianCount > GoranCount)
	{
		cout << AdrianCount << endl << "Adrian" << endl;
	}
	else if(BrunoCount > AdrianCount && BrunoCount > GoranCount)
	{
		cout << BrunoCount << endl << "Bruno" << endl;
	}
	else if(GoranCount > AdrianCount && GoranCount > BrunoCount)
	{
		cout << GoranCount << endl << "Goran" << endl;
	}
	else if(AdrianCount == BrunoCount && AdrianCount == GoranCount)
	{
		cout << AdrianCount << endl << "Adrian" << endl << "Bruno" << endl << "Goran" << endl;
	}
	else if(AdrianCount == BrunoCount)
	{
		cout << AdrianCount << endl << "Adrian" << endl << "Bruno" << endl;
	}
	else if(AdrianCount == GoranCount)
	{
		cout << AdrianCount << endl << "Adrian" << endl << "Goran" << endl;
	}
	else if(BrunoCount == GoranCount)
	{
		cout << BrunoCount << endl << "Bruno" << endl << "Goran" << endl;
	}


	return 0;
}

