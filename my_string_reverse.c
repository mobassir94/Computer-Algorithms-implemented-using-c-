 /*
 problem: write a user defined function to reverse any string
 */
    #include<stdio.h>
    #include<string.h>
    int mystrrev(char *p){
        int i;
        i=strlen(p);
        char *q;
        q=p+(i-1);
        while(*q){
            printf("%c",*q);
            if(*q==p[0])break;
            *q--;
        }

    }
    int main()
    {
     char str[100];
     gets(str);
     mystrrev(str);
        return 0;
    }


