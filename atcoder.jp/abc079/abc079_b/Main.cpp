#include <iostream>
using namespace std;

int main() {
    int64_t i, j, li=0, li1 = 1, li2 = 2;
    cin >> j;

    switch (j) {
    case 0: cout << "2\n"; break;
    case 1: cout << "1\n"; break;
    default:
        for (i = 2; i <= j; i++) {
            li = li2 + li1;
            li2 = li1;
            li1 = li;
                }
        cout << li; break;
        return 0;
    }
}