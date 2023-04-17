#include<iostream>
#include<algorithm>
#include<stack>
#include<vector>
using namespace std;
int main(){
    int z,k;
    int a[]= {1,2,3,4,5,6};    
    stack <int>s{};
    cout<<"Enter the number of characters in the stack";
    cin>> z;
    cout<<"Enter the number of characters to be pop outside: ";
    cin>>k;
    for (int i=0;i<=z;i++){
       
        s.push(a[i]);
    }
    for (int j=0; j<k-1; j++){
        s.pop();
        
    }
    cout<< s.top()<< " ";
}