
#include<stdio.h>
#include<conio.h>
 int y,v,w;
void Dhaka_to_cumilla(int n)
{
    if(n>5)
    printf("you can't buy more than 4.\n please refresh ");
    if(n<5){
  int m=600,h=205,z;
  char a[4],r[4],p[4],q[4];
    printf("AC seat per person 600tk with 20tk bank charge  \n");
      printf("AC seat per person 205tk with 20tk bank charge \n");
  printf("please select your coach type : 1.AC / 2.Shovon \n");
  printf("Enter Digit 1 or 2 : ");
  scanf("%d",&z);
   switch(z)
   {
       case 1:
         printf("thank your for selecting AC coach \n");
         break;
       case 2:
       printf("thank you for selecting Shovon chair \n ");
       break;
       default :
       printf("your enter numbr is wrong \n");
   }
   printf("\n");

   if(n==1){
       printf("enter your seat name(like : A1 A2 A3) : ");
       scanf("%s",&a);
       printf("your seat is : %s\n",a);
   }

   if(n==2){
        printf("enter your seat name(like : A1 A2 A3) : ");
       scanf("%s %s",&a,&r);
       printf("your seat is : %s %s\n",a,r);
   }
    if(n==3) {
         printf("enter your seat name(like : A1 A2 A3) : ");
    scanf("%s%s%s",&a,&r,&p);
    printf("your seat is :%s %s% s\n",a,r,q);
    }
    if(n==4){
         printf("enter your seat name(like : A1 A2 A3) : ");
    scanf("%s%s%s%s",&a,&r,&p,&q);
    printf("your seat is : %s %s %s %s\n",a,r,p,q);
    }
     if(z==1){
    int k = (n*600)+20*n;
    printf("your total amount is : %d\n",k);
    printf("you can payment by 1.Bksh\n2.Nagad\n 3.Credit/Debit card\n");
     printf("press digit which way you want to pay : ");
    scanf("%d",&y);
    switch(y){
        case 1:
        printf("enter your bkash number : ");
        scanf("%d",&v);
        printf("enter 6 digit PIN : ");
            scanf("%d",&v);
            printf("\n\n\n welcome \n your process successfull");
            break;
        case 2:
        printf("enter your Nagad number : ");
        scanf("%d",&v);
        printf("enter 4 digit PIN : ");
            scanf("%d",&v);
            printf("\n\n\n welcome \n your process successfull");
            break;
        case 3:
        printf("enter your card number : ");
        scanf("%d",&v);
        printf("enter 5 digit PIN : ");
            scanf("%d",&v);
        printf("enter your CSC code : ");
        scanf("%d",&w);
            printf("\n\n\n welcome \n your process successfull");
            break;
        default :
            printf("please enter valid number \n");

    }
     }
    if(z==2){
          int k = (n*205)+20*n;
    printf("your total amount is : %d\n",k);
    printf("you can payment by \n\n 1.Bksh\n 2.Nagad\n 3.Credit/Debit card\n\n");



    printf("press digit which way you want to pay : ");
    scanf("%d",&y);
    switch(y){
        case 1:
        printf("enter your bkash number : ");
        scanf("%d",&v);
        printf("enter 6 digit PIN : ");
            scanf("%d",&v);
            printf("\n\n\n welcome \n your process successfull");
            break;
        case 2:
        printf("enter your Nagad number : ");
        scanf("%d",&v);
        printf("enter 4 digit PIN : ");
            scanf("%d",&v);
            printf("\n\n\n welcome \n your process successfull");
            break;
        case 3:
        printf("enter your card number : ");
        scanf("%d",&v);
        printf("enter 5 digit PIN : ");
            scanf("%d",&v);
        printf("enter your CSC code : ");
        scanf("%d",&w);
            printf("\n\n\n welcome \n your process successfull");
            break;
        default :
            printf("please enter valid number \n");

    }

     }
    }

}


void Dhaka_to_chittagong(int n)
{
    if(n>5)
    printf("you can't buy more than 4.\n please refresh ");
    if(n<5){
  int m=1200,h=400,z;
  char a[4],r[4],p[4],q[4];
    printf("AC seat per person 1200tk with 20tk bank charge  \n");
      printf("AC seat per person 400tk with 20tk bank charge \n");
  printf("please select your coach type : 1.AC / 2.Shovon \n");
   printf("Enter Digit 1 or 2 : ");
  scanf("%d",&z);
   switch(z)
   {
       case 1:
         printf("thank your for selecting AC coach \n");
         break;
       case 2:
       printf("thank you for selecting Shovon chair \n ");
       break;
       default :
       printf("your enter numbr is wrong \n");
   }
   printf("\n");

   if(n==1){
       printf("enter your seat name(like : A1 A2 A3) : ");
       scanf("%s",&a);
       printf("your seat is : %s\n",a);
   }

   if(n==2){
        printf("enter your seat name(like : A1 A2 A3) : ");
       scanf("%s%s",&a,&r);
       printf("your seat is : %s %s\n",a,r);
   }
    if(n==3) {
         printf("enter your seat name(like : A1 A2 A3) : ");
    scanf("%s%s%s",&a,&r,&p);
    printf("your seat is :%s %s %s\n",a,r,q);
    }
    if(n==4){
         printf("enter your seat name(like : A1 A2 A3) : ");
    scanf("%s%s%s%s",&a,&r,&p,&q);
    printf("your seat is : %s %s %s %s\n",a,r,p,q);
    }
     if(z==1){
    int k = (n*1200)+20*n;
    printf("your total amount is : %d\n",k);
    printf("you can payment by 1.Bksh\n2.Nagad\n 3.Credit/Debit card\n");
     printf("press digit which way you want to pay : ");
    scanf("%d",&y);
    switch(y){
        case 1:
        printf("enter your bkash number : ");
        scanf("%d",&v);
        printf("enter 6 digit PIN : ");
            scanf("%d",&v);
            printf("\n\n\n welcome \n your process successfull");
            break;
        case 2:
        printf("enter your Nagad number : ");
        scanf("%d",&v);
        printf("enter 4 digit PIN : ");
            scanf("%d",&v);
            printf("\n\n\n welcome \n your process successfull");
            break;
        case 3:
        printf("enter your card number : ");
        scanf("%d",&v);
        printf("enter 5 digit PIN : ");
            scanf("%d",&v);
        printf("enter your CSC code : ");
        scanf("%d",&w);
            printf("\n\n\n welcome \n your process successfull");
            break;
        default :
            printf("please enter valid number \n");

    }
     }
    if(z==2){
          int k = (n*400)+20*n;
    printf("your total amount is : %d\n",k);
    printf("you can payment by \n 1.Bksh\n 2.Nagad\n 3.Credit/Debit card\n");
     printf("press digit which way you want to pay : ");
    scanf("%d",&y);
    switch(y){
        case 1:
        printf("enter your bkash number : ");
        scanf("%d",&v);
        printf("enter 6 digit PIN : ");
            scanf("%d",&v);
            printf("\n\n\n welcome \n your process successfull");
            break;
        case 2:
        printf("enter your Nagad number : ");
        scanf("%d",&v);
        printf("enter 4 digit PIN : ");
            scanf("%d",&v);
            printf("\n\n\n welcome \n your process successfull");
            break;
        case 3:
        printf("enter your card number : ");
        scanf("%d",&v);
        printf("enter 5 digit PIN : ");
            scanf("%d",&v);
        printf("enter your CSC code : ");
        scanf("%d",&w);
            printf("\n\n\n welcome \n your process successfull");
            break;
        default :
            printf("please enter valid number \n");

    }

     }
    }
}


void Dhaka_to_Rajshahi(int n)
{
    if(n>5)
    if(n<5){
    printf("you can't buy more than 4.\n please refresh ");
  int m=800,h=395,z;
  char a[4],r[4],p[4],q[4];
    printf("AC seat per person 800tk with 20tk bank charge  \n");
      printf("AC seat per person 395tk with 20tk bank charge \n");
  printf("please select your coach type : 1.AC / 2.Shovon \n");
   printf("Enter Digit 1 or 2 : ");
  scanf("%d",&z);
   switch(z)
   {
       case 1:
         printf("thank your for selecting AC coach \n");
         break;
       case 2:
       printf("thank you for selecting Shovon chair \n ");
       break;
       default :
       printf("your enter numbr is wrong \n");
   }
   printf("\n");

   if(n==1){
       printf("enter your seat name(like : A1 A2 A3) : ");
       scanf("%s",&a);
       printf("your seat is : %s\n",a);
   }

   if(n==2){
        printf("enter your seat name(like : A1 A2 A3) : ");
       scanf("%s%s",&a,&r);
       printf("your seat is : %s %s\n",a,r);
   }
    if(n==3) {
         printf("enter your seat name(like : A1 A2 A3) : ");
    scanf("%s%s%s",&a,&r,&p);
    printf("your seat is :%s %s %s\n",a,r,q);
    }
    if(n==4){
         printf("enter your seat name(like : A1 A2 A3) : ");
    scanf("%s%s%s%s",&a,&r,&p,&q);
    printf("your seat is : %s %s %s %s\n",a,r,p,q);
    }
     if(z==1){
    int k = (n*800)+20*n;
    printf("your total amount is : %d\n",k);
    printf("you can payment by 1.Bksh\n2.Nagad\n 3.Credit/Debit card\n");
     printf("press digit which way you want to pay : ");
    scanf("%d",&y);
    switch(y){
        case 1:
        printf("enter your bkash number : ");
        scanf("%d",&v);
        printf("enter 6 digit PIN : ");
            scanf("%d",&v);
            printf("\n\n\n welcome \n your process successfull");
            break;
        case 2:
        printf("enter your Nagad number : ");
        scanf("%d",&v);
        printf("enter 4 digit PIN : ");
            scanf("%d",&v);
            printf("\n\n\n welcome \n your process successfull");
            break;
        case 3:
        printf("enter your card number : ");
        scanf("%d",&v);
        printf("enter 5 digit PIN : ");
            scanf("%d",&v);
        printf("enter your CSC code : ");
        scanf("%d",&w);
            printf("\n\n\n welcome \n your process successfull");
            break;
        default :
            printf("please enter valid number \n");

    }
     }
    if(z==2){
          int k = (n*395)+20*n;
    printf("your total amount is : %d\n",k);
    printf("you can payment by \n 1.Bksh\n 2.Nagad\n 3.Credit/Debit card\n");
     printf("press digit which way you want to pay : ");
    scanf("%d",&y);
    switch(y){
        case 1:
        printf("enter your bkash number : ");
        scanf("%d",&v);
        printf("enter 6 digit PIN : ");
            scanf("%d",&v);
            printf("\n\n\n welcome \n your process successfull");
            break;
        case 2:
        printf("enter your Nagad number : ");
        scanf("%d",&v);
        printf("enter 4 digit PIN : ");
            scanf("%d",&v);
            printf("\n\n\n welcome \n your process successfull");
            break;
        case 3:
        printf("enter your card number : ");
        scanf("%d",&v);
        printf("enter 5 digit PIN : ");
            scanf("%d",&v);
        printf("enter your CSC code : ");
        scanf("%d",&w);
            printf("\n\n\n welcome \n your process successfull");
            break;
        default :
            printf("please enter valid number \n");

    }
     }
    }
}

 void cumilla_to_Dhaka(int n)
{
    if(n>5)
    if(n<5){
    printf("you can't buy more than 4.\n please refresh ");
  int m=600,h=205,z;
  char a[4],r[4],p[4],q[4];
    printf("AC seat per person 600tk with 20tk bank charge  \n");
      printf("AC seat per person 205tk with 20tk bank charge \n");
  printf("please select your coach type : 1.AC / 2.Shovon \n");
   printf("Enter Digit 1 or 2 : ");
  scanf("%d",&z);
   switch(z)
   {
       case 1:
         printf("thank your for selecting AC coach \n");
         break;
       case 2:
       printf("thank you for selecting Shovon chair \n ");
       break;
       default :
       printf("your enter numbr is wrong \n");
   }
   printf("\n");

   if(n==1){
       printf("enter your seat name(like : A1 A2 A3) : ");
       scanf("%s",&a);
       printf("your seat is : %s\n",a);
   }

   if(n==2){
        printf("enter your seat name(like : A1 A2 A3) : ");
       scanf("%s%s",&a,&r);
       printf("your seat is : %s %s\n",a,r);
   }
    if(n==3) {
         printf("enter your seat name(like : A1 A2 A3) : ");
    scanf("%s%s%s",&a,&r,&p);
    printf("your seat is :%s%s%s\n",a,r,q);
    }
    if(n==4){
         printf("enter your seat name(like : A1 A2 A3) : ");
    scanf("%s%s%s%s",&a,&r,&p,&q);
    printf("your seat is : %s %s %s %s\n",a,r,p,q);
    }
     if(z==1){
    int k = (n*600)+20*n;
    printf("your total amount is : %d\n",k);
    printf("you can payment by 1.Bksh\n2.Nagad\n 3.Credit/Debit card\n");
     printf("press digit which way you want to pay : ");
    scanf("%d",&y);
    switch(y){
        case 1:
        printf("enter your bkash number : ");
        scanf("%d",&v);
        printf("enter 6 digit PIN : ");
            scanf("%d",&v);
            printf("\n\n\n welcome \n your process successfull");
            break;
        case 2:
        printf("enter your Nagad number : ");
        scanf("%d",&v);
        printf("enter 4 digit PIN : ");
            scanf("%d",&v);
            printf("\n\n\n welcome \n your process successfull");
            break;
        case 3:
        printf("enter your card number : ");
        scanf("%d",&v);
        printf("enter 5 digit PIN : ");
            scanf("%d",&v);
        printf("enter your CSC code : ");
        scanf("%d",&w);
            printf("\n\n\n welcome \n your process successfull");
            break;
        default :
            printf("please enter valid number \n");

    }
     }
    if(z==2){
          int k = (n*205)+20*n;
    printf("your total amount is : %d\n",k);
    printf("you can payment by \n 1.Bksh\n 2.Nagad\n 3.Credit/Debit card\n");
     printf("press digit which way you want to pay : ");
    scanf("%d",&y);
    switch(y){
        case 1:
        printf("enter your bkash number : ");
        scanf("%d",&v);
        printf("enter 6 digit PIN : ");
            scanf("%d",&v);
            printf("\n\n\n welcome \n your process successfull");
            break;
        case 2:
        printf("enter your Nagad number : ");
        scanf("%d",&v);
        printf("enter 4 digit PIN : ");
            scanf("%d",&v);
            printf("\n\n\n welcome \n your process successfull");
            break;
        case 3:
        printf("enter your card number : ");
        scanf("%d",&v);
        printf("enter 5 digit PIN : ");
            scanf("%d",&v);
        printf("enter your CSC code : ");
        scanf("%d",&w);
            printf("\n\n\n welcome \n your process successfull");
            break;
        default :
            printf("please enter valid number \n");

    }
     }
    }
}
void Chittagong_to_Dhaka(int n)
{
    if(n>5)
    printf("you can't buy more than 4.\n please refresh ");
    if(n<5){
  int m=1200,h=400,z;
  char a[4],r[4],p[4],q[4];
    printf("AC seat per person 1200tk with 20tk bank charge  \n");
      printf("AC seat per person 400tk with 20tk bank charge \n");
  printf("please select your coach type : 1.AC / 2.Shovon \n");
   printf("Enter Digit 1 or 2 : ");
  scanf("%d",&z);
   switch(z)
   {
       case 1:
         printf("thank your for selecting AC coach \n");
         break;
       case 2:
       printf("thank you for selecting Shovon chair \n ");
       break;
       default :
       printf("your enter numbr is wrong \n");
   }
   printf("\n");

   if(n==1){
       printf("enter your seat name(like : A1 A2 A3) : ");
       scanf("%s",&a);
       printf("your seat is : %s\n",a);
   }

   if(n==2){
        printf("enter your seat name(like : A1 A2 A3) : ");
       scanf("%s%s",&a,&r);
       printf("your seat is : %s %s\n",a,r);
   }
    if(n==3) {
         printf("enter your seat name(like : A1 A2 A3) : ");
    scanf("%s%s%s",&a,&r,&p);
    printf("your seat is :%s %s %s\n",a,r,q);
    }
    if(n==4){
         printf("enter your seat name(like : A1 A2 A3) : ");
    scanf("%s%s%s%s",&a,&r,&p,&q);
    printf("your seat is : %s %s %s %s\n",a,r,p,q);
    }
     if(z==1){
    int k = (n*1200)+20*n;
    printf("your total amount is : %d\n",k);
    printf("you can payment by 1.Bksh\n2.Nagad\n 3.Credit/Debit card\n");
     printf("press digit which way you want to pay : ");
    scanf("%d",&y);
    switch(y){
        case 1:
        printf("enter your bkash number : ");
        scanf("%d",&v);
        printf("enter 6 digit PIN : ");
            scanf("%d",&v);
            printf("\n\n\n welcome \n your process successfull");
            break;
        case 2:
        printf("enter your Nagad number : ");
        scanf("%d",&v);
        printf("enter 4 digit PIN : ");
            scanf("%d",&v);
            printf("\n\n\n welcome \n your process successfull");
            break;
        case 3:
        printf("enter your card number : ");
        scanf("%d",&v);
        printf("enter 5 digit PIN : ");
            scanf("%d",&v);
        printf("enter your CSC code : ");
        scanf("%d",&w);
            printf("\n\n\n welcome \n your process successfull");
            break;
        default :
            printf("please enter valid number \n");

    }
     }
    if(z==2){
          int k = (n*400)+20*n;
    printf("your total amount is : %d\n",k);
    printf("you can payment by \n 1.Bksh\n 2.Nagad\n 3.Credit/Debit card\n");
     printf("press digit which way you want to pay : ");
    scanf("%d",&y);
    switch(y){
        case 1:
        printf("enter your bkash number : ");
        scanf("%d",&v);
        printf("enter 6 digit PIN : ");
            scanf("%d",&v);
            printf("\n\n\n welcome \n your process successfull");
            break;
        case 2:
        printf("enter your Nagad number : ");
        scanf("%d",&v);
        printf("enter 4 digit PIN : ");
            scanf("%d",&v);
            printf("\n\n\n welcome \n your process successfull");
            break;
        case 3:
        printf("enter your card number : ");
        scanf("%d",&v);
        printf("enter 5 digit PIN : ");
            scanf("%d",&v);
        printf("enter your CSC code : ");
        scanf("%d",&w);
            printf("\n\n\n welcome \n your process successfull");
            break;
        default :
            printf("please enter valid number \n");

    }
     }
    }
}

void Rajshahi_to_Dhaka(int n)
{
    if(n>5)
    printf("you can't buy more than 4.\n please refresh ");
    if(n<5){
  int m=800,h=395,z;
  char a[4],r[4],p[4],q[4];
    printf("AC seat per person 800tk with 20tk bank charge  \n");
      printf("AC seat per person 395tk with 20tk bank charge \n");
  printf("please select your coach type : 1.AC / 2.Shovon \n");
   printf("Enter Digit 1 or 2 : ");
  scanf("%d",&z);
   switch(z)
   {
       case 1:
         printf("thank your for selecting AC coach \n");
         break;
       case 2:
       printf("thank you for selecting Shovon chair \n ");
       break;
       default :
       printf("your enter numbr is wrong \n");
   }
   printf("\n");

   if(n==1){
       printf("enter your seat name(like : A1 A2 A3) : ");
       scanf("%s",&a);
       printf("your seat is : %s\n",a);
   }

   if(n==2){
        printf("enter your seat name(like : A1 A2 A3) : ");
       scanf("%s%s",&a,&r);
       printf("your seat is : %s %s\n",a,r);
   }
    if(n==3) {
         printf("enter your seat name(like : A1 A2 A3) : ");
    scanf("%s%s%s",&a,&r,&p);
    printf("your seat is :%s %s %s\n",a,r,q);
    }
    if(n==4){
         printf("enter your seat name(like : A1 A2 A3) : ");
    scanf("%s%s%s%s",&a,&r,&p,&q);
    printf("your seat is : %s %s %s %s\n",a,r,p,q);
    }
     if(z==1){
    int k = (n*800)+20*n;
    printf("your total amount is : %d\n",k);
    printf("you can payment by 1.Bksh\n2.Nagad\n 3.Credit/Debit card\n");
     printf("press digit which way you want to pay : ");
    scanf("%d",&y);
    switch(y){
        case 1:
        printf("enter your bkash number : ");
        scanf("%d",&v);
        printf("enter 6 digit PIN : ");
            scanf("%d",&v);
            printf("\n\n\n welcome \n your process successfull");
            break;
        case 2:
        printf("enter your Nagad number : ");
        scanf("%d",&v);
        printf("enter 4 digit PIN : ");
            scanf("%d",&v);
            printf("\n\n\n welcome \n your process successfull");
            break;
        case 3:
        printf("enter your card number : ");
        scanf("%d",&v);
        printf("enter 5 digit PIN : ");
            scanf("%d",&v);
        printf("enter your CSC code : ");
        scanf("%d",&w);
            printf("\n\n\n welcome \n your process successfull");
            break;
        default :
            printf("please enter valid number \n");

    }
     }
    if(z==2){
          int k = (n*395)+20*n;
    printf("your total amount is : %d\n",k);
    printf("you can payment by \n 1.Bksh\n 2.Nagad\n 3.Credit/Debit card\n");
     printf("press digit which way you want to pay : ");
    scanf("%d",&y);
    switch(y){
        case 1:
        printf("enter your bkash number : ");
        scanf("%d",&v);
        printf("enter 6 digit PIN : ");
            scanf("%d",&v);
            printf("\n\n\n welcome \n your process successfull");
            break;
        case 2:
        printf("enter your Nagad number : ");
        scanf("%d",&v);
        printf("enter 4 digit PIN : ");
            scanf("%d",&v);
            printf("\n\n\n welcome \n your process successfull");
            break;
        case 3:
        printf("enter your card number : ");
        scanf("%d",&v);
        printf("enter 5 digit PIN : ");
            scanf("%d",&v);
        printf("enter your CSC code : ");
        scanf("%d",&w);
            printf("\n\n\n welcome \n your process successfull");
            break;
        default :
            printf("please enter valid number \n");

    }
     }
    }
}

int main()
{
   char name[29];
   int ID,n,a,b,c,t,g;

    printf("\t\t=================================================\n");
	printf("\t\t|             Welcome to BD Railway             |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|           Online train  ticket                |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|             Power by                          |\n");
	printf("\t\t|           |  Bangladesh Railway |             |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t=================================================\n\n\n");

    printf("---------Log in your account -----------\n\n");
    printf("ENter your NID name : ");
    fgets(name,29,stdin);
    printf("Enter your NID number : ");
    scanf("%d",&ID);
    printf("%s",name);
    printf("your ID is : %d\n\n",ID);

     printf("where you want go ? press this digit\n");
    printf("1. Dhaka to cumilla \n");
    printf("2. Dhaka to chittagong\n ");
    printf("3. Dhaka to Rajshahi \n");
    printf("4. cumilla  to Dhaka  \n");
    printf("5. Rajshahi to Dhaka \n");
    printf("6. chittagong to Dhaka \n");


   scanf("%d",&n);
   switch(n)
   {
       case 1:
       printf("2.Mohanagar provati\n");
        break;
      case 2:
       printf("2.Mohanagar provati\n");
       break;
      case 3:
         printf("3.Bonolota provati\n");
         break;
      case 4:
            printf("4.Mohanagar express\n");
            break;
     case 5:
           printf("5.Bonolota express\n");
           break;
    case 6:
       printf("6.Mohanagar express\n");
       break;
       default:
       printf("sorry you press wrong disit");
   }
   printf("\n\n");


    printf("select your set \n \n");
    printf("your only booking 4 seat  \n\n");
    printf("A1    A2   A3   A4  \n");
    printf("A5    A6   A7   A8  \n");
    printf("A8    A10  A12  A13  \n");
    printf("A14   A15  A16  A17  \n");
    printf("A18   A19  A20  A21  \n");
    printf("A22   A23  A24  A25  \n");
    printf("A26   A27  A28  A29  \n");
    printf("A30   A31  A32  A34  \n");
    printf("A34   A35  A36  A38  \n");
    printf("A39   A40  A41  A42  \n");
    printf("A43   A44  A45  A46  \n");


   printf("how many seat you want to book : ");
  scanf("%d",&g);
  if(n==1){
   Dhaka_to_cumilla(g);
}
 if(n==2)
 {
      Dhaka_to_chittagong(g);
 }
 if(n==3){
   Dhaka_to_Rajshahi(g);
}
 if(n==4)
 {
      Dhaka_to_chittagong(g);
 }
 if(n==5){
   Dhaka_to_cumilla(g);
}
 if(n==6)
 {
      Dhaka_to_chittagong(g);
 }

  getch();

}
