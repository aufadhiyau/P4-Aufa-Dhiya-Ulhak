#include <stdio.h>
#include <conio.h>

main (){
		printf("Nama: Aufa dhiya ulhak");
	printf("\nNim: F1B019029");
	printf("\nKelompok: 3\n");
int nim1 [5][5];
int i, j, x, y;
printf ("Matrix transpose\n");
printf ("Masukkan jumlahbaris = ");
scanf ("%i", &x);
printf ("Masukkan jumlahkolom = ");
scanf ("%i", &y);
printf ("MATRIX \n");
for (i = 0; i< x; i++){
for (j = 0; j < y; j++){
printf ("Masukkan nilai index %d, %d = ", i, j);
scanf ("%d", &nim1[i][j]);
}
}
for (i = 0; i< x; i++){
for (j = 0; j < y; j++){
printf ("%d ",nim1[i][j]);
}
printf ("\n");
}
printf ("Matrix transpose  \n");
for (i = 0; i< y; i++){
for (j = 0; j < x; j++){
printf ("%d ", nim1[j][i]);
}
printf ("\n");
}
getch();
}
