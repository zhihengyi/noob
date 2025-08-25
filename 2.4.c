/*

      ****
    ******
  ********
**********

*/
#include <stdio.h>

int main()
{
	int h;
	while(scanf("%d",&h) != EOF){
		for(int i=0;i<h;++i){
			for(int j=0;j<h+2*(h-1);++j){
				if(j<2*(h-1-i)){				//h+2*(h-1)-h-2*i
					printf(" ");
				}else{
					printf("*");
				}
			}
			printf("\n");
		}
	}
	return 0;
}
