#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int totalPersonsVolume = (k * l) / nl;
    int totalSlides = c * d;
    int totalSalt = p / np;
    cout << min({totalPersonsVolume, totalSlides, totalSalt}) / n << endl;
    return 0;
}