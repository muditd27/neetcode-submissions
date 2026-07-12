class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> track;
        int longest=1;
        
        if(n==0)
            return 0;
        for(int i=0;i<n;i++){
            track.insert(nums[i]);
        }

        for(int num:track){
            if(track.count(num-1))
                continue;

            else{
                int onCurrent=num;
                int currSub=1;
                while(track.count(onCurrent+1)){
                    onCurrent++;
                    currSub++;
                }
                longest=max(currSub,longest);
            }
        }
        return longest;
    }
};
