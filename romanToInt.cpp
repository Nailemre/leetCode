class Solution {
public:
    int sum=0;
    int symbolToValue(char s){
        if(s=='I') return 1;
        else if(s=='V')return 5;
        else if(s=='X')return 10;
        else if(s=='L')return 50;
        else if(s=='C')return 100;
        else if(s=='D')return 500;
        else if(s=='M')return 1000;
        return 0;
    }
    int romanToInt(string s) {
        
       for(int i=0;i<s.length();++i){
           if(symbolToValue(s[i])<symbolToValue(s[i+1])){
               sum+=symbolToValue(s[i+1])-symbolToValue(s[i]);
                   i++;
           }
           else
               sum+=symbolToValue(s[i]);
       }
        return sum;
    };
};