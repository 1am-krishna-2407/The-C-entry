#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // target not found
}

int main() {
    vector<int> nums = {2, 4, 6, 8, 10};
    int target = 8;
    int index = binarySearch(nums, target);
    if (index != -1) {
        cout << "Found target at index " << index << endl;
    } else {
        cout << "Target not found" << endl;
    }
    return 0;
}
