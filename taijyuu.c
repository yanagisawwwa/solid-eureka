#include <stdio.h>

int main(void)
{
    int Doraemonn, Kittychann,minidoraemonn;
    
     Doraemonn =130; //ドラえもんの体重
     Kittychann=1;//Kittychannの体重
     minidoraemonn=13;//ミニドラえもんの体重
     
     //変数と定数の比較
     if(Doraemonn==130)
      printf("Doraemonnは130㎏です\n"); 
      if(Kittychann !=130)
      printf("Kittychannは130㎏ではありません\n");
      if(Kittychann<130)
      printf("Kittychannは130㎏未満です\n");
      if(Kittychann==1)
      printf("Kittychannの体重は1kgです\n");
      if(minidoraemonn>1)
      printf("minidoraemonnは1㎏以上です\n");
      if(minidoraemonn=13)
      printf("inidoraemonnの体重は13kgです\n");
      
      if(Doraemonn>minidoraemonn)
       printf("ドラえもんはミニドラえもんより重いです\n");
      
    

    return 0;
}