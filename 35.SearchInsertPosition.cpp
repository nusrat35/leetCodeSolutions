///35. Search Insert Position (Easy)
#include<iostream>
#include<vector>
using namespace std;

int searchInsert(vector<int>&nums, int target){
    int high = nums.size() - 1, low = 0;
        int mid;
        while( low <= high){
            mid = (high + low)/2;
            if(nums[mid] == target) return mid;
            if(nums[mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        if( nums[mid]>target) return mid;
        return mid + 1;
}
int main(){
    vector<int>nums = {1,3,5,6};
    int target = 2;
    cout<<searchInsert(nums, target);
}
