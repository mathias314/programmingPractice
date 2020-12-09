#include <iostream>

using namespace std;

int main()
{
    unsigned int start, found, required;
    unsigned int totalBottles;
    unsigned int output = 0;

    cin >> start >> found >> required;

    totalBottles = start + found;

    while( totalBottles >= required )
    {
        output++;
        totalBottles = (totalBottles - required) + 1;
        // every time he drinks one, he has a new empty bottle
    }

    cout << output << endl;
}
