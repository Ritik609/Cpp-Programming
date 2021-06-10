 //Function to find all possible unique subsets.
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        // code here 
        sort(arr.begin(),arr.end());
       set<vector<int>> m;
        vector<vector<int>> v1;
        for(int i=0;i<(1<<n);i++){
           vector<int> v;
            for(int j=0;j<n;j++){
                if((i & (1<<j))!=0)
                  v.push_back(arr[j]);
            }
            if(m.count(v)==0){
                m.insert(v);
                v1.push_back(v);
            }
            
        }
        sort(v1.begin(),v1.end());
        return v1;
    }
