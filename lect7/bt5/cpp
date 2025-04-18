#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> perm(n);
    for (int i = 0; i < n; ++i)
        perm[i] = i + 1;

    do {
        for (int num : perm)
            cout << num;
        cout << endl;
    } while (next_permutation(perm.begin(), perm.end()));

    return 0;
}
