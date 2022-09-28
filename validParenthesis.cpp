class Solution {
public:
    bool isValid(string s) {
       stack<char> st;
        if(s.length()%2!=0) return false;
        bool o=false;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                st.push(s[i]);
            }
            else if ((s[i]==')'||s[i]==']'||s[i]=='}')){
                if(st.empty()==true) return false;
                else if(s[i]==')'&&st.top()=='('){
                    st.pop();
                }
                else if(s[i]==']'&&st.top()=='['){
                    st.pop();
                }
                else if(s[i]=='}'&&st.top()=='{'){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        
        if(st.empty()==false){
            return false;
        }
        else{
            return true;
        }
        
        
    }
};