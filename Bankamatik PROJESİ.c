#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	int tutar,islem; // tutar� float tan�mlamad�m ��nk� hi� ondal�kl� say�lar ile para �eken veya yat�ran g�rmedim :D
    double bakiye=5000;
    int sifre;
    
    printf("Bakiyeniz : %.2lf",bakiye); // bakiye g�steriliyor.
    printf("\nKart Sifreniz : 2002"); // kart �ifresi g�steriliyor
    printf("\n\nLutfen  4 haneli sifrenizi giriniz : "); // �ifre isteniliyor
    scanf("%d",&sifre); // �ifre art�k bellekte
    
    if(sifre!=2002) // �ifre yanl�� m� gir i�eri
    {
    	while(sifre!=2002) // sifre yanl�� girildi�i s�rce d�nd�r
    	{
    		system("color 4");
    		printf("Sifre HATALI Tekrar deneyiniz !!! Sifre : "); // �ifreyi iste
    		scanf("%d",&sifre);
    		if(sifre==2002) // �ifre do�ru ise blo�a gir ve ayr�l
    		{
    			break; // ayr�l
			}
		}
		system("color B"); // ayr�ld�k... ba�la i�lemlere
		printf("\n--------------- GIRIS YAPILDI ------------------------------------------------------------------");
	    printf("\nmevcut bakiyeniz : %lf",bakiye);
		printf("\nPara cekmek icin 1 e / yatirmak icin 2 ye basiniz...\n\n");
		printf("yapmak istediginiz islem : ");
		scanf("%d",&islem);
    
	switch(islem)
	{
		case 1 : printf("\n\nCekmek istediginiz tutari giriniz : ");
		scanf("%d",&tutar);
		if(tutar>bakiye) // bakiyede 5000 var. Daha fazla para isterse blo�a Gir
		{
			while(tutar!=bakiye || tutar>bakiye) // bakiye yetersiz oldu�u s�rece d�nd�r
    		{
    		system("color 4");
    		printf("\n\nBakiye yetersiz !!! Tekrar deneyiniz : "); // �ifreyi iste
    		scanf("%d",&tutar);
    		if(tutar==bakiye || tutar<bakiye) // bakiye yeterliyse veya e�itse ayr�lmak i�in blo�a gir
    		{
    			break; // ayr�l
			}
			}
			bakiye-=tutar;
			system("color A");
			printf("\n\nGuncel bakiyeniz : %.2lf\n\n",bakiye);
		}
		else
		{
			bakiye-=tutar;
			system("color A");
			printf("\n\nGuncel bakiyeniz : %.2lf\n\n",bakiye);
		} break;
		
		
	
		case 2 : printf("\n\nYatirmak istediginiz tutari giriniz : ");
		scanf("%d",&tutar);
		bakiye+=tutar;
		printf("\n\nGuncel bakiyeniz : %.2lf\n\n",bakiye); break;
		
		default : system("color 4");
		printf("\n\n !!! HATA (1 ve 2 disinda deger girilemez)\n\n"); break;	
	}
	}
	else if(sifre==2002) // sifre 2002 ise BANMAT��� A�
	{
		system("color B");
		printf("\n--------------- GIRIS YAPILDI ------------------------------------------------------------------");
	    printf("\nmevcut bakiyeniz : %lf",bakiye);
		printf("\nPara cekmek icin 1 e / yatirmak icin 2 ye basiniz...\n\n");
		printf("yapmak istediginiz islem : ");
		scanf("%d",&islem);
    
	switch(islem)
	{
		case 1 : printf("\n\nCekmek istediginiz tutari giriniz : ");
		scanf("%d",&tutar);
		if(tutar>bakiye) // bakiyede 5000 var. Daha fazla para isterse blo�a Gir
		{
			while(tutar!=bakiye || tutar>bakiye) // bakiye yetersiz oldu�u s�rece d�nd�r
    		{
    		system("color 4");
    		printf("\n\nBakiye yetersiz !!! Tekrar deneyiniz : "); // �ifreyi iste
    		scanf("%d",&tutar);
    		if(tutar==bakiye || tutar<bakiye) // bakiye yeterliyse veya e�itse ayr�lmak i�in blo�a gir
    		{
    			break; // ayr�l
			}
			}
			bakiye-=tutar;
			system("color A");
			printf("\n\nGuncel bakiyeniz : %.2lf\n\n",bakiye);
		}
		else
		{
			bakiye-=tutar;
			system("color A");
			printf("\n\nGuncel bakiyeniz : %.2lf\n\n",bakiye);
		} break;
		
		
	
		case 2 : printf("\n\nYatirmak istediginiz tutari giriniz : ");
		scanf("%d",&tutar);
		bakiye+=tutar;
		printf("\n\nGuncel bakiyeniz : %.2lf\n\n",bakiye); break;
		
		default : system("color 4");
		printf("\n\n !!! HATA (1 ve 2 disinda deger girilemez)\n\n"); break;	
	}
	}
    else // bu blo�a girmesi �MKANSIZ ama nolur nolmaz ekledim :)
    {
    	printf("hata");
	}
	
	return 0;
}
