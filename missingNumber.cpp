#include<bits/stdc++.h>

using namespace std;

int missingNumber(vector<int>& nums){
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i++){
        if(nums[i]!= i){
            return i;
        }
        if(i == nums.size()-1){
            return i+1;
        }
    }
    return 0;
}

int main(){
    vector<int> nums = {3,0,1};
    int missing = missingNumber(nums);
    cout<<missing;
    return 0;
}