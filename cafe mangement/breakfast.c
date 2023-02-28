#include<stdio.h>

int breakfast(int total)
{
    int quantity,c,s;
    tys:
    printf("breakfast\n");
    printf("iteams\n");
    printf("\n1. puri\n2. uthampam\n3. idli sambar\n4. pitha\n5. samosa\n6. sambar wada\n7. chole bhature");
    printf("chiose your dish");
    scanf("%d",&c);
    switch (s)
    {
    case 1:
    
    switch(c)
    {
        case 1:
        printf("puri");
        total=quantity*200;
        printf("enter the quantity");
        scanf("%d",&quantity);
        printf("\ntotal cost is%d\n",total);
        break;

        case 2:
        printf("uthampam");
        total=quantity*30;
        printf("\ntotal cost is%d\n",total);
        break;

        case 3:
        printf("idli sambar");
        printf("enter the quantity");
        scanf("%d",&quantity);
        total=quantity*40;
        printf("\ntotal cost is%d\n",total);
        break;

        case 4:
        printf("pitha");
        total=quantity*20;
        printf("\ntotal cost is%d\n",total);
        break;

        case 5:
        printf("samosa");
        total=quantity*30;
        printf("\ntotal cost is%d\n",total);
        break;

        case 6:
        printf("tea");
        total=quantity*7;
        printf("\ntotal cost is%d\n",total);
        break;

        case 7:
        printf("chole bhature");
        total=quantity*30;
        printf("\ntotal cost is%d",total);
        break;
        default:
        printf("if wnat to order more from breakfast press any key except 1");
        break;

    }
    break;

        default:
        goto tys;
        break;
    }
    }

    
