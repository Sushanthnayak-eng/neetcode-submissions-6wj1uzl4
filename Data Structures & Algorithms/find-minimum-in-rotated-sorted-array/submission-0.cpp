class Solution {
public:

    int binary(vector<int> &nums , int left , int right){
    if(left == right){
        return nums[left];
    }
    int mid = (left + right)/2;
    if(nums[right] < nums[mid]){
       return binary(nums,mid+1,right);
    }else{
        return binary(nums,left,mid);
    }
    }

    int findMin(vector<int> &nums) {
       int ans = binary(nums,0,nums.size()-1);
       return ans;
    }
};
