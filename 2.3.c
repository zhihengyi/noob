/*   http://t.cn/E91UYRn  */
#include <stdio.h>

int Reverse(int n){
	int re=0;
	while(n!=0){
		re*=10;
		re+=n%10;
		n/=10;
	}
	return re;
}

int main(){
	for(int n=0;n<=256;n++){
		if(n*n==Reverse(n*n)){
			printf("%d\n\r",n);
		}
	}
	return 0;
}

