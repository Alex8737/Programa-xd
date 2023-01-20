#include <stdio.h>

int main(){

    FILE *xy=NULL;

    FILE *xy1=NULL;
    int a;

    xy=fopen("vector.txt","r");

    xy1=fopen("Cambio.txt","w");

    if (xy==NULL){
        printf("No se puede leer el codigo");

        return -1;
    }
    if (xy1==NULL){

        printf("No se puede leer el codigo");

        return -1;
    }

    while (!feof(xy)){
        fscanf(xy,"%d",&a);

        if(a%10==0){

            fprintf(xy1,"%d \tsi es multiplo de 10\n",a);
            
        }else{
            fprintf(xy1,"%d\n",a);

        }
    }
    
     fclose(xy);
     fclose(xy1);
     return 0;
}