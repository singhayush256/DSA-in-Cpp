#include<iostream>
#include<string>
using namespace std;
int main(){
    string ip;
    cout << "Enter an IP address: ";
    cin >> ip;

    string defangrd = "";
    for(int i=0; i<ip.length(); i++){
        if(ip[i] == '.'){
            defangrd += "[.]";
        } else {
            defangrd += ip[i];
        }
    }
    cout << "Defanged IP address: " << defangrd << endl;
    return 0;
}