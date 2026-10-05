#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 20, 30, 40, 50};

    int n = 30;

    if (s.find(n) != s.end())
        cout << n << " is present";
    else
        cout << n << " is not present";

    return 0;
}
