#include <iostream>

using namespace std;

class list
{
	private:
		struct node
		{
			int distance;
			node* next;
		};
		node* headptr;

	public:
		list();
		~list();
		void insert(int distance);
		int numAdditionalBirds(int distance, int startingBirds, int length);
};


int main()
{
	int length, distance, startingBirds;
	int birdSpot, numNewBirds;
	list birdPositions;

	cin >> length >> distance >> startingBirds;

	if(startingBirds != 0)
	{
		birdPositions.insert(6);
		birdPositions.insert(length - 6);
	}

	for(int i = 0; i < startingBirds; i++)
	{
		cin >> birdSpot;
		birdPositions.insert(birdSpot);
	}
	
	numNewBirds = birdPositions.numAdditionalBirds(distance, startingBirds, length);
	
	cout << numNewBirds << endl;
	
	return 0;
}

list::list()
{
	headptr = nullptr;
}

list::~list()
{

}

void list::insert(int distance)
{
	node* prev;
	node* curr;

	node* temp;

	prev = headptr;
	curr = headptr;

	temp = new (nothrow) node;
	if(temp == nullptr)
	{
		cout << "allocation failed" << endl;
		exit(0);
	}

	temp->distance = distance;
	
	if(headptr == nullptr)
	{
		headptr = temp;

		temp->next = nullptr;
		return;
	}

	while(curr != nullptr && curr->distance <= temp->distance)
	{
		prev = curr;
		curr = curr->next;
	}
	temp->next = curr;
	prev->next = temp;

	return;
}


int list::numAdditionalBirds(int distance, int startingBirds, int length)
{
	int end;
	int pos = 6;
	int num = 0;
	node* prev;
	node* curr;

	if(startingBirds == 0)
	{
		end = length - 6;
		while(pos <= end)
		{
			num++;
			pos = pos + distance;
		}
		return num;
	}
	
	prev = headptr;
	curr = headptr->next;

	 while(curr != nullptr)
	 {
		// num = num + ((curr->distance - prev->distance) / distance);
		while( curr->distance - prev->distance > distance) // i belive i have a problem when the first/last bird is less than the distance from the endpoint
		{
			prev->distance = prev->distance + distance;
			num++;
		}

		prev = curr;
		curr = curr->next;	
	 }
	
	return num;
}
