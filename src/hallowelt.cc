#include<iostream>
#include<string>
<<<<<<< HEAD
using namespace std;

int main(int argc, char** argv){
    enum languages {german, english, french};
    string greetings[3] = {"Hallo Basti", "Hello Basti", "Salut Basti!"};
    languages lang = french;
    cout << greetings[lang] << endl;
    return 0;
}
