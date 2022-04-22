#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
// insertion sort function
// void insertionSort(int n, int num[n])
// {
//     int i,j;
//     for (i = 1; i <= n; i++)
//     {
//         x = num[i];
//         j = i − 1;
//         while (j >= 1 && num[j] > x)
//         {
//             num[j + 1] = num[j];
//             j−−;
//         }
//         num[j + 1] = x;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout>> num[i];
//     }

// }
int main()
{
    int n, i;
    char s[100];
    vector<string> V;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", s);
        V.push_back(s);
    }

    sort(V.begin(), V.end());

    return 0;
}