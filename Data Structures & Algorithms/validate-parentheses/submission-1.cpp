class Solution {
public:
    bool isValid(string s) {
        stack<char> n;
        int size = s.size();
        int i = 0;
        while(i < size){
            char ch = s[i];
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
                n.push(ch);
            else if(s[i]==')' || s[i]==']' || s[i]=='}'){
                if(n.empty()) return false; // if stack empty no matching
                // want to check if the brackets match
                char top = n.top();
                if((ch == ')' && top != '(') ||
                    (ch == ']' && top != '[') ||
                    (ch == '}' && top != '{')){
                    return false; // mismatch brackets
                }
                
                n.pop(); // if fall throuhg to here means theres a match

            } 
            i++;
        }

        if(!n.empty())
            return false;
        return true;
        

    }
};
