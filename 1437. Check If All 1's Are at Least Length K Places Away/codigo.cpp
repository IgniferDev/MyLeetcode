class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        auto it= find(nums.begin(), nums.end(), 1);
        int count=it-nums.begin();
        for(int i=0; i<=nums.size()-1; i++){
            if(nums[i]==0)count++;
            if(i!=0 && nums[i]==1 && count<k)return false;
            if(nums[i]==1)count=0;
        }
        return true;
    }
};

