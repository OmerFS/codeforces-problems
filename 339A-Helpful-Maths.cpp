#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    string c,v,x;
    int z;
    cin >> c;

    for (z = 0; z < c.length(); z++) {

        v = z % 2 ? v : v + c[z];

    }

    sort(v.begin(), v.end());

    for (z = 0; z < c.length(); z++) {

        x = (z % 2) ? x + "+" : ((z == 0) ? x + v[0] : x + v[(z / 2)]);

    }

    cout << x;

    return 0;
}
