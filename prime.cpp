vector<int> sieveOfEratosthenes(int N)
    {
        // Write Your Code here
        int v[N+1]={0};
        vector<int> v1;
        for(int i=2;i<=N;i++){
            if(v[i]==0){
                for(int j=i*i;j<=N;j=j+i){
                    v[j]=1;
                }
            }
        }
        for(int i=2;i<=N;i++)
           if(v[i]==0)
             v1.push_back(i);
       return v1;
    }
