#include <iostream>
#include <string>

using namespace std;

class Mahasiswa
{
public:
    string nama;
    string jurusan;
    string NIM;
    float IPK;
};

int main(int argc, char const *argv[])
{
    Mahasiswa m1;
    Mahasiswa m2;

    m1.nama = "Joko";
    m1.jurusan = "Sistem Informatika";
    m1.NIM = "123456";
    m1.IPK = 3.5;

    m2.nama = "Kendil";
    m2.jurusan = "Teknik Informatika";
    m2.NIM = "654321";
    m2.IPK = 3.0;

    cout << "Mahasiswa 1" << endl;

    cout << m1.nama << endl;
    cout << m1.jurusan << endl;
    cout << m1.NIM << endl;
    cout << m1.IPK << endl;

    cout << "Mahasiswa 2" << endl;

    cout << m2.nama << endl;
    cout << m2.jurusan << endl;
    cout << m2.NIM << endl;
    cout << m2.IPK << endl;

    return 0;
}
