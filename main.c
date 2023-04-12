/* Coding By : Yegetaneh Firew 
   Date : April 12/2023
  https://github.com/lijnati
  https://twitter.com/yegetaneh12
*/

#include <stdio.h>

#define MAX_NAME 50 // define a constant to hold the maximum length of names

int main () 
{
    char n[MAX_NAME]; // declare the array with the maximum length for names
    int a;
    int p;
    int d;
    char add[MAX_NAME];
    
    char na[MAX_NAME];
    int ag;
    int ph;
    int da;
    char addr[MAX_NAME];
    
    printf("WELCOME TO PHONE BOOK:)\n\n");
    printf("*****MENU*****\n");
    
    printf("Press 1 to add the contact\n\n");
    
    int x;
    printf("Enter: ");
    scanf("%d", &x);
     
    if (x == 1)
    {
        int y;
        printf("Enter the number of contact to be added: ");
        scanf("%d", &y);
           
        if (y == 1)
        {
            printf("------------------------------\n");
            printf("Name : ");
            scanf("%s", n); 
            printf("Age : ");
            scanf("%d", &a);
            printf("Phone Number : ");
            scanf("%d",&p);
            printf("Date of Birth : ");
            scanf("%d",&d);
            printf("\n Address : ");
            scanf("%s", add); 
            printf("------------------------------\n");
        }
        else if (y == 2)
        {
            printf("------------------------------\n");
            printf("Name : ");
            scanf("%s", n);
            printf("Age : ");
            scanf("%d", &a);
            printf("Phone Number : ");
            scanf("%d",&p);
            printf("Date of Birth : ");
            scanf("%d",&d);
            printf("\n Address : ");
            scanf("%s", add);
            printf("------------------------------\n");
                 
                 
            printf("------------------------------\n");
            printf("\nName : ");
            scanf("%s", na);
            printf("\nAge : ");
            scanf("%d", &ag);
            printf("Phone Number : ");
            scanf("%d",&ph);
            printf("Date of Birth : ");
            scanf("%d",&da);
            printf("Address : ");
            scanf("%s", addr);
            printf("------------------------------\n");
        }
              
        printf("Press 2 to see the entered contact\n");
        printf("Press 0 to exit\n");
              
        int z;
        printf("Enter: ");
        scanf("%d", &z);
              
        if (z == 2)
        {
            int num;
            printf("Enter the number of contact to be viewed : ");
            scanf("%d",&num);
                   
            if (num == 1)
            {
                printf("------------------------------\n");
                printf("Name : ");
                printf("%s", n);
                printf("\nAge : "); // add a newline character for better formatting
                printf("%d", a);
                printf("\nPhone Number : ");
                printf("%d", p);
                printf("\nDate of Birth : ");
                printf("%d", d);
                printf("\nAddress : ");
                printf("%s", add);
                printf("\n------------------------------\n");
            }
                     
            else if (num == 2)
            {
                printf("------------------------------\n");
                printf("Name : ");
                printf("%s", n);
                printf("\nAge : ");
                printf("%d", a);
                printf("\nPhone Number : ");
                printf("%d", p);
                printf("\nDate of Birth : ");
                printf("%d", d);
                printf("\nAddress : ");
                printf("%s", add);
            printf("------------------------------\n");
                          printf("Name : ");
                          printf("%s", na);
                          printf("Age : ");
                          printf("%d", ag);
                          printf("Phone Number : ");
                          printf("%d", ph);
                          printf("Date of Birth : ");
                          printf("%d", da);
                          printf("Address : ");
                          printf("%s",addr);
                          printf("------------------------------\n");
                       }
               }
               else if(z==0)
                 {
                     printf("Are you sure want to close the phone book\n");
                     printf("Press 1 for YES\n");
                     printf("Press 2 for NO\n");
                     
                     
                     int ans;
                     printf("Enter\n");
                     scanf("%d",&ans);
                     
                     if(ans==1)
                       {
                           printf("The phone book has closed\n");
                           printf("Thank You :)\n");
                       }
                     else if(ans==2)
                      {
                          printf("The phone book has not closed\n");
                          printf("You can continue\n");
                      }
                 }
       }
       
       else 
         {
             printf("Invalid please try again\n");
         }
         
         return 0;
}
