using namespace std;

class descending{
    public:
      void inputmhs();
      void proses();
  	  void outputcari();
	    
    private:
      int nim[10];
      string nohp[20];
      string prodi[20];
      string nama[30];
      int i, n, b, cari, ada;
};

void descending::inputmhs(){
  	cout<<"========================================================"<<endl;
	cout<<"|    PROGRAM SORTING DAN SEARCHING MAHASISWA UAD       |"<<endl;
	cout<<"========================================================"<<endl;
	cout<<"Masukan banyak data mahasiswa = ";cin>>n;

 	for(i=0;i<n;i++){
		cout<<endl;
		
		cout<<"Data ke-"<<(i+1)<<":"<<endl;
		cout<<"NIM mahasiswa : ";cin>>nim[i];
		cout<<"Nama mahasiswa: ";cin>>nama[i];
		cout<<"Prodi         : ";cin>>prodi[i];
		cout<<"NO. HP        : ";cin>>nohp[i];
		cout<<endl;
    }
    
	cout<<"Data Mahasiswa"<<endl;
	cout<<"==============================================================================="<<endl;
	cout<<"|     NIM Mahasiswa   |   Nama Mahasiswa  |  Program Studi  |  No. Handphone  |"<<endl;
	cout<<"==============================================================================="<<endl;

    for(i=0;i<n;i++){
    	cout<<"|      "<<nim[i]<<"\t"<<nama[i]<<"\t\t"<<prodi[i]<<"\t\t"<<nohp[i]<<"    |"<<endl;
    }
	cout<<"==============================================================================="<<endl;
}