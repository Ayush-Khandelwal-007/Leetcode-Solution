class Solution {
public:
    int reverse(int x) {
    long long reversedValue = 0;
    bool isNegative = false;
    if(x<0)
    {
        isNegative = true;
        x = abs(x); 
    }
    
    while(x>0)
    {
        reversedValue = (reversedValue*10) + x%10;
        x = x/10;
    }
    if(reversedValue <= INT_MIN || reversedValue >= INT_MAX)return 0; //For the condition if reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1]
    
    return isNegative ? (int)reversedValue * -1 : (int)reversedValue;
    }
};