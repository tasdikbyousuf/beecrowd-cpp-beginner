#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, avg;
    cin >> a >> b;

    avg = ((a * 3.5) + (b * 7.5)) / 11.0;

    cout << setprecision(5) << fixed << "MEDIA = " << avg << endl;

    return 0;
}
