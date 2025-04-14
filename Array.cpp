#include <iostream>
using namespace std;

string matkul[] = {"Pemrograman Dasar", "Algoritma"};

float nilaiAkhir[2] = {1, 2.5};

char grade[5];

int main(){
    cout << "Nama matakuliah : " << matkul[1] << endl;
    matkul[0] = "Logika teknik pemrograman";
    cout << "Nama matakuliah : " << matkul[0] << endl;
    
}