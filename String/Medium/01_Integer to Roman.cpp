class Solution {
public:
    string intToRoman(int num) {

        string ans="";

        if(num==0) return ans;

            if(num>=1000){  
                num-=1000;
                ans+='M';
                ans+=intToRoman(num);
            }
            else if(num>=500){
                if(num>=900){
                    num=num-900;
                    ans+="CM";
                    ans+=intToRoman(num);
                }
                else{
                num-=500;
                ans+='D';
                ans+=intToRoman(num);
                }
            }
            else if(num>=100){
                if(num>=400){
                    num=num-400;
                    ans+="CD";
                     ans+=intToRoman(num);
                }
                else{
                num-=100;
                ans+='C';
                ans+=intToRoman(num);
                }     
            }
            else if(num>=50){
                if(num>=90){
                    num=num-90;
                    ans+="XC";
                    ans+=intToRoman(num);
                }
                else{
                num-=50;
                ans+='L';
                ans+=intToRoman(num);
                }   
            }
            else if(num>=10){
                 if(num>=40){
                    num=num-40;
                    ans+="XL";
                    ans+=intToRoman(num);
                }
                else{
                num-=10;
                ans+='X';
                ans+=intToRoman(num);
                } 
            }
            else if(num>=5){
                if(num==9){
                    ans+="IX";
                }
                else{
                num-=5;
                ans+='V';
                ans+=intToRoman(num);
                }    
            }
            else{
                if(num==4){
                    ans+="IV";
                }
                else{
                num-=1;
                ans+='I';
                ans+=intToRoman(num);
                } 
            }

        return ans;
    }
};
