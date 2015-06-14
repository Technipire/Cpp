#include <iostream>
#include <vector>

using namespace std;

class Matrix {
    public:
        Matrix(int r, int c);
        void print_matrix();
    private:
        vector<vector<int>> m;
        int rowSize;
        int colSize;
};

Matrix::Matrix(int r, int c) {
    rowSize = r;
    colSize = c;
    for (int i = 0; i < r; ++i) {
        vector<int> v(c, 0);
        m.push_back(v);
    }
}
void Matrix::print_matrix() {
    for (auto c : m) {
        for (auto i : c) {
            cout << i << " ";
        }
        cout << endl;
    }
}

class SquareMatrix : public Matrix {
    public:
        SquareMatrix(int size);
};

SquareMatrix::SquareMatrix(int size)
              :Matrix(size, size){}


int main() {
    Matrix m = Matrix(10, 10);
    m.print_matrix();
    SquareMatrix s = SquareMatrix(20);
    s.print_matrix();
    return 0;
}


