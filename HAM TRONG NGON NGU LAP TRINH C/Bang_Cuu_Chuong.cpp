#include<stdio.h>
#include<math.h>
int main(){
	// Bang Cuu Chuong
	// i'm not sure about these 2 for
	int total , i , j;
	for(i = 2 ; i <= 9 ; i++){
		for(j = 1 ; j <= 10 ; j++){
			total = i * j;
			printf("%d * %d = %d \n" , i , j , total);
		}
	}return 0;
}

