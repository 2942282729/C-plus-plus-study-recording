// 矩阵.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include<iostream>
using namespace std;
//矩阵基础类，一个抽象类
class MatrixBase {
    int rows, cols;
public:
    MatrixBase(int rows, int cols) : rows(rows), cols(cols) {}
    int getRows()const { return rows; }    //矩阵行数
    int getCols()const { return cols; }    //矩阵列数
    virtual double getElement(int r, int c)const = 0; //取第i个元素的值
    void show()const {   //分行显示矩阵中所有元素
        for (int i = 0; i < rows; i++) {
            cout << endl;
            for (int j = 0; j < cols; j++)
                cout << getElement(i, j) << " ";
        }
    }
};
//矩阵类
class Matrix : public MatrixBase {
    double* val;
public:
    Matrix(int rows, int cols, double m[] = NULL) : MatrixBase(rows, cols) {
        val = new double[rows * cols];
        for (int i = 0; i < rows * cols; i++)
            val[i] = (m == NULL ? 0.0 : m[i]);
    }
    ~Matrix() { delete[]val; }
    double getElement(int r, int c)const { return val[r * getCols() + c]; }
};
//单位阵(主对角线元素都是1,其余元数都是0的方阵)类
class UnitMatrix : public MatrixBase {
public:
    UnitMatrix(int rows) : MatrixBase(rows, rows) {} //单位阵行数列数相同
    double getElement(int r, int c)const {
        if (r == c) return 1.0;
        return 0.0;
    }
};

int main() {
    MatrixBase* m;
    double d[][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };

    m = new Matrix(3, 5, (double*)d);
    m->show();
    delete m;
    cout << endl;
    m = new UnitMatrix(6);
    m->show();
    delete m;
    return 0;
}


