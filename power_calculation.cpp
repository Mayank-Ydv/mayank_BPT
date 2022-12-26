#include <iostream>
using namespace std;
int pow(int a, int b)
{
    // cout<<a<<endl;
    // cout<<b<<endl;
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }
    int ans = pow(a, b / 2);
    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return a * ans * ans;
    }
}
int main()
{
    int a;
    cout << "enter the value of a" << endl;
    cin >> a;
    int b;
    cout << "enter the power" << endl;
    cin >> b;
    int ans = pow(a, b);
    cout << ans << endl;

    return 0;
}
