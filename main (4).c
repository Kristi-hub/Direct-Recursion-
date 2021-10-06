#include <stdio.h>
int sum(int x, int y){
    int res;
    if (x == y) {
        return (x);
    }
    else {
        res = x + sum((x + 1), y);
    }
    return (res);
}

int main(void) {
    int x,y;
    printf("Please enter 2 integers: ");
    scanf ("%d%d",&x,&y);
    if(x<y){
        printf("sum = %d",sum(x,y));
    }
    else printf("Wrong input ");
    return 0;
}

