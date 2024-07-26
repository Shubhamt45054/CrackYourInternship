int ceilSearch(int arr[], int n,int x) 
{ 
   for(int i=0;i<n;i++){
     
     if(x<=arr[i]) return arr[i];
     
       }
  
    return -1; 
} 
