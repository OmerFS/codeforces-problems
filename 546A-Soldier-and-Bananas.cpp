#include <iostream>
using namespace std;
int main()
{   
    int k,n,w;
    long i;

    cin >> k  >> n >> w; 

    i = (w * (w + 1) / 2) * k;

    if ((i - n) > 0) {
        cout << i - n << endl;
        return 0;
    }
    else {
        cout << "0" << endl;
        return 0;
    }

} 

