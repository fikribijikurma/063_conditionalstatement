#include <iostream>
using namespace std;

int main(){
    int nMtk, nFisika, nRerata;
    string status;

    cout << "Masukan nilai matematika = " << endl;
    cin >> nMtk;
    cout << "Masukan nilai fisika = " << endl;
    cin >> nFisika;

    if (nMtk + nFisika == 60){
        status = "lulus";
    }
    else if (nMtk > 70){
        status = "lulus";
    }
    else if (nMtk, nFisika < 60){
        status = "Tidak lulus";
    }
    cout << "Tampilkan status = " << status << endl;

    return 0;
}