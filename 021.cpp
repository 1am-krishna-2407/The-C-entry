
#include <iostream>
#include<stack>
#include<vector>
using namespace std;
int main() {
	int N, K;
    int z;
	cin>>N>>K;
    
	stack<int> s;
	vector<int> nums(N);
	vector<int>kal;

    
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }
	for (int l=0; l<=N; l++){
		s.push(nums[l]);
	}
	for (int j=0; j<=K-1; j++){
		
		
		z=s.top();
		kal.push_back(z);
        s.pop();
	}
    cout<< kal[-1]; 
}