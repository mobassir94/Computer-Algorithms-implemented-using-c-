    #include<stdio.h>
    /*
      Ackermann Function is a function with two arguments,each of which can be assigned any nonnegative integer:
      0,1,2...n THIS FUNCTION IS DEFINED AS FOLLOWS:
      (Ackermann Function) :
      1.if m==0,then Ackermann(m,n)=n+1
      2.if m != 0 but n==0,then Ackermann(m,n)=Ackermann(m-1,1)
      3.if m != 0 and n!=0,then Ackermann(m,n) = Ackermann(m-1,Ackermann(m,n-1))

      our task is to solve this problem

    */
   long long Ackermann(int m,int n)
    {
         if(m==0) return n+1;
         if (n==0)return Ackermann(m-1,1);
         return Ackermann(m-1,Ackermann(m,n-1));

    }
    int main()
    {
       int m,n;
       long long store;

       printf("Input Ackermann's function m,n below:\n");
       while(~scanf("%d%d",&m,&n))  {
      store = Ackermann(m,n);
      printf("Result: %ld\n",store);
       printf("Input Ackermann's function m,n below:\n");
       }
        return 0;
    }
