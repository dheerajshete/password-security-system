#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int main (){
    int lenofpass = 0;
    char ser[30];
    char name[50];
    char password[30];
    char backup_name[50];
    char backup_password[30];
    printf("\nProgram started \n");
    printf("Enter you name : ");
    scanf("%s", name);
    strcpy(backup_name,name);
    while(lenofpass != 12){
    printf("\nEnter password : ");
    scanf("%s", password);
    lenofpass = strlen(password);
    if(lenofpass == 12 ){
        srand(time(0));
        int num = rand ()%10000+1;
        sprintf(ser, "%d", num); 
        printf("\nPassword Accepted");
        strrev(backup_name);
        strcat(backup_name,ser);
        printf("\nYour Passkey %s", backup_name);
        printf("\nDon't share it with anyone unknown");
    } 
    else{
        printf("\nPassword should be exactly 12 characters!!!");
        
}
    }
    printf("\nenter your passkey for to move on next page\n");
    scanf("%s",backup_password);
    if(strcmp(backup_name,backup_password)== 0 ){
        printf("%s may move forward", name);
    }
    else{
        printf("Access denied");
    }
    
    return 0;
}