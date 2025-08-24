/*   http://t.cn/E9WBrut   */
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
	for(int n=1000;n<=9999;n++){
		if(n*9==Reverse(n)){
			printf("%d\n\r",n);
		}
	}
	return 0;
}
