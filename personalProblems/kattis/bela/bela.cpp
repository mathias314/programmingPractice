#include <iostream>
#include <string>

using namespace std;

int main()
{
	int numHands;
	char suit;
	string card;
	bool domCase = false;
	int score = 0;

	cin >> numHands >> suit;
	numHands = numHands * 4;

	for(int i = 0; i < numHands; i++)
	{
		cin >> card;

		if(card.at(1) == suit)
		{
			// dom suit
			domCase = true;
			if(card.at(0) == 'J')
			{
				score = score + 20;
			}
			else if(card.at(0) == '9')
			{
				score = score + 14;
			}
		}

		if(card.at(0) == 'A')
		{
			score = score + 11;
		}
		else if(card.at(0) == 'K')
		{
			score = score + 4;	
		}	
		else if(card.at(0) == 'Q')
		{
			score = score + 3;
		}
		else if(card.at(0) == 'J' && domCase == false)
		{
			score = score + 2;
		}
		else if(card.at(0) == 'T')
		{
			score = score + 10;
		}
		
		domCase = false;
	}

	cout << score << endl;

}
