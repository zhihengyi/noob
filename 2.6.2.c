/* http//t.cn/E9jXK5A */
#include <stdio.h>

int main() {
    int y, m, d, c[]={0,31,59,90,120,151,181,212,243,273,304,334};
    scanf("%d %d %d",&y,&m,&d);
    printf("%d\n",c[m-1]+d+(m>2&&((y%4==0&&y%100!=0)||(y%400==0))));
    return 0;
}
