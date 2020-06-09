#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int fun(int n)
{
    int data[] = {100, 20, 10, 5, 1};
    int ans = 0;
    for (int i = 0; i < 5 && n > 0; i++)
    {
        int q = n / data[i];

        n = n % data[i];
        ans += q;
    }
    return ans;
}



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int test;
    long n[50];
    cin >> test;
    for (int i = 0; i < test; i++)
        cin >> n[i];

    for (int i = 0; i < test; i++)
        cout << fun(n[i]) << endl;
    
    return 0;
}
