#include <iostream>
using namespace std;
//Christian Nathaniel
//221401136

int main(){
    int nilai[3] = {125, 345, 750}, *petunjuk = &nilai[0];

    cout<<"Nilai "<<*petunjuk<<" ada alamat "<<petunjuk<<endl;
    cout<<"Nilai "<<*(petunjuk+1)<<" ada alamat "<<petunjuk+1<<endl;
    cout<<"Nilai "<<*(petunjuk+2)<<" ada alamat "<<petunjuk+2<<endl;
    
}