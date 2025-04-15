class Solution {
    public:
        int romanToInt(string s) {
            reverse(s.begin(), s.end());
            vector<int>m;
            for(char c:s){
             if(c=='I'){
                m.push_back(1);
             }
              if(c=='V'){
                m.push_back(5);
             }
              if(c=='X'){
                m.push_back(10);
             }
              if(c=='L'){
                m.push_back(50);
             }
              if(c=='C'){
                m.push_back(100);
             }
              if(c=='D'){
                m.push_back(500);
             }
              if(c=='M'){
                m.push_back(1000);
             }
            }
            int sum=0;
            sum=sum+m[0];
            for(int i=1;i<m.size();i++){
                if(m[i]<m[i-1]){
                    sum=sum-m[i];
                }
                else{
                    sum=sum+m[i];
                }
            }
            return sum;
        }
    };