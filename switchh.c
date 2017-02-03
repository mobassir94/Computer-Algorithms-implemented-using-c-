///problem : write a program to check if users input is a digit,punctuation or letter(use switch case)
#include<stdio.h>
int main()
{
    char ch=0;
    int d=0,p=0,l=0;
    printf("Enter digit,punctuation or letters below:\n");
ch = getche();
    while(ch != '\r'){

        switch(ch){
       case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
               d++;
               break;
        case '.':
        case ',':
        case '?':
        case ';':
        case ':':
        case '!':
               p++;
               break;

               default:
               l++;
               break;
        }
        ch = getche();
    }
    printf("digit: %d\n punctuation: %d\n letters: %d\n",d,p,l);

    return 0;
}
