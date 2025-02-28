#include <iostream>
using namespace std;
// tạo 1 hàm đếm số cặp bằng nhau trong mảng
int HamDemSoCapBangNhau(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                dem++;
            }
        }
    }
    return dem;
}
int main()
{
    int a;
    cin >> a;
    int b[a];
    for (int i = 0; i < a; i++)
    {
        cin >> b[i];
    }
    cout << HamDemSoCapBangNhau(b, a);
    return 0;
}