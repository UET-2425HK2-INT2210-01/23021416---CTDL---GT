#include <iostream>

int hammu2(int n){
    // sử dụng đệ quy
    if(n==0) return 1;
    return 2*hammu2(n-1);
}

int hamnhanh2(int x, int n){
    if(n==0) return 1;
    if(n%2==0) {
        int y = hamnhanh2(x, n/2);
        return y*y;
    } else{
        int y = hamnhanh2(x, (n-1)/2);
        return y*y*x;
    }

}

int main() {
    int i; std::cin >> i;
    std::cout << hammu2(i);
    return 0;
}

/* Mã giả
Hàm hamnu2(n: số nguyên dương)
    Nếu n = 0
        trả về 1
    Ngược lại
        trả về 2*hamnu2(n-1)
    Độ phức tạp: O(n)

*/ 
