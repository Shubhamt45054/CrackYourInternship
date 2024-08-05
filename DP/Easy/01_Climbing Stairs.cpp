class Solution {
public:
    int climbStairs(int n) {
      int a=1;
      if(n==1) return a;
      int b=2;
      if(n==2) return b;
      n=n-2;
      while(n--){
          int temp=b;
          b=a+b;
          a=temp;
      }

      return b; 
    }
};
