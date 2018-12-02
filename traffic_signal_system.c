/******************************************************************************
 
                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
 
*******************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
int main()
{
   
    int east,west,north,south,i=0;
        printf("East-West Signal  ---  North-south Signal\n");
        while (1){
            i++;
            east = rand() % 10;
            west= rand() % 10;
            north = rand() % 10;
            south = rand() % 10;
            int east_west = east+west;
           int north_south = north+south;
           int total = east_west + north_south;
    printf("\t\t\t\t\t\t\t(on iteration = %d : )east = %d west = %d north = %d south =%d\n",i,east,west,north,south);
           
             if(total < 5){
              printf("\n\tTotal bus on 4 roads now is : %d so program terminating.....\n",total);
             
               break;
           }
            if (east_west <= 7 && north_south>7){
                printf("Red Light    \t\t  Green Light\r");
                fflush (stdout);
            }
               
            else if (north_south  <= 7 && east_west > 7){
                printf("Green Light   \t\t   Red Light\r");
                fflush (stdout);
            }
               
            else if (north_south  <= 7 && east_west <= 7){
                if(north_south<east_west){
                    printf("Green Light   \t\t  Red Light\r");
                    fflush (stdout);
                }
                else {
                    printf("Red Light     \t\t Green Light\r");
                    fflush (stdout);
                }
            }
           
           
           
            else if (east_west > 13 && east_west <= 15){
                printf("Yellow Light    \t\t  Red Light\r");
                fflush (stdout);
            }
           
        else if (north_south > 13 && north_south <= 15){
                printf("Red Light   \t\t  Yellow Light\r");
                fflush (stdout);
        }
               
               
        else if (east_west>15 && north_south<10){
            printf("Green Light   \t\t  Yellow Light\r");
            fflush (stdout);
        }
        else if(north_south>15 && east_west<10){
            printf("Yellow Light    \t\t  Green Light\r");
            fflush (stdout);
        }
        else{
           if(north_south>east_west){
               printf("Red Light   \t\t   Green Light\r");
               fflush (stdout);
           } else {
               printf("Green Light   \t\t   Red Light\r");
               fflush (stdout);
           }
        }
    }
 
    return 0;
}
