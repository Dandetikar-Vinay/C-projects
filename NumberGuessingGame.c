#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int generateNumber(){
    int num = rand()%100 + 1 ;
    return num ;
}

int main(){
     int num ;
     int countAttempts=0;

    srand(time(NULL));

    int rNumber = generateNumber();

    printf("The Random Number is %d\n", rNumber);

   
    printf("Welcome to Number Guessing Game \n");

    while(1){
        printf("Enter any number in between 1 to 100 \n");
        scanf("%d", &num);
        if(num<1 || num>100){
            printf("The Number %d is Not a Valid Number Please enter a  Number that is in Between 1 to 100 \n ",num);
            countAttempts++;
            continue ;
        }
        countAttempts++;
        if(num==rNumber){
            printf("Congratulations !!! you have Guessed the Number in %d Attempts ",countAttempts );
            break;
        }
        else if(num>rNumber){
            printf("Enter a  Number which is Less than %d Number \n ", num);
        }
        else{
              printf("Enter a  Number which is  greater than %d Number\n ", num);
        }
        printf(".................................................................................\n");
    }

    printf("Bye !!! Bye !!! Happy coding \n");
    printf("Bye");
    printf("Adding Last line to verify it is added into git ");
    return 0;

}