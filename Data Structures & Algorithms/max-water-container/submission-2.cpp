class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right=heights.size()-1;
        int maxA=0;

        while(left<right){

            int width=right-left;
            int minH=min(heights[left],heights[right]);
            int area=width*minH;
            maxA=max(area,maxA);



            if(minH==heights[left]){
                left++;
            }

            else if(minH==heights[right]){
                right--;
            }
        }

        return maxA; 

    }
};
