#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double pi = M_PI;

int main()
{
	int radius;
	double euclidArea, taxicabArea;

	cin >> radius;

	euclidArea = pow(radius, 2) * pi;

	taxicabArea = pow(radius, 2) * 2;

	cout << showpoint << setprecision(6) << fixed;
	cout << euclidArea << endl;
	cout << taxicabArea << endl;
}
