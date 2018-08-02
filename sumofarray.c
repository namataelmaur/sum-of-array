#include<stdio.h>

int sumofarray(int A[],int size ){
int sum = 0;
int i;
for( i = 0; i < size; i++){
sum = sum + A[i];
}
 return sum;
}

void main(){
int n = 4;
int ar[4] = {7,8,3,2};
int s;
s = sumofarray(ar,n);
printf("%d\n",s);

}


