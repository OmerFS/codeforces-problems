#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
string alpha(string c, char ch) {
 
    string d;
    int i;
 
    for (i = 0; i < c.length(); i++) {
 
        if (c[i] != ch) {
 
            d += c[i];
        }
 
    }
 
    return d;
 
}
 
 
int main()
{   
    string c,d;
    long i;
    int af = 0;
 
 
    cin >> c;
 
    d = c;
    
 
    for (i = 0; i < c.length(); i++) {
 
        if (count(c.begin(), c.end(), c[i]) >= 2){
            if (count(d.begin(), d.end(), c[i]) > 0) {
                af = af + 1;
            }
            d = alpha(d, c[i]);
        }
        else {
            af = af + 1;
        }
        
    }
 
    d = af % 2 ? "IGNORE HIM!":"CHAT WITH HER!";
 
 
    cout << d << endl;
 
    return 0;
} 
