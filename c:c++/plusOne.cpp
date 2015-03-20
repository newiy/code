class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        vector<int> result;
        int c = 1;
        for(int i = digits.size()-1; i >=0; i--){
            c += digits[i];
            result.insert(result.begin(), c%10);
            c /= 10;
        }
        if(c > 0)
            result.insert(result.begin(), c%10);
        return result;
    }
};