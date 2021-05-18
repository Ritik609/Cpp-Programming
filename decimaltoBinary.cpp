void toBinary(int N)
{
    // your code here
    int arr[32];
    int j=0;
    while(N>0){
        arr[j]=N%2;
        //v.push_back(r);
        
        N/=2;
        j++;
    }
    for(int i=j-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    
        
}
