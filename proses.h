void descending::proses(){
	for(i=0;i<n;i++){
		for(b=0;b<n-1;b++){
			if(nim[b] > nim[b+1]){
				nim[b]=nim[b];
        nim[b]=nim[b+1];
        nim[b+1]=nim[b];
			
        nama[b]=nama[b];
        nama[b]=nama[b+1];
				nama[b+1]=nama[b];
			
        prodi[b]=prodi[b];
        prodi[b]=prodi[b+1];
				prodi[b+1]=prodi[b];
				
				nohp[b]=nohp[b];
			  nohp[b]=nohp[b+1];
				nohp[b+1]=nohp[b];
			}
		}
	}   
	cout<<endl;
	cout<<endl;
    cout<<endl;
    cout<<"Diurutkan secara Descending : "<<endl;
    cout<<"==============================================================================="<<endl;
	cout<<"|    No. Handphone   |   Program Studi   |  Nama Mahasiswa  |  NIM Mahasiswa  |"<<endl;
	cout<<"==============================================================================="<<endl;
    
    for(b=0;b<n;b++){
		cout<<"|     "<<nohp[b]<<"\t"<<prodi[b]<<"\t\t"<<nama[b]<<"\t\t"<<nim[b]<<"    |"<<endl;
    }
    cout<<"==============================================================================="<<endl;		
}