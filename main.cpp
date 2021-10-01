/*
* Author: Alberto Ocaranza
*/
#include "src/Template.hpp"
#include "src/OperationIdentifier.hpp"
#include "src/Evaluator.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
// https://replit.com/join/bsxzoohtul-nomi-dev
// https://github.com/evilelliot/Testing-CLI
int main(int argc, char* argv[]){
    // Importing a testing class template
    Template t;
    OperationIdentifier op;
    
    // If argc equals 1, then no argument exists
    if(argc == 1){
        cout << "Check -h for help!" << endl;
    }else{
        // Converting argv char to an string argList (easier comparison)
        std::vector<std::string> argList;
        for(int i=1;i<argc;i++){
            argList.push_back(argv[i]); 
        }
        // Parsing commands
        if(argList[0] == "-h" || argList[0] == "-H" || argList[0] == "help"){
            t.help();
        }else if(argList[0] == "-v"  || argList[0] == "-V" || argList[0] == "version"){
            t.version();    
        }else if(argList[0] == "-c"  || argList[0] == "-C" || argList[0] == "credits"){
            t.credits();
        }else if(argList[0] == "-o"  || argList[0] == "-O" || argList[0] == "operate"){
          if(argList.size() == 2){
            string type = op.identify(argList[1]);  
            Evaluator ev(type, argList[1]);      
          }
        }
    }
    return 0;
}