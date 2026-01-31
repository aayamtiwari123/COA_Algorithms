#include <stdio.h>

int result[8]; // global variable declaration so we need not return array. for now 8 bits

void binary_add(int binary1[], int binary2[],int n) {
    int count=n +1;
    int temp1;
    int temp2;
    int sum= 0;
    int carry=0;
    
    while (n>0)
    {
         temp1= binary1[n-1];
         temp2=binary2[n-1];
         sum=(temp1+temp2+carry)%2;
         carry=(temp1+temp2+carry)/2;
         result[n]=sum;
         n=n-1;
    }
    
    result[n]=carry;
    
    }
    
    
int main() {
    printf("Simple binary addition\n");
    int a[3] = {1,1,1};
    int b[3] = {0,1,1};
    binary_add(a,b,3);
    
    for (int i = 0; i < 4; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}
