int binary_to_decimal(string str)
		{
		    // Code here.
		    int b=1;
		    int res=0;
		    for(int i=str.size()-1;i>=0;i--){
		        res=res+b*(str[i]-'0');
		        b*=2;
		    }
		    return res;
		}
