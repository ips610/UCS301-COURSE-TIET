#include <iostream>
#include <vector>

using namespace std;
vector<vector<int>> matrixMultiplication(const vector<vector<int>>& matrix1, const vector<vector<int>>& matrix2) {
    int rows1 = matrix1.size();
    int cols1 = matrix1[0].size();
    int cols2 = matrix2[0].size();

    vector<vector<int>> result(rows1, vector<int>(cols2, 0));

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    return result;
}

int main() {
    // Example usage
    vector<vector<int>> matrix1 = {{1, 2}, {3, 4}};
    vector<vector<int>> matrix2 = {{5, 6}, {7, 8}};

    vector<vector<int>> result = matrixMultiplication(matrix1, matrix2);

    // Print the result
    for (const auto& row : result) {
        for (const auto& element : row) {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}

// 1 2       5 6
// 3 4       7 8
