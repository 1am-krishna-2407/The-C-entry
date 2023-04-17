#include <iostream>
#include <vector>

using namespace std;
class Solution
{
    int l=0;
int r=0;
bool isFound = false;
int sum = arr[0];

while(r < n){
    if (sum == S){
        isFound = true;
        break;
    }
    else if(sum < S){
        r++;
        if (r < n) sum += arr[r];
    }
    else{
        sum -= arr[l];
        l++;
    }        
}

if(isFound){
    return l+1;
    return r+1;
}







}
int main() {
    int n;
    long long s;
    cin >> n >> s;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    Solution ob;
    vector<int> result = ob.subarraySum(arr, n, s);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}