#include <iostream>

using namespace std;

void loop() {
    for (int i = 0; i < 65; i++) {
        cout << "-" ;
    }
};

int npm;
string nama, kelas, cita, motivasi;

int main()
{   loop();
    cout<<"\n";
    cout<<"Nama : ";
    cin>>nama;cout<<"\n";
    
    cout<<"Npm : ";
    cin>>npm;cout<<"\n";
    
    cout<<"Cita-cita : ";
    cin>>cita;cout<<"\n";
    
    cout<<"Motivasi : ";
    cin>>motivasi;cout<<"\n";

    loop();
    return 0;
}
