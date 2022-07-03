# include<stdio.h>
 int main()
 {
  printf("Modern calculator\n");
   printf("\n");
     printf("\n");
     char ch;
     int num1,num2;
  printf("***************************\n");
  printf("");
   printf("\n");
     printf("\n");
     printf("Choose an operator(+,-,*,/,%%): ");
     scanf("%c",&ch);
  printf("Input your numbers here\n");
   printf("\n");
     printf("\n");
  printf("*****************************\n");
   printf("\n");
     printf("\n");
     printf("Enter two numbers: ");
     scanf("%d %d",&num1,&num2);
     printf("\n");
     printf("\n");
     printf("Check your results\n");
     printf("\n");
     printf("\n");

     switch(ch)
     {
       case '+':
       
         printf("%d + %d =\t%d\n",num1,num2,num1+num2); 
         break;
       case '-':
         printf("%d - %d =\t%d\n",num1,num2,num1-num2);
         break;
       case '*':
         printf("%d * %d =\t%d\n",num1,num2,num1*num2);
         break;
       case '/':
         printf("%d / %d =\t%d\n",num1,num2,num1/num2);
         break;
       case '%':
         printf("%d %% %d =\t%d\n",num1,num2,num1%num2);
         break;
       default:
         printf("Error! Invalid Operator.");
     }
  printf("\n");
     printf("\n");

     printf("Thank you for using our modern calculator\n");
     printf("\n");
     printf("***Exit***");
     printf("\n");
     printf("\n");
     return 0;

     
 }