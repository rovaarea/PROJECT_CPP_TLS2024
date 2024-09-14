#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int Dollar,Rupiah;
    
    //mengeluarkan tulisan mata uang dollar ke rupiah
    cout<<"PROGRAM KONVERSI MATA UANG DOLLAR KE RUPIAH";
    
    //Meminta masukan jumlah nilai dalam mata uang dollar
    cout<<"\nMasukan Nilai Dollar : ";
    
    //Menuliskan jumlah nilai dollar
    cin>>Dollar;
    
    // Conditional statement untuk mengecek jika Dollar adalah positif
    if (Dollar > 0) {
    	
        //Mengalikan dengan jumlah dalam rupiah
        Rupiah = Dollar * 15202;
        
        //Mendapatkan hasil dalam bentuk rupiah
        cout<<"Hasilnya Nilai Rupiah : "<<Rupiah;
        
    // Conditional statement untuk mengecek jika dollar tidak positif
    } else {
    	
    	//Hasil nilai dollar harus positif
        cout<<"Nilai Dollar harus positif!";
    }
    
    return 0;
}
