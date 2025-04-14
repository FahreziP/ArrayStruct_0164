#include <iostream>
using namespace std;

struct Hero{
    string nama;
    string role;
    string tipe;
};

int main(){
    Hero CharHero;

    cout << "Masukkan nama hero = ";
    cin >> CharHero.nama;
    cout << "Masukkan jenis role = ";
    cin >> CharHero.role;
    cout << "Masukkan tipe hero = ";
    cin >> CharHero.tipe;

    cout << endl;
    cout << "Tampilkan Hero" << endl;
    cout << endl;

    cout << "Nama hero = " << CharHero.nama << endl;
    cout << "Jenis role = " << CharHero.role << endl;
    cout << "Tipe hero = " << CharHero.tipe << endl;
}