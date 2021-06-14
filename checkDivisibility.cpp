//Function to check the number of values divisible in the range of A and B
    int countDivisibles(int A, int B, int M) {
        // code here
        if(A%M==0)
          return ((B/M)-(A/M)+1);
        return ((B/M)-(A/M));
    }
