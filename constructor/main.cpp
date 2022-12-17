#include <iostream>
#include <string>

using namespace std;

class KelasPolos
{
public:
    string key;
    int value;
};

// dengan constructor
class KelasGakPolos
{
public:
    string nama;
    string jurusan;
    string NIM;
    float IPK;
    
    // KelasGakPolos()
    // {
    //     cout << "ini di panggil dari constructor" << endl;
    // }

    // constructor dengan parameter
    KelasGakPolos(string nama, string jurusan, string NIM, float IPK)
    {
        KelasGakPolos::nama = nama;
        KelasGakPolos::jurusan = jurusan;
        KelasGakPolos::NIM = NIM;
        KelasGakPolos::IPK = IPK;

        cout << KelasGakPolos::nama << endl;
        cout << KelasGakPolos::jurusan << endl;
        cout << KelasGakPolos::NIM << endl;
        cout << KelasGakPolos::IPK << endl;
    }
};

int main(int argc, char const *argv[])
{
    KelasGakPolos kelas = KelasGakPolos("joko", "SI", "123", 4.0);
    KelasGakPolos kelas2 = KelasGakPolos("budi", "tataboga", "321", 3.9);
    return 0;
}
