class Solution {
public:
    int majorityElement(vector<int> &num) {
        int result = 0;
        int count = 0;
        for(int i = 0; i < num.size(); i++){
            if(count == 0){
                count++;
                result = num[i];
            }
            else{
                if(result == num[i])
                    count++;
                else
                    count--;
            }
        }
        return result;
    }
};