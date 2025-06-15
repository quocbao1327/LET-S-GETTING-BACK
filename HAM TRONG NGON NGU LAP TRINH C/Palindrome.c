#include<stdio.h>

int isPalindrome(int num) {
    int isPalindrome = 0;
    while(num > 0){
        isPalindrome = isPalindrome * 10 + num % 10;
        num /= 10;
        return isPalindrome;
    }
} 
int main(){
	int x;
    scanf("%d" , &x);
    if(isPalindrome(x)){
        printf("true");
    }
    else{
        printf("false");
    }
}    

