#include <stdio.h>
int main ()
{
		printf("Nama: Aufa dhiya ulhak");
	printf("\nNim: F1B019029");
	printf("\nKelompok: 3\n");
int x[9],i;
printf("masukan angka nim terakhir anda\n\n");
for(i=0;i<=4;i++)
{
printf("Masukkan nilai %i : ",i+1);
scanf("%i",&x[i]);
}
printf("\n");
for(i=0;i<=4;i++)
{
printf("nim ke-%i= %i\n",i+1,x[i]);
}
printf("\n");
return 0;
}
