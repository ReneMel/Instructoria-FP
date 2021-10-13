#include <stdio.h>

int main(){

    int n, n1=0, n2=1, next;

    //pedir usuario cant de repeticiones
    scanf("%d", &n );


    for(int i=0; i<n ;i++){
        next=n1+n2;
        printf("%d\t", next); // fibonacci
        n1=n2;
        n2=next;

    }

//renemel

    printf("\n");
    return 0; 
}