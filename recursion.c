///A simple example of Recursion
    #include <stdio.h>

    int add(int a, int b)
    {
        if(a+b>20) { return a+b; }
       if(a+b <=20) add(a+1, b+1);
        printf("%d\n",a+b);
     //return add;
    }

    int main()
    {
        int a, b, sum;
        scanf("%d %d", &a, &b);
        sum = add(a, b);
        printf("Ans : %d\n", sum);
        return 0;
    }
