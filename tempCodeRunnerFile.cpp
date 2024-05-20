#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
    const int Id;
    string nama;
    float nilai;

public:
    mahasiswa(int pId, string pNama, float pNilai) :Id(pId),
        nama(pNama), nilai(pNilai)
    {   // Member initialization List
        // Definisi
    }
    ~mahasiswa() {
        cout << "Id    = " << Id << endl;
        cout << "Nama  = " << nama << endl;
        cout << "Nilai = " << nilai << endl;

    }
};

int main() {
    mahasiswa mhs(12, "Asroni", 98.5);
    return 0;
}