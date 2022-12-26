#include <iostream>
using namespace std;
bool ispresent(int arr[], int size, int key)
{
    if (size == 0)
    {
        return false;
    }

    if (key == arr[0])
    {
        return true;
    }
    else{
    bool check = ispresent(arr + 1, size-1,key);
    return check;
    }
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int ans = ispresent(arr, size, 11);
    if (ans)
    {
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key not present"<<endl;
    }
    
}