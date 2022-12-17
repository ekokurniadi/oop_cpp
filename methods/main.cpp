#include <iostream>
#include <string>

using namespace std;

class Mahasiswa
{
public:
    string name;
    float IPK;

    Mahasiswa(string name, float IPK)
    {
        Mahasiswa::name = name;
        Mahasiswa::IPK = IPK;
    }

    // method tanpa parameter
    void tampilkanData()
    {
        cout << Mahasiswa::name << endl;
        cout << Mahasiswa::IPK << endl;
    }

    // method dengan parameter
    void ubahNama(const char *namaBaru)
    {
        Mahasiswa::name = namaBaru;
    }

    // method dengan return
    string getNama()
    {
        return Mahasiswa::name;
    }

    float getIPK()
    {
        return Mahasiswa::IPK;
    }

    // method dengan return dan parameter pas by reference
    float upIPK(const float &nilaiTambahan)
    {
        return Mahasiswa::IPK += nilaiTambahan;
    }
};

int main(int argc, char const *argv[])
{
    Mahasiswa mahasiswa = Mahasiswa("Eko", 3.5);
    mahasiswa.tampilkanData();
    mahasiswa.ubahNama("Kurniadi");
    mahasiswa.tampilkanData();
    mahasiswa.upIPK(3);
    mahasiswa.tampilkanData();

    return 0;
}
