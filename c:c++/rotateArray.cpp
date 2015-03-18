class Solution {
public:
    void swap(int &a, int &b){
        int temp = a;
        a = b;
        b = temp;
    }
    void rotate(int nums[], int n, int k) {
        if(nums == NULL || k == 0 || n == 0) return;
        int temp = k;
        if(k > n){
            temp = k % n;
        }
        int i = 0;
        int j = n-1;
        while(i < j){
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
        
        i = 0;
        j = temp - 1;
        while(i < j){
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
        
        i = temp;
        j = n-1;
        while(i < j){
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }
};