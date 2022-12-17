#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Mahasiswa
{
public:
    string nama;
    string NIM;
    string jurusan;

    Mahasiswa(string nama, string NIM, string jurusan)
    {
        Mahasiswa::nama = nama;
        Mahasiswa::NIM = NIM;
        Mahasiswa::jurusan = jurusan;
    }

    string toString(int length)
    {
        string enter = "\n";

        return nama + " " + NIM + " " + jurusan + enter;
    }
};

class Database
{
public:
    fstream out;
    fstream in;
    string fileName;
    int length = 0;

    Database(string fileName)
    {
        Database::fileName = fileName;
    }

    void save(Mahasiswa data)
    {
        Database::out.open(Database::fileName, ios::app);
        Database::out << data.toString(length);
        Database::out.close();
    }

    void showAll()
    {
        string nama, nim, jurusan;
        Database::in.open(Database::fileName, ios::in);
        int index = 1;
        while (!Database::in.eof())
        {
            Database::in >> nama;
            Database::in >> nim;
            Database::in >> jurusan;
            if (nama != "")
            {
                cout << index++ << ".";
                cout << nama + " ";
                cout << nim + " ";
                cout << jurusan + " ";
                cout << endl;
            }
        }
        length = index;
        Database::in.close();
    }
};

int main(int argc, char const *argv[])
{
    Database database = Database("mahasiswa.txt");
    cout << "Daftar Mahasiswa" << endl;
    database.showAll();
    // database.getLineOfTextFile();
    string nama, nim, jurusan;
    cout << "\nMasukkan data Mahasiswa" << endl;
    cout << "Nama : ";
    cin >> nama;
    cout << "NIM : ";
    cin >> nim;
    cout << "Jurusan : ";
    cin >> jurusan;

    Mahasiswa inputMahasiswa = Mahasiswa(nama, nim, jurusan);

    database.save(inputMahasiswa);
    return 0;
}
