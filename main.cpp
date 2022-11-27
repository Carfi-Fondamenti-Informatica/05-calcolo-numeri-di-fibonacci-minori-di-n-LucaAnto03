#include <iostream>
using namespace std;

int main() {
    int n=0, a=1, b=0, c=0;
    cin >> n ;
    while (c<=n) {
        c = a + b;
        a = b;
        b = c;
        if (c<=n) {
            cout << c << endl;
        }
    }
    return 0;
}
