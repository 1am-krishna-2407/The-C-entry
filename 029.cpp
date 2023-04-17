
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> arr;
    int d;
    cin>>d;
    arr.resize(d);
    for( int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }
    for(int i=arr.size(); i>=0; i--){
        cout<<arr[i]<<"  ";
    }
    return 0;
}


