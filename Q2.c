#include<stdio.h>

void main(){
    int choice,bingsu,ramen,sushi,kimchi;


    do{
    printf("Press 1 for BINGSU...\n");
    printf("Press 2 for RAMEN..\n");
    printf("Press 3 for KIMCHI..\n");
    printf("Enter your SUSHI..\n");
    scanf("%d",&choice);

    switch(choice){
    case 1: printf("Nutella bingsu..\n");
	    printf("mango bingsu..\n");
	    printf("musk-melon bingsu..\n");
	    printf("Enter your choice..\n");
	    scanf("%d",&bingsu);
	    
	    switch(bingsu){
	    case 1: printf("1-Nutella bingsu is getting ready..\n");
		break;
		case 2: printf("2-Mango bingsu is getting ready..\n");
		break;
		case 3: printf("3-Musk-melon bingsu is getting ready..\n");
		break;	    
		}
		break;
    case 2: printf("Spicy ramen..\n");
	    printf("Sweet ramen..\n");
	    printf("Extra spicy ramen..\n");
	    printf("Enter your choice..\n");
	    scanf("%d",&ramen);
	    
	    switch(ramen){
	    case 1: printf("1-Spicy ramen is getting ready..\n");
		break;
		case 2: printf("2-Sweet ramen is getting ready..\n");
		break;
		case 3: printf("3-Extra-spicy ramen is getting ready..\n");
		break;	    
		}
		break;
    case 3: printf("Sushi veg..\n");
	    printf("Non-veg sushi..\n");
	    printf("Enter your choice..\n");
	    scanf("%d",&sushi);
	    
	     switch(sushi){
	    case 1: printf("1-your veg sushi is getting ready..\n");
		break;
		case 2: printf("2-your non-veg sushi is getting ready..\n");
		break;	    
		}
		break;
    case 0:printf("Visit Again");
	   break;
    default:printf("invalid choice..\n");
    }

    }while(choice!=0);
}
