#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct mykeywords {
   int occur;
   char key[100];
};
int main(int argc,char *argv[]){
   
   struct mykeywords *ptr;
   char str[100];

//   FILE *in_file = fopen("mytxt.txt", "r");
   int i;
   char temp[100];
   ptr = (struct mykeywords*) malloc((argc) * sizeof(struct mykeywords));
   for(i = 0; i <argc;i++){
       if(i==0)
        continue;
      
     strcpy((ptr+i)->key,argv[i]);
      (ptr+i)->occur=0;
     
     
   }
 
   while (fscanf(stdin, "%s", str) != EOF)
{
  
    for(i=0;i<argc;i++){
        if(i==0)
         continue;
      
    if(!strcmp(str,(ptr+i)->key))
    (ptr+i)->occur++;
    
    }
}


 for(i = 0; i < argc; ++i)
   {
       if(i==0)
        continue;
      printf("\nName: %s\tAge: %d", (ptr+i)->key, (ptr+i)->occur);
   }
   return 0;
}