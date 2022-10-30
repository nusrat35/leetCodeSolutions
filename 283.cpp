///283. Move Zeroes
#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int>& nums){
    int l =0,r = 0;
    for(int r =0; r< nums.size(); r++){
        if(nums[l] == 0 && nums[r] !=0)
            swap(nums[l], nums[r]);
        if( nums[l] != 0 ) l++;
    }
    for(int i = 0; i<nums.size(); i++) cout<<nums[i]<<" ";
}

int main(){
    vector<int>nums = {4,2,4,0,0,3,0,5,1,0};
    moveZeroes(nums);
}
