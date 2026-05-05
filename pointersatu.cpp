#include<iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout << " No induk = " <<nim<<endl;
     }
};


int main (){
    mahasiswa mhs{1}; //object mhs
    mhs.showNim(); // member access operator


    mahasiswa &reffMhs = mhs; //pointer reference reffMhs
    reffMhs.nim = 2; //member access operator
    mhs.showNim();

    mahasiswa *pMhs = &mhs; // pointer dereference pMhs
    pMhs->nim = 3; //arrow operator
    pMhs->showNim();
    return 0;
}