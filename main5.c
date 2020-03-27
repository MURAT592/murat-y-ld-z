#include <stdio.h>

int main(void) 
{
	while(1){
	 int n,i,sayac=1;
      int toplam=0;
      printf("\n bir sayi giriniz:");
      scanf("%d",&n);
      for(i=0;i<=n;i++){
      	if(i%2 !=0){
      		toplam+=i;
      		printf("\n%d. tek sayi:%d",sayac,i);
      		sayac +=1;
		  }
	  }
	  printf("\nToplam:%d",toplam);
	}
	return 0;
}
