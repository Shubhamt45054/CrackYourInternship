class Solution {
public:
    int calculate(string s) {
        stack<int> num,num1;
        stack<char> opr,opr1;
        for(int i=0;i<s.size();i++){
            if(s[i]==' ') continue;
            int val=0;
            while(i<s.size() && (s[i]-'0')>=0){
                val=val*10+(s[i]-'0');
                i++;
            }
            while(i<s.size() && s[i]==' ') i++;

            if(!opr.empty()){
                if(opr.top()=='*'){
                    int cc=num.top();
                    num.pop();
                    cc*=val;
                    opr.pop();
                    num.push(cc);
                }
                else if(opr.top()=='/'){
                    int cc=num.top();
                    num.pop();
                    cc/=val;
                    opr.pop();
                    num.push(cc);
                }
                else
                num.push(val);
            }
            else
             num.push(val);
            
            if(i!=s.size())
            opr.push(s[i]);
            // cout<<num.top()<<" "<<opr.top()<<endl;
        }
        while(!num.empty()){
            num1.push(num.top());
            num.pop();
        }
        while(!opr.empty()){
            opr1.push(opr.top());
            opr.pop();
        }

        while(num1.size()!=1){
            int a=num1.top();
            num1.pop();
            int b=num1.top();
            num1.pop();
            // cout<<a<<" "<<b<<endl;
            // cout<<opr.top()<<endl;
            if(opr1.top()=='+'){
                a+=b;
            }
            if(opr1.top()=='-'){
                a-=b;
            }
            opr1.pop();
            num1.push(a);
        }
        return num1.top();
    }
};
