#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>

using namespace std;

int main()
{
	int i, nilai, benar=0, salah=0;
	string user, pass;
	char login, pilihan, jawab, pilih;
	atas : 
	cout<<"=============================================\n";
	cout<<"                KUIS ASAH OTAK\n";
	cout<<"=============================================\n";
	cout<<"\n Masukkan email anda : ";cin>>user;
	cout<<"\n Masukkan Password  : ";cin>>pass;cout<<"\t\t\n";
		if (user=="kelompok3p4@gmail.com" && pass=="kelompok3")
		{
		cout<<"\t\t\t Login Berhasil\t\t\n";
		}
		else
		{
		cout<<"\t\t\t Ussername dan password anda salah silahkan coba kembali \t\t\n";
		cout<<"\t\t\t Coba lagi ?[y/t]  : ";cin>>login;cout<<"\t\t\n";
			if (login=='y' || login=='Y')
			{system("cls");
			goto atas;}
			else{goto selesai;}
			if (login=='t' || login=='T')
			{goto selesai;}		
			}
		system("cls");
	{
    
    cout<<"-------------------------------------------------------------------------\n";
	cout<<"PERHATIAN: PILIHLAH JAWABAN YANG MENURUT ANDA PALING BENAR, JIKA MASIH RAGU\n";
	cout<<"           TETAPLAH BERADA DI SOAL TERSEBUT,KARENA JIKA SUDAH TERLEWATI MAKA\n";
	cout<<"           TIDAK AKAN BISA KEMBALI\n";
	cout<<"=========================================================================\n";
	cout<<" 1. Apa itu COVID-19?\n\n";
	string pgno1[4]={"a. Penyakit berbahaya ","b. Makanan","c. Minuman","d. Tanaman"};
	for (i=0;i<=3;i++)
	{cout<<pgno1[i]<<"\n";}
    cout<<" Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'a' || jawab == 'A')
        {benar++;}
        else{
        salah++;}
    system("cls");
    cout<<"PERHATIAN: PILIHLAH JAWABAN YANG MENURUT ANDA PALING BENAR, JIKA MASIH RAGU\n";
	cout<<"           TETAPLAH BERADA DI SOAL TERSEBUT,KARENA JIKA SUDAH TERLEWATI MAKA\n";
	cout<<"           TIDAK AKAN BISA KEMBALI\n";
    cout<<"==========================================================================\n";        
    cout<<" 2. Apa kepanjangan dari COVID-19?\n\n";
    string pgno2[4]={"a. Corona virus Down","b. Corona virus Disease","c. Corona virus Diss","d. Corona virus Danger"};
	for (i=0;i<=3;i++)
	{cout<<pgno2[i]<<"\n";}
    cout<<" Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'b' || jawab == 'B')
        {benar++;}
        else{
        salah++;}
    system("cls");
    cout<<"PERHATIAN: PILIHLAH JAWABAN YANG MENURUT ANDA PALING BENAR, JIKA MASIH RAGU\n";
	cout<<"           TETAPLAH BERADA DI SOAL TERSEBUT,KARENA JIKA SUDAH TERLEWATI MAKA\n";
	cout<<"           TIDAK AKAN BISA KEMBALI\n";
    cout<<"==========================================================================\n";        
	cout<<" 3. Berapa jam COVID-19 mampu bertahan pada permukaan benda berbahan baja?\n\n";
	string pgno3[4]={"a. 1jam","b. 2jam","c. 72jam","d. 100jam"};
	for (i=0;i<=3;i++)
	{cout<<pgno3[i]<<"\n";}
    cout<<" Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'c' || jawab == 'C')
        {benar++;}
        else{
        salah++;}
    system("cls");
    cout<<"PERHATIAN: PILIHLAH JAWABAN YANG MENURUT ANDA PALING BENAR, JIKA MASIH RAGU\n";
	cout<<"           TETAPLAH BERADA DI SOAL TERSEBUT,KARENA JIKA SUDAH TERLEWATI MAKA\n";
	cout<<"           TIDAK AKAN BISA KEMBALI\n";
	cout<<"==========================================================================\n";				
	cout<<" 4. Apa itu PDP?\n\n";
	string pgno4[4]={"a. Pasien dalam Pendidikan ","b. Pasien dalam Pengawasan","c. Pasien dalam Penerbangan","d. Pasien dalam Perjalanan"};
    for (i=0;i<=3;i++)
	{cout<<pgno4[i]<<"\n";}
	cout<<" Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'b' || jawab == 'B')
        {benar++;}
        else{
        salah++;}
    system("cls");
    cout<<"PERHATIAN: PILIHLAH JAWABAN YANG MENURUT ANDA PALING BENAR, JIKA MASIH RAGU\n";
	cout<<"           TETAPLAH BERADA DI SOAL TERSEBUT,KARENA JIKA SUDAH TERLEWATI MAKA\n";
	cout<<"           TIDAK AKAN BISA KEMBALI\n";
    cout<<"==========================================================================\n";       
    cout<<" 5. Apa itu PSBB?\n\n";
    string pgno5[4]={"a. Pembatasan Sosial Berskala Besar","b. Pembatasan Sosial Berskala Banyak","c. Penerangan Sosial Berskala Besar","d. Penertiban Sosial Berskala Besar"};
	for (i=0;i<=3;i++)
	{cout<<pgno5[i]<<"\n";}
    cout<<" Jawaban Anda : ";
    cin >> jawab;
            if(jawab == 'a' || jawab == 'A')
        {benar++;}
        else{
        salah++;}
    system("cls");
    cout<<"PERHATIAN: PILIHLAH JAWABAN YANG MENURUT ANDA PALING BENAR, JIKA MASIH RAGU\n";
	cout<<"           TETAPLAH BERADA DI SOAL TERSEBUT,KARENA JIKA SUDAH TERLEWATI MAKA\n";
	cout<<"           TIDAK AKAN BISA KEMBALI\n";
	cout<<"==========================================================================\n";
	cout<<" 6. Apa saja gejala COVID-19, kecuali??\n\n";
	string pgno6[4]={"a. Batuk Kering","b. Sesak napas","c. Demam ","d. Sakit perut"};
	for (i=0;i<=3;i++)
	{cout<<pgno6[i]<<"\n";}
	cout<<" Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'd' || jawab == 'D')
        {benar++;}
        else{
        salah++;}
	system("cls"); 
	cout<<"PERHATIAN: PILIHLAH JAWABAN YANG MENURUT ANDA PALING BENAR, JIKA MASIH RAGU\n";
	cout<<"           TETAPLAH BERADA DI SOAL TERSEBUT,KARENA JIKA SUDAH TERLEWATI MAKA\n";
	cout<<"           TIDAK AKAN BISA KEMBALI\n";    
	cout<<"==========================================================================\n";
	cout<<" 7. Apa upaya pemerintah mengatasi COVID-19?\n\n";
	string pgno7[4]={"a. Meliburkan Sekolah","b. Membiarkannya","c. Melaksanakan PSBB","d. Jawaban A dan C benar"};
	for (i=0;i<=3;i++)
	{cout<<pgno7[i]<<"\n";}
    cout<<" Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'd' || jawab == 'D')
        {benar++;}
        else{
        salah++;}
    system("cls");
    cout<<"PERHATIAN: PILIHLAH JAWABAN YANG MENURUT ANDA PALING BENAR, JIKA MASIH RAGU\n";
	cout<<"           TETAPLAH BERADA DI SOAL TERSEBUT,KARENA JIKA SUDAH TERLEWATI MAKA\n";
	cout<<"           TIDAK AKAN BISA KEMBALI\n";
	cout<<"==========================================================================\n";
	cout<<" 8. Cara mudah mencegah COVID-19?\n\n";
	string pgno8[4]={"a. Rajin mencuci tangan","b. Traveling","c. Berenang di sungai","d. Berkunjung ke museum"};
    for (i=0;i<=3;i++)
	{cout<<pgno8[i]<<"\n";}
	cout<<" Jawaban Anda : ";
    cin >> jawab;
            if(jawab == 'a' || jawab == 'A')
        {benar++;}
        else{
        salah++;}
    system("cls");
    cout<<"PERHATIAN: PILIHLAH JAWABAN YANG MENURUT ANDA PALING BENAR, JIKA MASIH RAGU\n";
	cout<<"           TETAPLAH BERADA DI SOAL TERSEBUT,KARENA JIKA SUDAH TERLEWATI MAKA\n";
	cout<<"           TIDAK AKAN BISA KEMBALI\n";
	cout<<"==========================================================================\n";
	cout<<" 9. Apa yang harus dilakukan jika sedang berada atau pernah berkunjung ke wilayah dimana COVID-19 menyebar?\n\n";
	string pgno9[4]={"a. Isolasi diri","b. Nongkrong bersama teman","c. olahraga","d. Pergi ke mall"};
	for (i=0;i<=3;i++)
	{cout<<pgno9[i]<<"\n";}
	cout<<" Jawaban Anda : ";
    cin >> jawab;
            if(jawab == 'a' || jawab == 'A')
        {benar++;}
        else{
        salah++;}
    system("cls");
    cout<<"PERHATIAN: PILIHLAH JAWABAN YANG MENURUT ANDA PALING BENAR, JIKA MASIH RAGU\n";
	cout<<"           TETAPLAH BERADA DI SOAL TERSEBUT,KARENA JIKA SUDAH TERLEWATI MAKA\n";
	cout<<"           TIDAK AKAN BISA KEMBALI\n";
	cout<<"==========================================================================\n";
	cout<<" 10. Berapa lama masa inkubasi COVID-19?\n\n";
	string pgno10[4]={"a. 24 hari","b. 15 hari","c. 6 hari","d. 14 hari"};
	for (i=0;i<=3;i++)
	{cout<<pgno10[i]<<"\n";}
	cout<<" Jawaban Anda : ";
    cin >> jawab;
            if(jawab == 'd' || jawab == 'D')
        {benar++;}
        else{
        salah++;} 
			
	cout<<"SELESAI???[y]:";cin>>pilihan;cout<<"\n";
	 if (pilihan=='y' || pilihan=='Y')
	  {goto nilai;}												       

	}nilai :
	 cout<<"=====================================================\n";
	 cout<<"Nilai yang anda dapatkan :\n"<<endl;
     nilai = benar*10;
     cout<<"    Jumlah Benar : "<<benar<<" soal "<<endl;
     cout<<"    Jumlah Salah : "<<salah<<" soal "<<endl;
     cout<<"    Nilai Anda   : "<<nilai<<"\n"<<endl;
			selesai : 
			cout<<"---------------------------"<<endl;
			cout<<"        Thank you\n";
			cout<<"---------------------------"<<endl;
	
}

