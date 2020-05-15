#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;
int saldo=1000000;
int pilihanbukalapak,ttlbayar,kembalian,jmlpembelian,hargaproduk,totalharga,diskon,potongan,ongkir,password;
int a,b,c,d,w,x,y,o,p,q,r,s,t;
char alamat[50],namapenerima[50];
void proses();
int pass[1]={434343};
int main()
{
char beliLgi;
string belanja;

atas:
cout<<"NAMA : Aufa dhiya ulhak\n";
cout<<"NIM  : F1B019029\n";
cout<<"KELOMPOK: 3\n";
 cout<<"===================================================="<<endl;
 cout<<"|                     BUKALAPAK                    |"<<endl;
 cout<<"===================================================="<<endl;
 cout<<endl;
 cout<<"DANA = Rp. 1.000.000 \n";
 cout<<"----------------------------------------------------"<<endl;
 cout<<"\nPilihan yang tersedia"<<endl;
 cout<<"----------------------------------------------------"<<endl; 
 cout<<"1. Belanja"<<endl;
 cout<<"2. Tiket kereta api"<<endl;
 cout<<"3. Voucher game"<<endl;
 cout<<"4. Voucher streaming"<<endl;
 cout<<"----------------------------------------------------"<<endl;
 cout<<"Pilihlah sesuai keinginan anda  : ";cin>>pilihanbukalapak;
 cout<<"----------------------------------------------------"<<endl;
system("cls");
switch(pilihanbukalapak)
{
	case 1:
		cout<<"===================Pilihan Belanja==================";
        cout<<" "<<"\n";

        cout<<"1. Sepatu"<<endl;
        cout<<"2. Kemeja"<<endl;
        cout<<"3. Topi"<<endl;
        cout<<"Pilih produk yang anda inginkan: "; cin>>a;
        if(a==1){
		 cout<<"----------------------------------------------------"<<endl;
		 cout<<"                     Merk sepatu                    ";
        cout<<endl;
        cout<<"1. Adidas = Rp. 900.000 \n";
        cout<<"2. Nike = Rp. 850.000 \n";
        cout<<"3. New Balance = Rp. 750.000 \n";
        cout<<"Pilih produk yang anda inginkan: "; cin>>w;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"Jumlah Pembelian  : ";cin>>jmlpembelian;
        cout<<"\nNama penerima: ";cin>>namapenerima;
		cout<<"\nAlamat: ";cin>>alamat;
        if (w==1){hargaproduk=900000;ongkir=35000;proses();}
        else if(w==2){hargaproduk=850000;ongkir=35000;proses();}
		else if(w==3){hargaproduk=750000;ongkir=35000;proses();}
		
		else
  {
   cout<<"Maaf, produk  tidak tersedia"<<endl;
   cout<<"Pilih kembali";getch();
   cout<<endl;
   goto atas;
  }	
		}
		else if(a==2){
		 cout<<"----------------------------------------------------"<<endl;
		 cout<<"                     Merk kemeja                    ";
        cout<<endl;
        cout<<"1. Erigo = Rp. 150.000 \n";
        cout<<"2. Guten inc = Rp. 185.000 \n";
        cout<<"3. Cottonology = Rp. 135.000 \n";
        cout<<"Pilih produk yang anda inginkan: "; cin>>x;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"Jumlah Pembelian  : ";cin>>jmlpembelian;
        cout<<"\nNama penerima: ";cin>>namapenerima;
		cout<<"\nAlamat: ";cin>>alamat;
        if (x==1){hargaproduk=150000;ongkir=35000;proses();}
        else if(x==2){hargaproduk=185000;ongkir=35000;proses();}
		else if(x==3){hargaproduk=135000;ongkir=35000;proses();}
		else
  {
   cout<<"Maaf, produk  tidak tersedia"<<endl;
   cout<<"Pilih kembali";getch();
   cout<<endl;
   goto atas;
  }
		}
		else if(a==3){
		 cout<<"----------------------------------------------------"<<endl;
		 cout<<"                     Merk Topi                    ";
        cout<<endl;
        cout<<"1. Converse = Rp. 150.000 \n";
        cout<<"2. Custom = Rp. 75.000 \n";
        cout<<"3. Vans = Rp. 135.000 \n";
        cout<<"Pilih produk yang anda inginkan: "; cin>>y;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"Jumlah Pembelian  : ";cin>>jmlpembelian;
        cout<<"\nNama penerima: ";cin>>namapenerima;
		cout<<"\nAlamat: ";cin>>alamat;
        if (y==1){hargaproduk=150000;ongkir=35000;proses();}
        else if(y==2){hargaproduk=75000;ongkir=35000;proses();}
		else if(y==3){hargaproduk=135000;ongkir=35000;proses();}
		else
  {
   cout<<"Maaf, produk  tidak tersedia"<<endl;
   cout<<"Pilih kembali";getch();
   cout<<endl;
   goto atas;
  }
		}
		break;
	case 2:
	cout<<"=============Pilih Tujuan keberangkatan=============";
        cout<<" "<<"\n";
        cout<<"1. Jakarta - Surabaya \n";
        cout<<"2. Jakarta - Bandung \n";
        cout<<"3. Jakarta - Yogyakarta \n";
        cout<<"Pilih Tujuan yang anda inginkan: "; cin>>b;
	cout<<"----------------------------------------------------"<<endl;
	cout<<"Jumlah Pembelian  : ";cin>>jmlpembelian;
        if (b==1){hargaproduk=350000;ongkir=0;proses();}
        else if(b==2){hargaproduk=150000;ongkir=0;proses();}
		else if(b==3){hargaproduk=250000;ongkir=0;proses();}
		else
  {
   cout<<"Maaf, tujuan  tidak tersedia"<<endl;
   cout<<"Pilih kembali";getch();
   cout<<endl;
   goto atas;
  }
	break;	
	case 3:
	cout<<"================Pilihan Voucher Game================";
        cout<<" "<<"\n";

        cout<<"1. Mobile Legends \n";
        cout<<"2. Free fire \n";
        cout<<"3. PUBG \n";
        cout<<"Pilih voucher yang anda inginkan: "; cin>>c;
        if(c==1){
	    cout<<"----------------------------------------------------"<<endl;
	    cout<<"                    Mobile Legends                  ";
        cout<<endl;
        cout<<"1. Voucher Mobile Legends = Rp. 5.000 (Belum termasuk PPN 10%)\n";
        cout<<"2. Voucher Mobile Legends = Rp. 50.000 (Belum termasuk PPN 10%) \n";
        cout<<"3. Voucher Mobile Legends = Rp. 500.000 (Belum termasuk PPN 10%) \n";
        cout<<"Pilih voucher yang anda inginkan: "; cin>>o;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"Jumlah Pembelian  : ";cin>>jmlpembelian;
        if (o==1){hargaproduk=5000;ongkir=500;proses();}
        else if(o==2){hargaproduk=50000;ongkir=5000;proses();}
		else if(o==3){hargaproduk=500000;ongkir=50000;proses();}
		else
  {
   cout<<"Maaf, voucher  tidak tersedia"<<endl;
   cout<<"Pilih kembali";getch();
   cout<<endl;
   goto atas;
  }	
		}
		else if(c==2){
		cout<<"----------------------------------------------------"<<endl;
		cout<<"                      Free Fire                     ";
        cout<<endl;
        cout<<"1. Voucher Free fire = Rp. 5.000 (Belum termasukPPN 10%)\n";
        cout<<"2. Voucher Free fire = Rp. 50.000 (Belum termasukPPN 10%) \n";
        cout<<"3. Voucher Free fire = Rp. 500.000 (Belum termasukPPN 10%)\n";
        cout<<"Pilih voucher yang anda inginkan: "; cin>>p;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"Jumlah Pembelian  : ";cin>>jmlpembelian;
        if (p==1){hargaproduk=5000;ongkir=500;proses();}
        else if(p==2){hargaproduk=50000;ongkir=5000;proses();}
		else if(p==3){hargaproduk=500000;ongkir=50000;proses();}
		else
  {
   cout<<"Maaf, voucher  tidak tersedia"<<endl;
   cout<<"Pilih kembali";getch();
   cout<<endl;
   goto atas;
  }
		}
		else if(c==3){
		cout<<"----------------------------------------------------"<<endl;
		cout<<"                     PUBG                    ";
        cout<<endl;
        cout<<"1. Voucher PUBG = Rp. 5.000 (Belum termasukPPN 10%) \n";
        cout<<"2. Voucher PUBG = Rp. 50.000 (Belum termasukPPN 10%) \n";
        cout<<"3. Voucher PUBG = Rp. 500.000 (Belum termasukPPN 10%) \n";
        cout<<"Pilih voucher yang anda inginkan: "; cin>>q;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"Jumlah Pembelian  : ";cin>>jmlpembelian;
        if (q==1){hargaproduk=5000;ongkir=500;proses();}
        else if(q==2){hargaproduk=50000;ongkir=5000;proses();}
		else if(q==3){hargaproduk=500000;ongkir=50000;proses();}
		else
  {
   cout<<"Maaf, voucher  tidak tersedia"<<endl;
   cout<<"Pilih kembali";getch();
   cout<<endl;
   goto atas;
  }
		}	
	break;
	case 4:
	cout<<"==============Pilihan Voucher Streaming=============";
        cout<<" "<<"\n";

        cout<<"1. Iflix \n";
        cout<<"2. Spotify premium \n";
        cout<<"3. Viu \n";
        cout<<"Pilih voucher yang anda inginkan: "; cin>>d;
        if(d==1){
	cout<<"----------------------------------------------------"<<endl;
		 cout<<"                     Iflix                    ";
        cout<<endl;
        cout<<"1. Iflix = Rp. 39000 1 Bulan\n";
        cout<<"2. Iflix = Rp. 108000 3 Bulan\n";
        cout<<"Pilih voucher yang anda inginkan: "; cin>>r;
    cout<<"----------------------------------------------------"<<endl;
        cout<<"Jumlah Pembelian  : ";cin>>jmlpembelian;
        if (r==1){hargaproduk=39000;ongkir=0;proses();}
        else if(r==2){hargaproduk=108000;ongkir=0;proses();}
		
		else
  {
   cout<<"Maaf, voucher  tidak tersedia"<<endl;
   cout<<"Pilih kembali";getch();
   cout<<endl;
   goto atas;
  }	
		}
		else if(d==2){
		 cout<<"----------------------------------------------------"<<endl;
		 cout<<"                     Spotify Premium                    ";
        cout<<endl;
        cout<<"1. Spotify Premium = Rp. 60.500 1 Bulan\n";
        cout<<"2. Spotify Premium = Rp. 181.500 3 Bulan\n";
        cout<<"3. Spotify Premium = Rp. 330.000 6 Bulan\n";
        cout<<"Pilih voucher yang anda inginkan: "; cin>>s;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"Jumlah Pembelian  : ";cin>>jmlpembelian;
        if (s==1){hargaproduk=60500;ongkir=0;proses();}
        else if(s==2){hargaproduk=181500;ongkir=0;proses();}
		else if(s==3){hargaproduk=330000;ongkir=0;proses();}
		else
  {
   cout<<"Maaf, voucher  tidak tersedia"<<endl;
   cout<<"Pilih kembali";getch();
   cout<<endl;
   goto atas;
  }
		}
		else if(d==3){
		 cout<<"----------------------------------------------------"<<endl;
		 cout<<"                     Viu                    ";
        cout<<endl;
        cout<<"1. Viu = Rp. 30.000 1 Bulan \n";
        cout<<"2. Viu = Rp. 120.000 6 Bulan  \n";
        cout<<"3. Viu = Rp. 240.000 12 Bulan \n";
        cout<<"Pilih voucher yang anda inginkan: "; cin>>t;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"Jumlah Pembelian  : ";cin>>jmlpembelian;
        if (t==1){hargaproduk=30000;ongkir=0;proses();}
        else if(t==2){hargaproduk=120000;ongkir=0;proses();}
		else if(t==3){hargaproduk=240000;ongkir=0;proses();}
		else
  {
   cout<<"Maaf, voucher  tidak tersedia"<<endl;
   cout<<"Pilih kembali";getch();
   cout<<endl;
   goto atas;
  }
		}
	break;	
}
 cout<<"Beli kembali produk? [Y/T] : ";cin>>beliLgi;
 system("cls");
  if(beliLgi=='Y'||beliLgi=='y')
  {goto atas;}
  else{
   cout<<"\nTerima Kasih Atas Pembelian Produk Kami";
   cout<<endl;
  }
}
void proses(){
	 totalharga=hargaproduk*jmlpembelian+ongkir;
	 password:
 cout<<"----------------------------------------------------"<<endl;
 cout<<"Harga Satuan                     : Rp. "<<hargaproduk<<endl;
 cout<<"Jumlah Pembelian                 : "<<jmlpembelian<<endl;
 cout<<"Ongkos kirim atau Biaya Tambahan : Rp. "<<ongkir<<endl;
 cout<<"Total Harga                      : Rp. "<<totalharga<<endl;
 cout<<"----------------------------------------------------"<<endl;
 cout<<"Masukkan PIN DANA anda: ";
 cin>>password;
 if(password==pass[0]){
 cout<<"\nAnda mendapatkan diskon 29% \n";
       diskon=totalharga*29/100;
       potongan=totalharga-diskon;
       saldo=saldo-potongan;
 cout<<"\nHarga setelah diskon : Rp. "<<potongan<<endl;
 cout<<"----------------------------------------------------"<<endl;
 cout<<"Sisa Saldo           : Rp. "<<saldo<<endl<<endl;
 cout<<"===================================================="<<endl;
}
 else{
  cout<<"Password anda salah, silakan masukkan ulang!"<<endl<<endl;
  system("cls");{goto password;}
 }
}
