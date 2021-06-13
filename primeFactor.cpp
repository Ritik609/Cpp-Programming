//Function to find the largest prime factor
    long long int largestPrimeFactor(int N){
        // code here
       vector<long> v;
        while(N%2==0){
            v.push_back(2);
            N=N/2;
        }
        for(int i=3;i<=N;i=i+2){
            while(N%i==0){
                v.push_back(i);
                N=N/i;
            }
            
        }
    
    return v[v.size()-1];    
    }
