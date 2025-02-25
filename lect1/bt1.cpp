#include <iostream>
using namespace std;
void daonguoc(string &a){
    int dau=0, cuoi= a.length()-1;
    while(dau<cuoi){
        swap(a[dau],a[cuoi]);
        dau++;
        cuoi--;
    }
}
int main()
{
    string a; getline(cin, a);
    daonguoc(a);
    cout<< a;
    return 0;
}