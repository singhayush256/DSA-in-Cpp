#include<iostream> 
#include<string> 
using namespace std; 

int main(){ 
    string text = "HELLO WORD"; 

    for(size_t i = 0; i < text.length(); i++){ 
        if(text[i] >= 'A' && text[i] <= 'Z'){ 
            text[i] = text[i] + 32; 
        } 
    } 

    cout << text << endl; // Output: hello word
    return 0; 
}
