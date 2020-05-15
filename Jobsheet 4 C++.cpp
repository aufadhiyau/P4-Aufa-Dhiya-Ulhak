#include <iostream>
#include <conio.h>
using namespace std;
int i, x;
int matriks_1[2][2], matriks_2[2][2], matriks_3[2][2];
char ulang;
int main ()
{
	cout<<"Nama: Aufa dhiya ulhak";
	cout<<"\nNim: F1B019029";
	cout<<"\nKelompok: 3\n";
	
 cout << "\nPengurangan Matriks \n";
  cout << "\nData matriks 1 \n";
  for (i = 0; i < 2; i++)
  {
   for (x = 0; x < 2; x++)
   {
    cout << "Masukan baris ke " << i+1 << " kolom ke " << x+1 << " : ";
    cin >> matriks_1[i][x];
   }
  } 
  cout << "\nData matriks 2 \n";
  for (i = 0; i < 2; i++)
  {
   for (x = 0; x < 2; x++)
   {
    cout << "Masukan baris ke "<< i+1 <<" kolom ke "<< x+1 <<" : ";
    cin >> matriks_2[i][x];
   }
  }
  cout << "\nMatriks 1 - Matriks 2 : " << endl << endl;
  for (i = 0; i < 2; i++)
  {
   for (x = 0; x < 2; x++)
   {
    matriks_3[i][x] = matriks_1[i][x] - matriks_2[i][x];
    cout << "\t" << matriks_3[i][x];
   }
   cout << endl;
  }
}
