class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int totalSize = n1 + n2;
        int mid = totalSize / 2;
        
        // Merge both arrays up to the median point
        int i = 0, j = 0, count = 0;
        double current = 0, prev = 0;
        
        while (count <= mid) {
            prev = current;
            if (i < n1 && (j >= n2 || nums1[i] <= nums2[j])) {
                current = nums1[i];
                i++;
            } else {
                current = nums2[j];
                j++;
            }
            count++;
        }
        
        // If the total number of elements is even, the median is the average of the last two elements encountered.
        // If the total number of elements is odd, the median is the last element encountered.
        if (totalSize % 2 == 0) {
            return (prev + current) / 2;
        } else {
            return current;
        }
    }
};