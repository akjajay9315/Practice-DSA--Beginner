#include <stdio.h>

int main(){
    int age;
    printf("Annu-Can i enter in club ,my age is :\n");
    scanf("%d",&age);
    if(age<18){
        printf("GAURD-Saale 18 ka hua hai tu\n");
        printf("padhai likhai karo ,IAS-YAS bano, desh ko sambhalo\n");

    } 
    else if(age==18){
        printf("GAURD-ruk jaa koi jugaar karta hu");
        
    }
    else{
        printf("GAURD-jaa bhai andar mast maal hai");
    }
    
    return 0;
}