class Solution {
public:

    void merge(vector<int> &nums, int l, int r, int mid){
        int i, j;

        int left_size = mid-l+1;
        vector<int> L;

        int right_size = r-mid;
        vector<int> R;


        for(i=l; i<=mid; i++){
            L.push_back(nums[i]);
        }

        for(i=mid+1; i<=r; i++){
            R.push_back(nums[i]);
        }

        L.push_back(INT_MAX);
        R.push_back(INT_MAX);

        int lp = 0;
        int rp = 0;

        for(i=l; i<=r; i++){
            if(L[lp] <= R[rp]){
                nums[i] = L[lp];
                lp++;
            }
            else{
                nums[i] = R[rp];
                rp++;
            }
        }
    }

    void mergeSort(vector<int> &nums, int l, int r){

        if(l == r) return;          // Base Case //
        
        int mid = (l+r)/2;
        mergeSort(nums, l, mid);
        mergeSort(nums, mid+1, r);
        merge(nums, l, r, mid);
    }

    vector<int> sortArray(vector<int>& nums){
        mergeSort(nums, 0, nums.size()-1);
        return nums;
    }
    
};