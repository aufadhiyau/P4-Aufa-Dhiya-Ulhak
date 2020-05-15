#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
int nim_a[3][3],nim_b[3][3],nim_c[3][3],i,j,k;
cout<<"Nama: Aufa dhiya ulhak";
	cout<<"\nNim: F1B019029";
	cout<<"\nKelompok: 3\n";


cout<<"  Matriks 3 x 3 :";
cout<<endl;;
for(i=0;i<3;i++){
for(j=0;j<3;j++){

cout<<"  Input Baris "<<(i+1)<<" , Kolom "<<(j+1)<<" = ";

cin>>nim_a[i][j];}
cout<<endl;}

cout<<"  Matriks 3 x 3 = "<<endl<<endl;

for(i=0;i<3;i++){
for(j=0;j<3;j++){
cout<<setw(4)<<nim_a[i][j];}
cout<<endl<<endl;}
getch ();
}
