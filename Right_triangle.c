/*
Problem 3

A long time ago, the Egyptians figured out that

a triangle with sides of length 3, 4, and 5 had a

right angle as its largest angle. You must determine if other triangles have a similar prop erty.

Input

Input represents several test cases, followed by a

line containing ‘ 0 0 0’. Each test case has three

positive integers, less than 30,000, denoting the

lengths of the sides of a triangle.

Output

For each test case, a line containing ‘ right’ if the

triangle is a right triangle, and a line containing

‘ wrong’ if the triangle is not a right triangle.

Sample Input

6 8 10

25 52 60

5 12 13

0 0 0

Sample Output

right

wrong

right
*/

#include<stdio.h>

int main()
{
     int a,b,c,ans,ckright;
     scanf("%d %d %d",&a,&b,&c);
     while(a!=0 && b!=0 && c!=0){
           ans=(a*a+b*b);
           ckright=c*c;
           if(ckright==ans)printf("right\n");
           else printf("wrong\n");
         scanf("%d %d %d",&a,&b,&c);
     }

    return 0;
}
