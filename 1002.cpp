#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double r, area;
    cin >> r;

    area = 3.14159 * r * r;

    cout << setprecision(4) << fixed << "A=" << area << endl;

    return 0;
}
