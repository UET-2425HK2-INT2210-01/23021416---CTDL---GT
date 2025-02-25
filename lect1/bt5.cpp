#include <iostream>
#include <vector>
using namespace std;
void quicksort(vector<int> &arr, int left, int right){
    if (left >= right){
        return;
    }
    int i = left;
    int j = right;
    int pivot = arr[(left + right) / 2];
    while (i <= j){
        while (pivot < arr[j]){
            j--;
        }
        while (pivot > arr[i]){
            i++;
        }
        if (i <= j)
        {
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            i++;
            j--;
        }
    }
    if (left < i){
        quicksort(arr, left, j);
    }
    if (right > j){
        quicksort(arr, i, right);
    }
}
int main(){
    vector<int> arr;
    cout << "Nhập các phần tử của mảng: ";
    for (int i = 0; i < 5; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    quicksort(arr, 0, 5 - 1);
    cout << "Tổng phần tử lớn nhất và bé nhất là: " << arr[0] + arr[4] << endl;
    return 0;
}