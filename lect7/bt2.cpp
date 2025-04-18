#include <iostream>
#include <fstream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    ifstream fin("matrix.txt");
    ofstream fout("matrix.out");

    int m, n;
    fin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            fin >> matrix[i][j];

    int maxSum = INT_MIN;
    int finalTop = 0, finalLeft = 0, finalBottom = 0, finalRight = 0;

    
    for (int top = 0; top < m; ++top) {
        vector<int> temp(n, 0);

        for (int bottom = top; bottom < m; ++bottom) {
           
            for (int col = 0; col < n; ++col)
                temp[col] += matrix[bottom][col];

            // Kadane's algorithm on temp[]
            int sum = 0, startCol = 0;
            int localLeft = 0, localRight = 0;
            int localMax = INT_MIN;

            for (int col = 0; col < n; ++col) {
                if (sum <= 0) {
                    sum = temp[col];
                    startCol = col;
                } else {
                    sum += temp[col];
                }

                if (sum > localMax) {
                    localMax = sum;
                    localLeft = startCol;
                    localRight = col;
                }
            }

            // Cập nhật nếu tìm được tổng lớn hơn
            if (localMax > maxSum) {
                maxSum = localMax;
                finalTop = top;
                finalBottom = bottom;
                finalLeft = localLeft;
                finalRight = localRight;
            }
        }
    }

    // Xuất kết quả (chuyển sang chỉ số 1-based)
    fout << (finalTop + 1) << " "
         << (finalLeft + 1) << " "
         << (finalBottom + 1) << " "
         << (finalRight + 1) << " "
         << maxSum << endl;

    return 0;
}
