int tour(petrolPump p[],int n)
    {
       int ans=0;
       int cnt=0;
       int tp=0;
       int td=0;
       for(int i=0;i<2*n;i++){
           int pp=p[i%n].petrol;
           int dis=p[i%n].distance;
           tp+=pp;
           td+=dis;
        //   cout<<tp<<" "<<td<<endl;
           while(td>tp && ans<=i){
               td-=p[ans%n].distance;
               tp-=p[ans%n].petrol;
               ans++;
           }
           if((i-ans+1)==n) return ans;
       }
       
       return -1;
    }
