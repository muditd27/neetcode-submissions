class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int s=nums.size();
        int n=nums.size()-1;
        vector<int> ans;
        for(int i=0;i<n;){
            for(int j=i+1;j<=n;j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
            i++;
        }
        return ans;
    }
};
