#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int i,s,c;
    
    srand(time(0));
    
    i = (rand() % 21);
    s = (rand() % 21-i);
    c =20-i-c;
    printf("スタッツは記憶力が%d,瞬発力が%d,魅力が%d \n",i,s,c);
    if(i>s && i>c)
    {
        printf("クラスはmageです。\n");
    }
    if(s>i && s>c)
    {
        printf("クラスはknightです。\n");
    }
    if(c>i && c>s)
    {
        printf("クラスはthiefです。\n");
        
    }
    if(i==s &&i>c)
    {
        printf("クラスはmageとknightのデュアルクラスです。\n");
        
    }
    if(i==s &&i>s)
    {
        printf("クラスはmageとthiefのデュアルクラスです。\n");
    
    }
    if(c==s &&c>i)
    {
        printf("クラスはthiefとknightのデュアルクラスです。\n");
        
    }
    
    

    return 0;
}