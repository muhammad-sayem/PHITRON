class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> v;

        sort(nums.begin(), nums.end());
        int i;

        for(i=0; i<nums.size(); i++){
            if(nums[i] == target) v.push_back(i);
        }
        return v;
    }
};