class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> s(nums.begin(),nums.end());

        if(s.size()<n)
            return true;

        else if(s.size()==n)
            return false;
    }
};