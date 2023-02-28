#include<stdio.h>

int snacks(int total)
{
    int quantity,c,s;
    jat:
    printf("snacks\n");
    printf("\n1.aloochop\n2.samosa\n3.wada\n4.papdi\n5.dal wada\n6.cream bread\n7.chuda mixture");
    printf("enter the dish");
    scanf("%d",&c);
     printf("enter the quantity");
    scanf("%d",&quantity);
      printf("if wnat to order more from breakfast press any key except 1");
    scanf("%d",&s);
    switch(s)
    {
    switch(c)
    {
        case 1:
        printf("aloochop");
          total=quantity*5;
        printf("cost for %d aloochop is %d",quantity,total);
        break;
        case 2:
        printf("samosa");
          total=quantity*5;
        printf("cost for %d aloochop is %d",quantity,total);
        break;
        case 3:
        printf("wada");
          total=quantity*5;
        printf("cost for %d aloochop is %d",quantity,total);
        break;
        case 4:
        printf("papdi");
          total=quantity*5;
        printf("cost for %d aloochop is %d",quantity,total);
        break;
        case 5:
        printf("dal wada");
          total=quantity*5;
        printf("cost for %d aloochop is %d",quantity,total);
        break;
        case 6:
        printf("cvream bread");
          total=quantity*5;
        printf("cost for %d aloochop is %d",quantity,total);
        break;
        case 7:
        printf("chuda mixture");
          total=quantity*5;
        printf("cost for %d aloochop is %d",quantity,total);
        break;
        default:
        printf("invalid input");
       
        break;
    }
    break;
    
  default:
     goto jat;
     break;
}
}