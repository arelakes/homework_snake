#include <iostream>
using namespace std;

int main()
{
    int n, counter;
    n = 0;
    while (n < 3)
    {
        cout << "Enter the number >=3!\n";
        cin >> n;
    }

    int** arr = new int* [n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    counter = 1;
    for (int k = 0; k <= (n / 2); k++)
    {
        // первый
        for (int j = k; j < (n - k); j++)
        {
            arr[k][j] = counter;
            counter++;
        }
        // второй
        for (int i = k+1; i < (n - k); i++)
        {
            arr[i][n-1-k] = counter;
            counter++;
        }
        // третий
        for (int j = n-2-k; j >= k; j--)
        {
            arr[n - 1 - k][j] = counter;
            counter++;
        }
        // четвертый
        for (int i = n - 2 - k; i >= k+1; i--)
        {
            arr[i][k] = counter;
            counter++;
        }

    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }



    for (int i = 0; i < n; i++)
    {
        delete [] arr [i];
    }



    delete[] arr;
}

