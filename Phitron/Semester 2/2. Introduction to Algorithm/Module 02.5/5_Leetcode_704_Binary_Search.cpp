class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        if(nums[0] != 0){
            return 0;
        }
        
        else{
            int i, ans;
            bool flag = false;

            for(i=0; i<nums.size()-1; i++){
                if(abs(nums[i]-nums[i+1]) == 2){
                    ans = nums[i+1]-1;
                    flag = true;
                }
            }
            if(flag) return ans;
            else return nums.size();
        }
    }
};