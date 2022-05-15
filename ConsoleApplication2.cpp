#include <iostream>
using namespace std;

int main()
{
    const int rows = 3;
    const int cols = 3;
    int matrix[rows][cols] = { {1,2,3},{4,5,6},{7,8,9} };

    int j = cols - 1;
    for (int i = 0; i < rows; i++) {
        matrix[i][j] = 0;
        j--;
    }
    return 0;
}
