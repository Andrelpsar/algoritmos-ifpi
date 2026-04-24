#include <stdio.h>
#include <stdlib.h>


int main (){

int n = 0, x = 0;

x = n++;
printf("n = %d\n", x);

x = ++n;
printf("n = %d\n", x);

for (int i = 10; i >=0; --i){
        if(i==6){
            continue;
        }
        if(i==2){
            break;
        }
    printf("%d\n", i);

}
printf("\n");

return 0;
}
