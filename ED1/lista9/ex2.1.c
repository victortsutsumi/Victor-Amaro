#include<stdio.h>  
#include<string.h>    
struct student{    
    int rollno;    
    char name[10];    
};  

int main(){    
    int i;    
    struct student st[5];      
    for(i=0;i<5;i++){    
    printf("\nEnter Rollno:");    
    scanf("%d",&st[i].rollno); 
    printf("\nRollno:%d",st[i].rollno);   
    }    
    
}    