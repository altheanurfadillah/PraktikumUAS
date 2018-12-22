#include <iostream>
using namespace std;

void iden (int n){
 for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
            if(i==j) cout<<"1 ";
            else cout<<"0 ";
            }
            cout<<endl;

             }
}

int main(){
    int n;

    cout<<"STT Pelita Bangsa "<<endl;
    cout<<"Ulangan Akhir Semester"<<endl;
    cout<<"Althea Nur Fadillah"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"MENCETAK MATRIKS IDENTITAS"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"Masukkan ordo matriks : ";
    cin>>n;
    cout<<endl;
    iden(n);
}
