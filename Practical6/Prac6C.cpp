#include <iostream>
using namespace std;

class Matrix
{
    int matrix[10][10];
    int n;

public:
    Matrix()
    {
        n = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                matrix[i][j] = 0;
            }
        }
    }
    Matrix(int x)
    {
        n = x;
        cout << "Enter " << n * n << " elements" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> matrix[i][j];
            }
        }
    }
    void display()
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    Matrix operator+(Matrix m)
    {
        Matrix temp;
        temp.n = n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                temp.matrix[i][j] = matrix[i][j] + m.matrix[i][j];
            }
        }
        return temp;
    }
    Matrix operator*(Matrix m)
    {
        Matrix temp;
        temp.n = n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    temp.matrix[i][j] += matrix[i][k] * m.matrix[k][j];
                }
            }
        }
        return temp;
    }
};

int main()
{
    int n;
    cout << "Enter order of matrix: " << endl;
    cin >> n;
    Matrix m1(n);
    Matrix m2(n);
    cout << "Matrix 1: " << endl;
    m1.display();
    cout << "Matrix 2: " << endl;
    m2.display();
    Matrix m3 = m1 + m2;
    Matrix m4 = m1 * m2;
    cout << "Addition of matrix 1 and 2: " << endl;
    m3.display();
    cout << "Multiplication of matrix 1 and 2: " << endl;
    m4.display();
    return 0;
}