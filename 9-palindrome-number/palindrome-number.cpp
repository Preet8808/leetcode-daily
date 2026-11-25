class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        int num = x;
        long reverse = 0;

        while(x>0){
            int temp = x % 10;
            reverse = reverse * 10 + temp;
            x /= 10;
        }
        return num == reverse;
    }
};
