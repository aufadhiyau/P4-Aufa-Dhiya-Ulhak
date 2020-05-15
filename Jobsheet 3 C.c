#include <stdio.h>
int main()
{
	printf("Nama: Aufa dhiya ulhak");
	printf("\nNim: F1B019029");
	printf("\nKelompok: 3\n");
	
  int i, j, m, n, matriks1[10][10], matriks2[10][10], hasil[10][10];
  printf("\nMasukkan jumlah baris matriks: ");
  scanf("%d", &m);
  printf("Masukkan jumlah kolom matriks: ");
  scanf("%d", &n);
  printf("Masukkan elemen matriks pertama: \n");
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
      scanf("%d", &matriks1[i][j]);
    }
  }
  printf("Masukkan elemen matriks kedua: \n");
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
      scanf("%d", &matriks2[i][j]);
    }
  }
  printf("Hasil pengurangan matriks: \n");
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
      hasil[i][j] = matriks1[i][j] + matriks2[i][j];
      printf("%d \t", hasil[i][j]);
    }
    printf("\n");
  }
}
