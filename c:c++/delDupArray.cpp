class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if(n == 0) return 0;
        int count = 1;
        int prev = A[0];
        for(int i = 1; i < n; i++){
            if(prev != A[i]){
                A[count++] = A[i];
            }
            prev = A[i];
        }
        return count;
    }
};