#include <iostream>
using namespace std;
int getsum(int arr[], int size)
{
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }
    int remaningpart = getsum(arr + 1, size - 1);
    int sum = arr[0] + remaningpart;
    return sum;
}
int main()
{
    int arr[6] = {1, 3, 4, 5, 6, 7};
    int size = 6;
    int sum = getsum(arr, size);
    cout << "the sum of array is" << sum << endl;

    return 0;
}