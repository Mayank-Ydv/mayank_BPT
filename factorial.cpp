#include <iostream>
using namespace std;
int fact(int n)
{
    if ((n == 0) || (n == 1))

        return 1;
    else
        return n * fact(n - 1);
}
int main()
{
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;
    int ans = fact(n);
    cout << "the factorial of n is" << ans;
    return 0;
}
