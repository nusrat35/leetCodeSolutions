#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int s = nums.size();
    for(int j = 0; j < k; j++){
        for(int i = 0; i< s; i++)
            swap(nums[i],nums[s-1]);
    }
    for(int i =0; i<s;i++) cout<<nums[i]<<" ";
}
int main(){
    vector<int>v = {1,2,3,4,5,6,7}; //{-1,-100,3,99}
    int k = 3;
    rotate(v,k);
}
