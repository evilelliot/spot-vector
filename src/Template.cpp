/**
 * @file Template.cpp
 *
 * @author Alberto Ocaranza
 * Contact: alt.ocaranza@gmail.com
 *
 */
#include "../include/Template.hpp"
#include <iostream>
#include <string>
using namespace std;

void Template::help(){
    cout << "--------------------------------------" << endl;
    cout << R"(
   _____             __ 
  / ___/____  ____  / /_
  \__ \/ __ \/ __ \/ __/
 ___/ / /_/ / /_/ / /_  
/____/ .___/\____/\__/  
    /_/                                     
)" << '\n';
    cout << "--------------------------------------" << endl;
    cout << "usage:\033[1;32m spot \033[0m \033[1;33m[options]\033[0m \033[1;36m(arguments)\033[0m" << endl;
    cout << "-h  | -H  | help" << endl;
    cout << "-v  | -V  | version" << endl;
    cout << "-c  | -C  | credits" << endl;
    cout << "-o  | -o  | operate [some expression]" << endl;
    cout << "-d  | -D  | dot [vector] [vector]" << endl;
    cout << "-cr | -CR | cross [vector] [vector]" << endl;
    cout << "--------------------------------------" << endl;
}
void Template::version(){
    // lmao I totally forgot to update this message
    cout << "\033[1;32mSpot 1.7.1\033[0m" << endl;
}
void Template::credits(){
    cout << "Made by: Alberto Ocaranza (fevil)" << endl;
    cout << "https://github.com/evilelliot" << endl;
}
void Template::greetings(string data){
    cout << data << endl;
}
void Template::greetings(string data, int times){
    if(times > 100){
        cout << "You can't just fucken spam inside a goddamn CLI program you prick >:(" << endl;
    }else{
        for(int i = 0; i < times; i++){
            cout << data << endl;
        }
    }
}