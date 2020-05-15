#include <iostream> 
#include <conio.h> 
using namespace std;
int matrikA[2][2]; 
int matrikB[2][2]; 
int matrikC[2][2]; 
int temp;
int main (){ 
cout<<"Nama: Aufa dhiya ulhak";
	cout<<"\nNim: F1B019029";
	cout<<"\nKelompok: 3\n";
for (int x = 0;x<2;x++){          
for (int y =0;y<2;y++){ 
cout <<"masukan nilai matrik A baris ke-"<<(x+1)<<" kolom ke-"<<(y+1)<<" : "; 
cin>>matrikA[x][y]; 
} 
} 
cout<<endl;
cout<<"Matrik A :"<<endl; 
for (int x = 0;x<2;x++){ 
for (int y =0;y<2;y++){ 
cout <<matrikA[x][y]<<"   "; 
} 
cout<<endl; 
} 
cout<<endl; 
for (int x = 0;x<2;x++){ 
for (int y =0;y<2;y++){ 
cout <<"masukan nilai matrik B baris ke-"<<(x+1)<<" kolom ke-"<<(y+1)<<" : "; 
cin>>matrikB[x][y]; 
} 
} 
cout<<endl;
cout<<"Matrik B :"<<endl; 
for (int x = 0;x<2;x++){ 
for (int y =0;y<2;y++){ 
cout <<matrikB[x][y]<<"   "; 
} 
cout<<endl; 
} 
for (int x = 0;x<2;x++){ 
for (int y =0;y<2;y++){ 
matrikC[x][y]=0; 
for (int z =0;z<2;z++){ 
temp=matrikA[x][z]*matrikB[z][y]; 
matrikC[x][y]=matrikC[x][y]+temp; 
} 
} 
}
cout<<endl; 
cout<<"Matrik hasil perkalian :"<<endl; 
for (int x = 0;x<2;x++){ 
for (int y =0;y<2;y++){ 
cout <<matrikC[x][y]<<"   "; 
} 
cout<<endl; 
} 
getch(); 
}
