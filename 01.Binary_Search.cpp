class Solution {
public:
    /**
     * @param nums: An integer array sorted in ascending order
     * @param target: An integer
     * @return: An integer
     */
    int findPosition(vector<int> &nums, int target) {
        // write your code here
        if(nums.size()<1)
            return -1;
        int start = 0;
        int end = nums.size()-1;
        int mid;
        int getMid;
        while(start+1<end){
            mid = (end-start)/2+start;
            getMid  = nums[mid];
            if(getMid>target)
                end = mid-1;
            if(getMid<target)
                start = mid+1;
            if(getMid==target)
                return mid;
        }
        if(nums[start]==target)
            return start;
        if(nums[end]==target)
            return end;
        else
            return -1;
    }
};
