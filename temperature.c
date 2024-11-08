#include <stdio.h>

int main(void)
{
    int k,s,plus;
    printf("What is the temperature today?");
    scanf("%d", &k);
    printf("昨日の天気は？");
    scanf("%d", &s);
    plus=k+s;
//もしこうだったら、
    if (k>=100)
    {
        printf("今日は地球が体調が悪いらしい。");
    }
    else if(s>50)
    {
        printf("今日は普通");
    }
//それ以外は、
    else
    {
        printf("今日も地球は元気だ！");
    }