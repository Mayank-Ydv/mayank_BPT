#include <iostream>
using namespace std;
bool checkpallindrome(string str, int i, int j)
{
    if (i > j)
    
        return true;
    
    if (str[i] != str[j])
    
        return false;
    
    else
    {
        return checkpallindrome(str, i+1, j-1);
    }
}
int main()
{

    string name="naman";


    bool ispallindrome = checkpallindrome(name, 0, name.size() - 1);

    if (ispallindrome)
    {
        cout << "it is a pallindrome" << endl;
    }
    else
    {
        cout << "not a pallindrome" << endl;
    }
    return 0;
}