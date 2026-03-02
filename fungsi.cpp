
#include <iostream>
using namespace std;

//4
float Phi = 3.14159;

//fungsi input
float HitungLuas(float r){
    return Phi * r * r;
}

//fungsi
void Lingkaran(){
//input 
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