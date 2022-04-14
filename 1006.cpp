#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c, avg;
    cin >> a >> b >> c;

    avg = ((a * 2) + (b * 3) + (c * 5)) / 10.0;

    cout << setprecision(1) << fixed << "MEDIA = " << avg << endl;

    return 0;
}
