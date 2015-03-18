class Solution {
public:
    int atoi(string str) {
        if(str == "") return 0;
        int i = 0;
        bool positive = true;
        int result = 0;
        while(str[i] == ' ') i++;
        if(str[i] == '+'){
            positive = true;
            i++;
        }
        else if(str[i] == '-'){
            positive = false;
            i++;
        }
        if(!isdigit(str[i])) return 0;
        while(isdigit(str[i])){
            if(positive && result > INT_MAX/10) return INT_MAX;
            if(!positive && -result < INT_MIN/10) return INT_MIN;
            if(positive && result == INT_MAX/10 && (str[i]-'0') >= 7) return INT_MAX;
            if(!positive && -result == INT_MIN/10 && (str[i]-'0') >= 8) return INT_MIN;
            result = result * 10 + str[i] - '0';
            i++;
        }
        return (positive ? result: -result);
    }
};