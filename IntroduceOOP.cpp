#include <iostream>
using namespace std;

//Membuat program class mahasiswa
class Mahasiswa{
    public :
    int nim;
    string nama;
    float nilai;
    
    void printData(){
        cout << "NIM : " << nim << endl;
        cout << "Nama : " << nama << endl;
        cout << "Nilai : " << nilai << endl;
    }

};
int main(){
    Mahasiswa mhs;
    mhs.nim = 2024;
    mhs.nama = "abra";
    mhs.nilai = 85.0;

    mhs.printData();
}
    