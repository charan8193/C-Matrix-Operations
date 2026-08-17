#include <iostream>
using namespace std;

int main()
{
    int arr[10][10], brr[10][10], result[10][10];
    int r1, c1, r2, c2;

    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    if(c1 != r2)
    {
        cout << "Matrix multiplication is not possible.";
        return 0;
    }

    cout << "Enter first matrix:" << endl;
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Enter second matrix:" << endl;
    for(int i = 0; i < r2; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            cin >> brr[i][j];
        }
    }

    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            result[i][j] = 0;
        }
    }

    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            for(int k = 0; k < c1; k++)
            {
                result[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }

    cout << "Result of multiplication:" << endl;

    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
