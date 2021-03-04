#include<stdio.h>


int main(){
	int bakiye = 1000;
	int islem;
	int son;
	int tutar;
	printf("Para Cekmek Icin 1'e , Para Yatirmak Icin 2'ye basiniz : ");
	scanf("%d",&islem);
	
	switch (islem){
		
		case 1:
			printf("Cekmek istediginiz tutari giriniz : ");
			scanf("%d",&tutar);
			son = bakiye - tutar;
			printf("Kalan Son Para : %d \n",son);	
			printf("Iyi gunler dileriz.");
			break;
		
		case 2:
			printf("Yatirmak istediginiz tutari giriniz : ");
			scanf("%d",&tutar);
			son = bakiye + tutar;
			printf("Son Para : %d\n",son);
			printf("Iyi gunler dileriz.");
			break;
		
		default:
			printf("Gecersiz Bir Islem Girildi");
	}	
	
	
	return 0;
}
