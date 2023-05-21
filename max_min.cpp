#include <iostream>
#include <algorithm>
using namespace std;

// int my_min(int a, int b)
// {
//     if (a < b)
//         return b;
//     else
//         return a;
// }

int main()
{
    int a, b;
    cin >> a >> b;
    // int min = my_min(a, b);
    int mi = min(a, b);
    cout << mi << endl;
    return 0;
}