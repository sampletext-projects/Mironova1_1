#include <iostream>

using namespace std;

int main()
{
	double x, y;

	cout << "������� X: ";
	cin >> x;
	cout << "������� Y: ";
	cin >> y;

	double result = x * log(x) + y / (cos(x) - x / 3);

	cout << "���������: " << result << endl;

	return 0;
}
