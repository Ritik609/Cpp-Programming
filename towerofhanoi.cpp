void towerofhanoi(int N,int from,int to,int aux,long long &moves){
    if(N==1){
        cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
        moves++;
        
        return;
    }
    towerofhanoi(N-1,from,aux,to,moves);
    moves++;
    cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;;
    
    towerofhanoi(N-1,aux,to,from,moves);
    
    
}    
    long long toh(int N, int from, int to, int aux) {
        // Your code here
        long long moves=0;
        towerofhanoi(N,from,to,aux,moves);
        return moves;
    }
