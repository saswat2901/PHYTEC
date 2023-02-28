#include<stdio.h>
int dinner(int total)
{
    int quantity,c,s;
    tu:
    printf("dinner\n");
    printf("\n1.roti\n2.dal\n3.paneer sabji\n4.chicken sabji\n5.allo sabji\n6.beans sabji\n7.swwet");
    printf("enter the choice");
    scanf("%d",&c);
    printf("enter the quntyty");
    scanf("%d",&quantity);
    printf("if wnat to order more from breakfast press any key except 1");
    scanf("%d",&s);
    switch(s)
    {
    switch(c)
    {
        case 1:
        
            printf("roti");
            total= quantity*5;
            printf("total price for quantity %d is %d",quantity,total);
            break;
        case 2:
             printf("dal");
            total= quantity*20;
            printf("total price for quantity %d is %d",quantity,total);
            break;
        case 3:
             printf("panneer sabji");
            total= quantity*40;
            printf("total price for quantity %d is %d",quantity,total);
            break;
        case 4:
            printf("chicken sabji");
            total= quantity*45;
            printf("total price for quantity %d is %d",quantity,total);
            break;
        case 5:
            printf("aloo sabji");
            total= quantity*40;
            printf("total price for quantity %d is %d",quantity,total);
            break;
        case 6:
            printf("beans sabji");
            total= quantity*20;
            printf("total price for quantity %d is %d",quantity,total);
            break;
        case 7:
            printf("sweet");
            total= quantity*5;
            printf("total price for quantity %d is %d",quantity,total);
            break;
        default :
            printf("invalid input");
          
            break;
        }
           break;
    
    default:
     goto tu;
     break;
    }
    }
