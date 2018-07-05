#include<stdio.h>

int main()
{
    char item,bkash;
    //priceList


    printf("WELCOME TO MOU STORE\n");
    printf("World's biggest Fruits store\n");
    int total=0;

    while(1){

        int mango =90,apple=80,watermelon=100,lichi=50 ,orange=90;
        int x, subtotal1=0,subtotal2=0,subtotal3=0,subtotal4=0,subtotal5=0;
        printf("\nEnter choice\n");
        printf("[1] for Mango\n");
        printf("[2] for Apple\n");
        printf("[3] for Watermelon\n");
        printf("[4] for Lichi\n");
        printf("[5] for Orange\n");
        printf("[q] to quit shoping\n");
        item=getch();


        if((item=='q')||(item=='Q')){
            printf("Your total bill: =%d",total);
            printf("Thank You");
            exit(0);
        }

        if(item=='1') {
        printf("shopped:1 kg Mango =90 Taka\n",mango);
        printf("how many?\n");
        scanf("%d",&x);
        subtotal1=mango*x;
        printf("Sub total:Mango=%d",subtotal1);
        total=total+subtotal1;

        }

        if(item=='2'){
        printf("Shopped:1kg Apple=80Tk \n",apple);
        printf("How many?\n");
        scanf("%d",&x);
        subtotal2=apple*x;
        printf("Sub total:Apple=%d",subtotal2);
        total=total+subtotal2;
        }
        if(item=='3') {

        printf("shopped:1 Watermelon=100Tk\n",watermelon);
        printf("How many?\n");
        scanf("%d",&x);
        subtotal3=watermelon*x;
        printf("Sub total:Watermelon=%d",subtotal3);
        total=total+subtotal3;
        }

        if(item=='4'){
        printf("Shopped:1kg Lichi=50Tk\n",lichi);
        printf("How many?\n");
        scanf("%d",&x);
        subtotal4=lichi*x;
        printf("Sub total:Lichi=%d",subtotal4);
        total=total+subtotal4;
        }

        if(item=='5') {
        printf("shopped:1kg Orange=90Tk\n",orange);
        printf("How many?\n");
        scanf("%d",&x);
        subtotal5=orange*x;
        printf("Sub total:orange=%d",subtotal5);
        total=total+subtotal5;
        }

        printf("\nDo you wish to continue shopping? Y / N");
        item=getch();



        if((item== 'n' || item== 'N' )){

                printf("\n\n\nYour total bill: = %d",total);
                total = total- (total* .25);
                printf("\nYour total bill after discount(25%): = %d",total);


                printf("\nDo Are you a Bkash User ? Y / N");

                bkash=getch();
                if(bkash=='Y' || bkash == 'y'){
                    total = total- (total* .10);
                }
                 total = total+ (total* .15);
                printf("\nYour Final bill after VAT(15%): = %d",total);

                printf("\nThank You");
                // total= total- total/
                break;
        }


        }






}
