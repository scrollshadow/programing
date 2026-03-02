
#include <iostream>
using namespace std;


float Phi = 3.14159;


float HitungLuas(float r){
    return Phi * r * r;
}


void Lingkaran(){

    float jarijari;
    cout <<"Masukkan jarijari: ";  
    cin >> jarijari;
//output
    float luas = HitungLuas(jarijari);
    cout  <<"LuasLingkaran = " << luas << endl;

}
//mulai
int main(){
    Lingkaran();
    return 0;
}//selesai