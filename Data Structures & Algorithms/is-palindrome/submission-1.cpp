class Solution {
public:
    bool isPalindrome(string s) {
        string limpio="";
        for(char c: s){
            if(isalnum(c)){
                limpio+=tolower(c);
            }
        }

        int l=0;
        int r=limpio.size()-1;
        while(l<r){
            if(limpio[l]!=limpio[r]){
                return false;
            } 

            l++;
            r--;
        }
        return true;
    }
};
