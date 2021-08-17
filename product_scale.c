#include <stdio.h>
#define LEN 10

int main(){
   int sum = 0;
   int array1[LEN] = {5,8,9,4, 2, 3, 0,3,2,11};
   int array2[LEN] = {3,8,9,12,13,14,1,7,8,9};


   for(int i=0;i<LEN;i++){
      sum += array1[i] * array2[i];
   }

   printf("\nProduto escalar entre dois vetores: %d\n", sum);

}
