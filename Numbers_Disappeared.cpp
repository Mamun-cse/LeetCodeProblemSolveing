#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maximumProduct(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());

    return max(nums[0] * nums[1] * nums[n - 1], nums[n - 1] * nums[n - 2] * nums[n - 3]);
}

int main() {
    vector<int> nums = {-10, 0, 1, 2, 3, 4}; // Sample input vector

    int maxProduct = maximumProduct(nums);

    cout << "Maximum product of three integers: " << maxProduct << endl;

    return 0;
}
