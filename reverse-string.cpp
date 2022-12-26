#include<iostream>
using namespace std;
void reverse(string& str, int i , int j){
    if (i>j)
    {
        return ;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    reverse(str,i,j); 
    
}
int main(){
    cout<<"enter the string"<<endl;
    string name;
    cin>>name;
    reverse(name,0,name.size()-1);
    cout<<name<<endl;

return 0;
}