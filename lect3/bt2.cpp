
Mã giả
Hàm hamnu2(n: số nguyên dương)
    Nếu n = 0
        trả về 1
    Ngược lại
        trả về 2*hamnu2(n-1)
    Độ phức tạp: O(n)


HÀM hamnhanh2(x, n):
    Nếu n == 0:
        Trả về 1
    Nếu n chẵn:
        y = hamnhanh2(x, n/2)
        trả về y * y
    Nếu n lẻ:
        y = hamnhanh2(x, (n-1)/2)
        trả về y * y * x
