#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int number, hour;
    double rate;
    cin >> number >> hour >> rate;

    cout << "NUMBER = " << number << endl;
    cout << setprecision(2) << fixed << "SALARY = U$ " << double(rate * hour) <<  endl;

    return 0;
}
