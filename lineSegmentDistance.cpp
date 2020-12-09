#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double minDistance( int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4 );
double seperation( int x1, int y1, int x2, int y2, int endpointx, int endpointy );

const double epsilon = .00000000001;

int main()
{
    int cases;
    int x1, x2, x3, x4, y1, y2, y3, y4;

    cin >> cases;

    for( int i = 0; i < cases; i++ )
    {
        cin >> x1 >> y1;
        cin >> x2 >> y2;

        cin >> x3 >> y3;
        cin >> x4 >> y4;

        cout << showpoint << minDistance( x1, y1, x2, y2, x3, y3, x4, y4 ) << endl;
    }
}


double minDistance( int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4 )
{
    double sep1, sep2, sep3, sep4;
    double min1, min2;

    sep1 = seperation( x1, y1, x2, y2, x3, y3 );
    sep2 = seperation( x1, y1, x2, y2, x4, y4 );
    sep3 = seperation( x3, y3, x4, y4, x1, y1 );
    sep4 = seperation( x3, y3, x4, y4, x2, y2 );

    min1 = min( sep1, sep2 );
    min2 = min( sep3, sep4 );

    return min( min1, min2 );
}


double seperation( int x1, int y1, int x2, int y2, int endpointx, int endpointy )
{
    double seperation;
    int xsign = 1;
    int ysign = 1;


    if( (abs(x2 - x1) < epsilon) && (abs(y2 - y1) < epsilon))
    {
        // line segment is actually a point
        seperation = sqrt( (pow( (endpointx - x1), 2 )) + (pow( (endpointy - y1), 2 )));
        return seperation;
    }

    seperation = (abs( ((y2 - y1) * endpointx) - ((x2 - x1) * endpointy) + (x2 * y1) - (y2 * x1) )) /
        (sqrt( pow((y2 - y1), 2 )) + (pow( (x2 - x1), 2 ) ) );

    return seperation;
}
