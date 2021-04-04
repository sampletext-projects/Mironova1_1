#include <iostream>

using namespace std;

int main()
{
	double x, y;

	cout << "¬ведите X: ";
	cin >> x;
	cout << "¬ведите Y: ";
	cin >> y;

	double result = x * log(x) + y / (cos(x) - x / 3);

	cout << "–езультат: " << result << endl;

	return 0;
}
