///program to compute how long does it take to compute both register and non-register variable
#include<stdio.h>
#include<time.h>
int i; ///global variables aren't transformed into register variable
int main()
{
    register int j;
    int k;
    time_t start,end;
    start = clock();
    for(k=0 ; k<100; k++)
        for(i=0; i<32000; i++);
    end=clock();
    printf("Start: %ld and FInish %ld\n",start,end);
    printf("Non-Register loop: %ld ticks\n",end-start);

    start=clock();
    for(k=0; k<100; k++)
        for(j=0; j<3200; j++);\

        end = clock();
    printf("Register Loop : %ld ticks \n",end-start);
    printf("Start: %ld and FInish %ld\n",start,end);

    return 0;

    return 0;
}
