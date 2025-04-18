#include<bits/stdc++.h>
using namespace std;
int main(){
    ifstream file("numbers.txt");
    if (!file) {
        cerr << "Error opening file" << endl;
        return 1;
    }
    vector<int> numbers;
    int number;
    while (file >> number) {
        numbers.push_back(number);
    }
    file.close();
    sort(numbers.begin(), numbers.end());
    ofstream output("numbers.sorted.txt");
    if (!output) {
        cerr << "Error opening output file" << endl;
        return 1;
    }
    for (int num : numbers) {
        output << num << " ";
    }
    output.close();
    cout << "Numbers sorted and written to numbers.sorted.txt" << endl;
return 0;
}