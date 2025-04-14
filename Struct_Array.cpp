#include <iostream>
using namespace std;

struct Hero{
    string nama;
    string role;
    string tipe;
};

int main(){
    Hero CharHero[3];

    for(int i = 0; i < 3; i++){
    cout << "Hero ke- " << i+1 << endl;
    cout << "Masukkan nama hero = ";
    cin >> CharHero[i].nama;
    cout << "Masukkan jenis role = ";
    cin >> CharHero[i].role;
    cout << "Masukkan tipe hero = ";
    cin >> CharHero[i].tipe;
    }

    cout << endl;
    cout << "Tampilkan Hero" << endl;
    cout << endl;

    for(int i = 0; i < 3; i++){
    cout << "Hero ke- " << i+1 << endl;
    cout << "Nama hero = " << CharHero[i].nama << endl;
    cout << "Jenis role = " << CharHero[i].role << endl;
    cout << "Tipe hero = " << CharHero[i].tipe << endl;
    }
}