#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define tam 150 //9

#define tavhiz 0.038 //10
#define kushiz 0.012 //10

// 11
#define VERGI_kitap 4.0
#define VERGI_temelgida 5.6
#define VERGI_luks 19.6
#define KITAP 0
#define TEMELGIDA 1
#define LUKS 2

//sqrt:karekok
// pow (x,y)-->say�n�n karesini al�r.
// devam edip etmeme gibi durumlar do while ile yap�l�r.

// egzersizler



int main()
{
	//1
//sqrt:karekok
	/*

	float x;
	do
	{
		printf("Bir pozitif sayi giriniz\n");
		scanf_s("%f",&x);
		if (x < 0)
		{
			printf("lutfen pozitif sayi giriniz\n");
		}
		if (x < 0) continue;
		printf("sayinizin karekoku : %f\n",sqrt(x));
	}
	while (x);

*/

//2 carpim pzoitif or negatif
/*int a, b;
printf("lutfen 2 adet sayi giriniz:");
scanf_s("%d %d", &a, &b);

if ((a == 0) || (b == 0))
{
	printf("carpim degeri 0'd�r.\n");
}
else if (((a < 0) && (b < 0)) || ((a > 0)) && (b > 0))
{
	printf("carpim degeri pozitiftir.\n");
}
else
{
	printf("carpim de�eri negatiftir.");
}*/

//3 ��genin E�itkenar �kizkenar �e�itkenar Oldu�unu Belirleyen Program
/* 	int aci1, aci2, aci3;
printf("3 tane aci giriniz :\n");
scanf_s("%d %d %d", &aci1, &aci2, &aci3);
if (aci1 + aci2 + aci3 == 180)
{
	if (aci1 == 60 && aci2 == 60 && aci3 == 60)
	{
		printf("bu bir eskenar ucgendir.\n");
	}
	else if (aci1 == aci2 || aci2 == aci3 || aci1 == aci3)
	{
		printf("bu bir ikizkenar ucgendir.\n");
	}
	else
	{
		printf("bu bir cesitkenar ucgendir.\n");
	}
}
else
{
	printf("girdiginiz acilar ucgen olusturamaz.\n");
}
*/

//4 telefon faturas� g�r��me �creti hesaplama	
/*
float sure, ucret;

printf("telefon konusma suresi:\n");
scanf_s("%f", &sure);
if (sure <= 3)
{
	ucret = 0.25;

}
else
{
	ucret = 0.25 + (sure - 3) * 0.08;

}
printf("ucret: %f", ucret);

*/

//5 basit kesirlerde d�rt i�lem
/*
  int no1,no2;
char op;
printf("Lutfen isleminizi seciniz (+,-):");
scanf("%c",&op);
printf("Lutfen iki tamsayi giriniz\n");
scanf("%d%d",&no1,&no2);
if((no1==0)||(no2==0))
{
	printf("Islem yapilamiyooo");
}
else
{
	printf("1/%d %c 1/%d\n",no1,op,no2);
	switch(op)
	{
	case '+' :
	 {
		 printf("%d/%d",no1+no2,no1*no2);
	 }
	 break;

	case '-' :
	 {
		 printf("%d/%d",no1-no2/no1*no2);
	 }
	 break;
	default :
	 {
		 printf("Yanlis operator girdiniz");
	 }

	}
}
 */

 //6 Girilen Harfin Alfabede Ka��nc� S�rada Oldu�unu Bulan Program
/*
char ch;
int sira;
printf("Bir karakter giriniz\n");
scanf("%c",&ch);
if((ch>='A')&&(ch<='Z'))
{
	sira=(int)ch-(int)'A'+1;
}
else if((ch>='a')&&(ch<='z'))
{
   sira=(int)ch-(int)'a'+1;
}
else
{
	printf("Lutfen harf giriniz.Boyle bir harf yoktur");
}

printf("%c : %d. harftir",ch,sira);
*/

//7  Seri De�eri Hesaplama
// pow (x,y)-->say�n�n karesini al�r.
	/*
	int i, n;
float x, seri;

printf("Pozitif sayi giriniz:\n");
scanf_s("%d", &n);
printf("Reel sayi : ");
scanf_s("%f", &x);

seri = 0;

for (i = 1; i <= 2 * n - 1; i += 2)
{
	seri += i / pow(x, i + 1);
}

printf("Seri = %f", seri);
	*/

	// devam edip etmeme gibi durumlar do while ile yap�l�r.

		//8 Seri De�eri Hesaplamada Programa Girilen De�ere G�re Devam Ko�ulu Eklemek
		/*

	int i, n;
	float x, seri;
	char devam;

	do
	{
		printf("Pozitif sayi giriniz:\n");
		scanf_s("%d", &n);
		printf("Reel sayi : ");
		scanf_s("%f %c", &x, &devam);

		seri = 0;
		for (i = 1; i <= 2 * n - 1; i += 2)
		{
			seri += i / pow(x, i + 1);
		}

		printf("Seri = %f\n", seri);

	}
	while ((devam == 'E') || (devam == 'e'));
	printf("Hoscakalin");
	*/

	//9 S�n�ftaki ��rencileriden Boyunun 150 cm e En yak�n ��renciyi Bulmak
	/*
	int no, boy, fark, minboy, minno;
printf("Ogrenci no: \n");
scanf_s("%d", &no);
printf("Ogrenci boy : \n");
scanf_s("%d", &boy);

minno = no;
fark = abs(boy - tam);

while (no > 0)
{
	printf("\nOgrenci no: ");
	scanf_s("%d", &no);
	printf("\nOgrenci boy :");
	scanf_s("%d", &boy);

	if (abs(boy - tam) < fark)
	{
		fark = abs(boy - tam);
		minno = no;
		minboy = boy;
	}
}

printf("\n%d numarali ogrenci %d cm boyuyla %d cm e en yakindir", minno, minboy, tam);

	*/

	//10 Tav�anlar�n Say�s�n�n Ku�lar�n Say�s�n� Ka� Y�l Sonra Ge�ece�ini Bulan Program
	/*
	float tavsan = 1042, kus = 2272;
int yil = 0;
while (tavsan < kus)
{
	tavsan += tavsan * tavhiz;
	kus += kus * kushiz;
	yil++;
	printf("%d.yil: tavsan=%d kus=%d\n", yil, (int)tavsan, (int)kus);
}
printf("Tavsanlar kuslari %d. yilda gecer ", yil);


	*/

	//11 Switch Case Sorusu
/*
int kod;
float fiyat;

printf("Lutfen urunun fiyatini ve kodunu giriniz\n");
scanf("%f %d", &fiyat, &kod);

printf("Urunumuzun satis fiyati: ");

if (kod == KITAP)
{
	printf("Fiyatimiz %f", fiyat + fiyat * VERGI_kitap / 100);
}
else if (kod == TEMELGIDA)
{
	printf("Fiyatimiz %f", fiyat + fiyat * VERGI_temelgida / 100);
}
else if (kod == LUKS)
{
	printf("Fiyatimiz %f", fiyat + fiyat * VERGI_luks / 100);
}
else
{
	printf("Boyle bir urun yoktur.Lutfen adam gibi kod girin.");
}
*/




	return 0;
}