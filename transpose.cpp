
#include <iostream>
using namespace std;

int main()
{
    int a[10][10], transpose[10][10];
    int m, n;

    cout << "Enter rows and columns: ";
    cin >> m >> n;

    cout << "Enter matrix:" << endl;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    // Find transpose
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }

    cout << "Transpose matrix:" << endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
