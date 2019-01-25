#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str[10000];
    printf("Enter the word:\n");
    
    gets(str);
    
   
    int i,count=0;
    for(i=0;str[i]!='\0';i++){
        count++;
    }
    char vowel[strlen(str)];
    
    int j,k=0;
    for(j=0;str[j]!='\0';j++){
        if(str[j]=='a' || str[j]=='e' || str[j]=='i' || str[j]=='o' || str[j]=='u'){
            vowel[k]=str[j];
            k++;
        }
    }
    vowel[k]='\0';
    
    
    char temp;
    int m=0,l=strlen(vowel)-1;
    while(m<l){
        temp=vowel[m];
        vowel[m]=vowel[l];
        vowel[l]=temp;
        m++;
        l--;
    }
    
    int x=0;
    for(i=0;str[i]!='\0';i++){
         if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
             str[i]=vowel[x];
             x++;
         }
    }
     printf("After reversing the vowels of the word :\n%s",str);
    
    return 0;
}

