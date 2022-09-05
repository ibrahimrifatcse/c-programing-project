
#include<stdio.h>

// y,v[6],w[3] this is global declaration
 int y;// through y the user will confirm which mode he wants to pay the bill
 int m,h,z;
 char v[10],w[10],sp[10],ar[3];  // v for bkash,nagad,card password & w for card CSC code

 char a[4],r[4],p[4],q[4]; //randomly  string declaration .// a for seat number . like A1 A2 A4
char x[11];


void Dhaka_to_cumilla(int n) // here n for  seat number
{
    if(n>5) //if n large than 4 this program will tarminate here
    printf("you can't buy more than 4.\n please refresh ");
    if(n<5){  // if n lessthan 5 then this will be work

    printf("AC seat per person 600tk with 20tk bank charge  \n\n");  // user can see ticket price with coch type
      printf("Shovon seat per person 205tk with 20tk bank charge \n\n"); // user can see ticket price with coch type
  printf("please select your coach type : 1.AC / 2.Shovon \n"); //we asked user which his/her needed
  printf("Enter Digit 1 or 2 : ");  // here user will select AC or Shovon
  scanf("%d",&z);// by z user will be select coch type . 1=ac ,2=shovon
   switch(z)
   {
       case 1:
         printf("thank your for selecting AC coach \n");
         break;
       case 2:
       printf("thank you for selecting Shovon chair \n ");
       break;
       default :
       printf("your given numbr is wrong \n"); // if user give wrong digit then he/she will see it. c
   }
   printf("\n\n");// new line

   if(n==1){  // n = seat number. in the main function we will take input from user.
       printf("enter your seat name(like : A1 A2 A3) : ");// user will select the seat of his choice
       scanf("%s",&ar); // here a is string . this string size we declar 4.
       printf("your seat is : %s \n",a);    // by this user can see his/her selected seat
   }

   if(n==2){// n = seat number. in the main function we will take input from user.
        printf("enter your seat name(like : A1 A2 A3) : ");// user will select the seat of his choice
       scanf("%s %s",&a,&r);// here a is string . this string size we declar 4.
       printf("your seat is : %s %s\n",a,r); // by this user can see his/her selected seat
   }
    if(n==3) {// n = seat number. in the main function we will take input from user.
         printf("enter your seat name(like : A1 A2 A3) : ");
    scanf("%s %s %s",&a,&r,&p);// here a is string . this string size we declar 4.
    printf("your seat is :%s %s %s\n",a,r,p);// by this user can see his/her selected seat
    }
    if(n==4){// n = seat number. in the main function we will take input from user.
         printf("enter your seat name(like : A1 A2 A3) : ");
    scanf("%s %s %s %s",&a,&r,&p,&q);// here a is string . this string size we declar 4.
    printf("your seat is : %s %s %s %s\n",a,r,p,q); // by this user can see his/her selected seat
    }
     if(z==1){
    int k = (n*600)+20*n;// payment calculator
    printf("your total amount is : %d\n",k);//k=calculator
    printf("you can payment by : \n 1.Bksh \n2 .Nagad \n 3.Credit/Debit card \n");//payment way name
     printf("press digit which way you want to pay : ");
    scanf("%d",&y);// by y user will confirm payment method
    // x for mobile number size
    switch(y){
        case 1:
        printf("enter your bkash number : ");
        scanf("%s",&x);
        printf("enter 6 digit PIN : ");
            scanf("%s",&v);
            printf("\n\n\n welcome \n your process successfull");
            break;
        case 2:
        printf("enter your Nagad number : ");
        scanf("%s",&x);
        printf("enter 4 digit PIN : ");
            scanf("%s",&v);
            printf("\n\n\n welcome \n your process successfull");
            break;
        case 3:
        printf("enter your card number : ");
        scanf("%s",&x);
        printf("enter 6 digit PIN : ");
            scanf("%s",&v);
        printf("enter your 3 digit CSC code : ");
        scanf("%s",&w);
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

void Dhaka_to_chittagong(int n) // here n for  seat number
{
    if(n>5) //if n large than 4 this program will tarminate here
    printf("you can't buy more than 4.\n please refresh ");
    if(n<5){  // if n lessthan 5 then this will be work

    printf("AC seat per person 600tk with 20tk bank charge  \n\n");  // user can see ticket price with coch type
      printf("Shovon seat per person 205tk with 20tk bank charge \n\n"); // user can see ticket price with coch type
  printf("please select your coach type : 1.AC / 2.Shovon \n"); //we asked user which his/her needed
  printf("Enter Digit 1 or 2 : ");  // here user will select AC or Shovon
  scanf("%d",&z);// by z user will be select coch type . 1=ac ,2=shovon
   switch(z)
   {
       case 1:
         printf("thank your for selecting AC coach \n");
         break;
       case 2:
       printf("thank you for selecting Shovon chair \n ");
       break;
       default :
       printf("your given numbr is wrong \n"); // if user give wrong digit then he/she will see it. c
   }
   printf("\n\n");// new line

   if(n==1){  // n = seat number. in the main function we will take input from user.
       printf("enter your seat name(like : A1 A2 A3) : ");// user will select the seat of his choice
       scanf("%s",&ar); // here a is string . this string size we declar 4.
       printf("your seat is : %s \n",a);    // by this user can see his/her selected seat
   }

   if(n==2){// n = seat number. in the main function we will take input from user.
        printf("enter your seat name(like : A1 A2 A3) : ");// user will select the seat of his choice
       scanf("%s %s",&a,&r);// here a is string . this string size we declar 4.
       printf("your seat is : %s %s\n",a,r); // by this user can see his/her selected seat
   }
    if(n==3) {// n = seat number. in the main function we will take input from user.
         printf("enter your seat name(like : A1 A2 A3) : ");
    scanf("%s %s %s",&a,&r,&p);// here a is string . this string size we declar 4.
    printf("your seat is :%s %s %s\n",a,r,p);// by this user can see his/her selected seat
    }
    if(n==4){// n = seat number. in the main function we will take input from user.
         printf("enter your seat name(like : A1 A2 A3) : ");
    scanf("%s %s %s %s",&a,&r,&p,&q);// here a is string . this string size we declar 4.
    printf("your seat is : %s %s %s %s\n",a,r,p,q); // by this user can see his/her selected seat
    }
     if(z==1){
    int k = (n*1200)+20*n;// payment calculator
    printf("your total amount is : %d\n",k);//k=calculator
    printf("you can payment by : \n 1.Bksh \n2 .Nagad \n 3.Credit/Debit card \n");//payment way name
     printf("press digit which way you want to pay : ");
    scanf("%d",&y);// by y user will confirm payment method
    // x for mobile number size
    switch(y){
        case 1:
        printf("enter your bkash number : ");
        scanf("%s",&x);
        printf("enter 6 digit PIN : ");
            scanf("%s",&v);
            printf("\n\n\n welcome \n your process successfull");
            break;
        case 2:
        printf("enter your Nagad number : ");
        scanf("%s",&x);
        printf("enter 4 digit PIN : ");
            scanf("%s",&v);
            printf("\n\n\n welcome \n your process successfull");
            break;
        case 3:
        printf("enter your card number : ");
        scanf("%s",&x);
        printf("enter 6 digit PIN : ");
            scanf("%s",&v);
        printf("enter your 3 digit CSC code : ");
        scanf("%s",&w);
            printf("\n\n\n welcome \n your process successfull");
            break;
        default :
            printf("please enter valid number \n");

    }
     }
    if(z==2){
          int k = (n*400)+20*n;
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

void Dhaka_to_Rajshahi(int n) // here n for  seat number
{
    if(n>5) //if n large than 4 this program will tarminate here
    printf("you can't buy more than 4.\n please refresh ");
    if(n<5){  // if n lessthan 5 then this will be work

    printf("AC seat per person 600tk with 20tk bank charge  \n\n");  // user can see ticket price with coch type
      printf("Shovon seat per person 205tk with 20tk bank charge \n\n"); // user can see ticket price with coch type
  printf("please select your coach type : 1.AC / 2.Shovon \n"); //we asked user which his/her needed
  printf("Enter Digit 1 or 2 : ");  // here user will select AC or Shovon
  scanf("%d",&z);// by z user will be select coch type . 1=ac ,2=shovon
   switch(z)
   {
       case 1:
         printf("thank your for selecting AC coach \n");
         break;
       case 2:
       printf("thank you for selecting Shovon chair \n ");
       break;
       default :
       printf("your given numbr is wrong \n"); // if user give wrong digit then he/she will see it. c
   }
   printf("\n\n");// new line

   if(n==1){  // n = seat number. in the main function we will take input from user.
       printf("enter your seat name(like : A1 A2 A3) : ");// user will select the seat of his choice
       scanf("%s",&ar); // here a is string . this string size we declar 4.
       printf("your seat is : %s \n",a);    // by this user can see his/her selected seat
   }

   if(n==2){// n = seat number. in the main function we will take input from user.
        printf("enter your seat name(like : A1 A2 A3) : ");// user will select the seat of his choice
       scanf("%s %s",&a,&r);// here a is string . this string size we declar 4.
       printf("your seat is : %s %s\n",a,r); // by this user can see his/her selected seat
   }
    if(n==3) {// n = seat number. in the main function we will take input from user.
         printf("enter your seat name(like : A1 A2 A3) : ");
    scanf("%s %s %s",&a,&r,&p);// here a is string . this string size we declar 4.
    printf("your seat is :%s %s %s\n",a,r,p);// by this user can see his/her selected seat
    }
    if(n==4){// n = seat number. in the main function we will take input from user.
         printf("enter your seat name(like : A1 A2 A3) : ");
    scanf("%s %s %s %s",&a,&r,&p,&q);// here a is string . this string size we declar 4.
    printf("your seat is : %s %s %s %s\n",a,r,p,q); // by this user can see his/her selected seat
    }
     if(z==1){
    int k = (n*800)+20*n;// payment calculator
    printf("your total amount is : %d\n",k);//k=calculator
    printf("you can payment by : \n 1.Bksh \n2 .Nagad \n 3.Credit/Debit card \n");//payment way name
     printf("press digit which way you want to pay : ");
    scanf("%d",&y);// by y user will confirm payment method
    // x for mobile number size
    switch(y){
        case 1:
        printf("enter your bkash number : ");
        scanf("%s",&x);
        printf("enter 6 digit PIN : ");
            scanf("%s",&v);
            printf("\n\n\n welcome \n your process successfull");
            break;
        case 2:
        printf("enter your Nagad number : ");
        scanf("%s",&x);
        printf("enter 4 digit PIN : ");
            scanf("%s",&v);
            printf("\n\n\n welcome \n your process successfull");
            break;
        case 3:
        printf("enter your card number : ");
        scanf("%s",&x);
        printf("enter 6 digit PIN : ");
            scanf("%s",&v);
        printf("enter your 3 digit CSC code : ");
        scanf("%s",&w);
            printf("\n\n\n welcome \n your process successfull");
            break;
        default :
            printf("please enter valid number \n");

    }
     }
    if(z==2){
          int k = (n*395)+20*n;
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
    fgets(name,29,stdin);/*he fgets() function reads characters from
    the current stream position up to
    and including the first new-line character (\n),
     up to the end of the stream, or until the number of characters
     read is equal to n-1, whichever comes first.*/
    printf("Enter your NID number : ");
    scanf("%d",&ID);
    printf("%s",name);// name is string
    printf("your ID is : %d\n\n",ID);// ID integer data type

     printf("where you want go ? press this digit\n");// destination
    printf("1. Dhaka to cumilla \n");
    printf("2. Biman_bandar to chittagong\n ");
    printf("3. Dhaka to Rajshahi \n");
    printf("4. cumilla  to Dhaka  \n");
    printf("5. Rajshahi to Dhaka \n");
    printf("6. chittagong to Dhaka \n");


   scanf("%d",&n);//
   switch(n)
   {
       case 1:
       printf("2.Mohanagar provati at 7.30am\n");
        break;
      case 2:
       printf("2.Mohanagar provati at 8.14\n");
       break;
      case 3:
         printf("3.Bonolota provati at 9.00am\n");
         break;
      case 4:
            printf("4.Mohanagar express at 2.55 pm\n");
            break;
     case 5:
           printf("5.Bonolota express 6.00 am\n");
           break;
    case 6:
       printf("6.Mohanagar express 7.00 am\n");
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
  scanf("%d",&g);// here g in user function n . n= how many seat I want
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
      Dhaka_to_cumilla(g);
 }
 if(n==5){
   Dhaka_to_chittagong(g);
}
 if(n==6)
 {
      Dhaka_to_Rajshahi(g);
 }

return 0;

}


