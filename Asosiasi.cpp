#include <iostream>
#include <string>
using namespace std;

class dokter;
class pasien { // asosiasi
public:
    string nama;
    vector<dokter*> daftar_dokter;
}