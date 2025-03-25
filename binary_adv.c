#include<stdio.h>
void input(int*) ;
void binary(int) ;
void binary_rec(int) ;
int main(){
    int num ;
    input(&num) ;
    binary(num) ;
    printf("\n") ;
    binary_rec(num) ;
    return 0 ;
}
void input(int *num){
    printf("enter the number : ") ;
    scanf("%d",num) ;
}
void binary(int num){
    int index = 0 ;
    int arr[1000] ;
    do{
        arr[index] = num % 2 ;
        num /= 2 ;
        index++ ;
    }while(num != 0 ) ;
    for(int i = index-1 ; i >= 0 ; i-- ){
        printf("%d",arr[i]) ;
    }
}
void binary_rec(int num){
    if(num == 0){
        return ;
    }
    else{
        binary_rec(num/2) ;
        printf("%d",num%2) ;
    }
}