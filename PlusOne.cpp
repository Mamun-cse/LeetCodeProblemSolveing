#include<bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int>& nums){
    int n = nums.size();
    for(int i = n-1; i>=0; i--){
        if(nums[i] <9){
            nums[i]++;
            return nums;
        }
        else{
            nums[i] = 0;
        }
    }
    nums.push_back(0);
    nums[0] = 1;
    return nums;

}
int main()
{
    
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i =0; i <n ;i++){
        cin>>nums[i];
    }
    vector<int> ans = plusOne(nums);
    for(int digit : ans){
        cout<<digit;
    }
    return 0;
}
