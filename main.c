#include<stdio.h>
 
int main(){
    int r,s,a;
    printf("Enter the age of ram ");
    scanf("%d",&r);
     printf("Enter the age of shyam ");
    scanf("%d",&s);
     printf("Enter the age of Ajay");
    scanf("%d",&a);  

    s>r?printf("Ram is Young"):(r>a?printf("Ajay is Young"):printf("Shyam is Young"));
        
return 0;
}