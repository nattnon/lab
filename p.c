#include <stdio.h>
int main(){
    int score[11]={0,0,0,0,0,0,0,0,0,0,0};
    int std[10];
    int i, j, input, count=0;
    for(i=0;i<10;i++){
        scanf("%d", &std[i]);
    }
    for(i=0;i<10;i++){
        score[std[i]]++;
    }
    for(i=0;i<11;i++){
        printf("%d = %d\n", i,score[i]);
    }
}