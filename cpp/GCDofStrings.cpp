class Solution {
    public:
        string gcdOfStrings(string str1, string str2) {
            string gcd;
            for(int i=0;i<str1.length();i++){
                if(str1[i] == str1[0]) break;
                gcd += str1[i];
            }
            string newstr;
            for(int i=0;i<str2.length()/gcd.length();i++){
                newstr += gcd;
            }
            if(newstr == str2)
                return gcd;
        }
    };