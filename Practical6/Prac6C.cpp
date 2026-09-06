#include <iostream>
using namespace std;

class Matrix
{
    int matrix[10][10];
    int row, column;

public:
    Matrix()
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                matrix[i][j] = 0;
            }
        }
    }
};

int main()
{

    return 0;
}