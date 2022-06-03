void descending::outputcari(){
  ofstream pos;
  pos.open("Urutan Mahasiswa.txt", ios::out);
  pos << "KELOMPOK STORMI" << endl;
  pos << "Krisna Cakra Ningrat (2100018449)" <<endl;
  pos << "Anela Indra (2100018454)" <<endl;
  pos << "Sasqia Aulia Nur Aini (2100018456)" <<endl<<endl;
  cout<<"Masukan NIM mahasiswa Untuk Mencari : ";
  cin>>cari;
  pos << "NIM Mahasiswa yang dicari : " <<cari<<endl;
    ada = 0;
        
    for(b=0;b<n-1;b++){
        if(nim[b]==cari){
            ada=1;
            cout<<"==============================================================================="<<endl;
            pos<<"==============================================================================="<<endl;
            cout<<"|    NIM Mahasiswa   |   Nama Mahasiswa   |  Program Studi  |  No. Handphone  |"<<endl;
            pos<<"|    NIM Mahasiswa   |   Nama Mahasiswa   |  Program Studi  |  No. Handphone  |"<<endl;
            cout<<"==============================================================================="<<endl;
            pos<<"==============================================================================="<<endl;
            cout<<"|        "<<nim[b]<<"\t"<<nama[b]<<"\t\t"<<prodi[b]<<"\t\t"<<nohp[b]<<"       |"<<endl;
            pos<<"|        "<<nim[b]<<"\t"<<nama[b]<<"\t\t"<<prodi[b]<<"\t\t"<<nohp[b]<<"       |"<<endl;
    	}
    }
   	cout<<"==============================================================================="<<endl;
  pos<<"==============================================================================="<<endl;

    if (ada == 0){
  		cout<<"Data Tidak ditemukan"<<endl;
      pos<<"Data Tidak ditemukan"<<endl;
    }
  pos.close();
}