class Solution {
public:
   
        int getPivot(vector<int>& nums, int n) {
        int s = 0, e = n - 1;
        int mid = s + (e - s) / 2;
        
        while (s < e) {
            if (nums[mid] >= nums[0]) {
                s = mid + 1;
            } else {
                e = mid;
            }
            mid = s + (e - s) / 2;
        }
        return s;
    }

    int binarySearch(vector<int>& nums, int s, int e, int target) {
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) return mid;
            else if (nums[mid] < target) s = mid + 1;
            else e = mid - 1;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = getPivot(nums, n);

        if (nums[pivot] <= target && target <= nums[n - 1]) {
            return binarySearch(nums, pivot, n - 1, target);
        } else {
            return binarySearch(nums, 0, pivot - 1, target);
        }
    }
};