#include <stdio.h>
#include<math.h>

void main()
{
    int n,d[8],a,b,c=0,j,i=0;
    printf("Enter no. of elements in queue : \n");
    scanf("%d",&n);
    printf("enter value of initial head position :\n");
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        printf("Enter Value of Cylinder %d \n",i+1);
        scanf("%d",&d[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {

            if(d[i]<d[j])
            {
                b=d[i];
                d[i]=d[j];
                d[j]=b;
            }

        }
    }

    for(i=0;i<n;i++)
    {
        if(d[i]>a)
        {
            j=i;
            break;
        }
    }

    c=0;
    b=0;

    do
    {
        c+=abs(b-d[j]);
        b=d[j];
        j++;
    }while(j<n);

    c=c+a;
    printf("Total Head Movement = %d Cylinders\n",c);
}

