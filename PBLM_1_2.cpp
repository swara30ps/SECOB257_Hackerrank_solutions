#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

# define max 100
void display(int a[][max], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}


void fun(int num)
{

    int size = 2 * num - 1;
    int f = 0;
    int b = size - 1;
    int a[max][max];
    while (num != 0)
    {
        for (int i = f; i <= b; i++)
        {
            for (int j = f; j <= b; j++)
            {
                if (i == f || i == b ||
                    j == f || j == b)
                    a[i][j] = num;
            }
        }
        ++f;
        --b;
        --num;
    }
    display(a, size);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
        int n;
        cin >> n;
        fun(n);

        return 0;
}