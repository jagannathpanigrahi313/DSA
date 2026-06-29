# Lecture 020- Single Element in sorted array 

whenever we have to solve in O(log n) TC we use binary search 

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int st = 1, end = A.size()- 2;

        while(st <= end) {
            int mid = st + (end - st) / 2;

            if(A[mid-1] < A[mid] && A[mid] > A[mid + 1]) {
                return mid;
            } else if(A[mid-1] <A[mid]) { //right
               st = mid + 1;
            } else {//left
                end = mid - 1;
            } 
        }
        return -1; 
    }
};
