#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> speedVec;
    vector<int> timeVec;
    vector<int>::iterator speedit;
    vector<int>::iterator timeit;

    int count, i;
    int speed, time1, time2, diff;
    int distance = 0;
    
    i = 1;

    cin >> count;
    while( count != -1 )
    {
        cin >> speed;
        speedVec.insert(speedVec.begin(), speed );

        cin >> time1;
        timeVec.insert( timeVec.begin(), time1 );
        while( i < count )
        {
            cin >> speed;
            speedVec.insert( speedVec.begin(), speed );

            cin >> time2;

            diff = time2 - time1;
            timeVec.insert( timeVec.begin(), diff );

            time1 = time2;

            i++;
        }

        speedit = speedVec.begin();
        timeit = timeVec.begin();
        while( speedit != speedVec.end() )
        {
            distance = distance + (*speedit * *timeit);
            speedit++;
            timeit++;
        }

        cout << distance << " miles" << endl;

        speedVec.clear();
        timeVec.clear();
        speedVec.resize( 0 );
        timeVec.resize( 0 );
        i = 1;
        distance = 0;

        cin >> count;
    }
    
}
