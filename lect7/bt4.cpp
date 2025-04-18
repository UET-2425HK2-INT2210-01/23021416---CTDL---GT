#include <iostream>
#include <vector>
using namespace std;

void generateBinary(int n, string current = "") {
    if (current.length() == n) {
        cout << current << endl;
        return;
    }
    generateBinary(n, current + "0");
    generateBinary(n, current + "1");
}

int main() {
    int n;
    cin >> n;
    generateBinary(n);
    return 0;
}
