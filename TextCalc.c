#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
char CopyrightChar = '\xa9';
FILE *fp1, *fp2, *fp3;
void HarfBuyut()
{
	char a;

   fp1 = fopen("Metin1.txt", "r");
   if (fp1 == NULL) {
      puts("Metin1 açýlamadý...");
      exit(1);
   }
   fp2 = fopen("Metin2.txt", "r+");
   if (fp2 == NULL) {
      puts("Metin 2 açýlamadý...");
      exit(1);
   }
   do {
      a = toupper(a);
      fputc(a, fp2);
   } while ((a =fgetc(fp1)) != EOF);
}
typedef struct
{
    int harf;
    int adet;
}struct_harf;

int main()
{
	char  temp_harf,text,temp;
    setlocale(LC_ALL,"Turkish");
    struct_harf Hdizi[29];
    struct_harf *pHdizi;
    pHdizi=&Hdizi;
    int sayac=0,i,j,k,swap=0,harf_swap=0,toplam;


    for(i=0;i<29;i++)
    {
        (pHdizi+i)->adet=0;//Hdizi[i].adet=0;
    }

    HarfBuyut();

    if ((fp2 = fopen("Metin2.txt", "r+")) == NULL)
    {
        printf("Dosya açýlamadý!\n");
        exit(1);
    }

    while ((temp_harf = fgetc(fp2)) != EOF) // Dosya iÃ§ine girip metindeki harfleri kontrol ediliyor...
    {
            if(temp_harf == 'A')
            {
                (pHdizi)->adet += 1;
            }
            else if(temp_harf == 'B')
            {
                (pHdizi+1)->adet +=1;
            }
            else if(temp_harf == 'C')
            {
                (pHdizi+2)->adet +=1;
            }
            else if(temp_harf == 'Ç')
            {
                (pHdizi+3)->adet +=1;
            }
            else if(temp_harf == 'D')
            {
                (pHdizi+4)->adet +=1;
            }
            else if(temp_harf == 'E')
            {
                (pHdizi+5)->adet +=1;
            }
            else if(temp_harf == 'F')
            {
                (pHdizi+6)->adet +=1;
            }
            else if(temp_harf == 'G')
            {
                (pHdizi+7)->adet +=1;
            }
            else if(temp_harf == 'Ð')
            {
                (pHdizi+8)->adet +=1;
            }
            else if(temp_harf == 'H')
            {
                (pHdizi+9)->adet +=1;
            }
            else if(temp_harf == 'ý')
            {
                (pHdizi+10)->adet +=1;
            }
            else if(temp_harf == 'I')
            {
                (pHdizi+11)->adet +=1;
            }
            else if(temp_harf == 'J')
            {
                (pHdizi+12)->adet +=1;
            }
            else if(temp_harf == 'K')
            {
                (pHdizi+13)->adet +=1;
            }
            else if(temp_harf == 'L')
            {
                (pHdizi+14)->adet +=1;
            }
            else if(temp_harf == 'M')
            {
                (pHdizi+15)->adet +=1;
            }
            else if(temp_harf == 'N')
            {
                (pHdizi+16)->adet +=1;
            }
            else if(temp_harf == 'O')
            {
                (pHdizi+17)->adet +=1;
            }
            else if(temp_harf == 'Ö')
            {
                (pHdizi+18)->adet +=1;
            }
            else if(temp_harf == 'P')
            {
                (pHdizi+19)->adet +=1;
            }
            else if(temp_harf == 'R')
            {
                (pHdizi+20)->adet +=1;
            }
            else if(temp_harf == 'S')
            {
                (pHdizi+21)->adet +=1;
            }
            else if(temp_harf == 'Þ')
            {
                (pHdizi+22)->adet +=1;
            }
            else if(temp_harf == 'T')
            {
                (pHdizi+23)->adet +=1;
            }
            else if(temp_harf == 'U')
            {
                (pHdizi+24)->adet +=1;
            }
            else if(temp_harf == 'Ü')
            {
                (pHdizi+25)->adet +=1;
            }
            else if(temp_harf == 'V')
            {
                (pHdizi+26)->adet +=1;
            }
            else if(temp_harf == 'Y')
            {
                (pHdizi+27)->adet +=1;
            }
            else if(temp_harf == 'Z')
            {
                (pHdizi+28)->adet +=1;
            }
    }
    (pHdizi)->harf="A";
    (pHdizi+1)->harf="B";
    (pHdizi+2)->harf="C";
    (pHdizi+3)->harf="Ç";
    (pHdizi+4)->harf="D";
    (pHdizi+5)->harf="E";
    (pHdizi+6)->harf="F";
    (pHdizi+7)->harf="G";
    (pHdizi+8)->harf="Ð";
    (pHdizi+9)->harf="H";
    (pHdizi+10)->harf="I";
    (pHdizi+11)->harf="Ý";
    (pHdizi+12)->harf="J";
    (pHdizi+13)->harf="K";
    (pHdizi+14)->harf="L";
    (pHdizi+15)->harf="M";
    (pHdizi+16)->harf="N";
    (pHdizi+17)->harf="O";
    (pHdizi+18)->harf="Ö";
    (pHdizi+19)->harf="P";
    (pHdizi+20)->harf="R";
    (pHdizi+21)->harf="S";
    (pHdizi+22)->harf="Þ";
    (pHdizi+23)->harf="T";
    (pHdizi+24)->harf="U";
    (pHdizi+25)->harf="Ü";
    (pHdizi+26)->harf="V";
    (pHdizi+27)->harf="Y";
    (pHdizi+28)->harf="Z";

    for(j=0;j<29;j++)
    {
    	// Harf sayilarÃ½na gÃ¶re bÃ¼yÃ¼kten kÃ¼Ã§Ã¼Ã°e sÃ½ralama....
        for(k=0;k<28;k++)
        {
            if((pHdizi+k)->adet<(pHdizi+j)->adet)
            {
               swap=(pHdizi+j)->adet;
               (pHdizi+j)->adet=(pHdizi+k)->adet;
               (pHdizi+k)->adet=swap;

               harf_swap=(pHdizi+j)->harf;
               (pHdizi+j)->harf=(pHdizi+k)->harf;
               (pHdizi+k)->harf=harf_swap;
            }
        }
    }
    for(i=0;i<29;i++)
    {
        toplam+=(pHdizi+i)->adet;
    }
    printf("CopyRight%c 2017 by YusufDede YunusEmreAlçýk FahrettinAksu \n\n",CopyrightChar);
    printf("Toplam Harf Sayýsý = %d\n\n",toplam);
    for(j=0;j<29;j++)
    {
      printf("[%s] ---> %d\n",(pHdizi+j)->harf,(pHdizi+j)->adet);
    }
    printf("Bitti....");
    return 0 ;
} 
