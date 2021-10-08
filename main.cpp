/**
 * @file main.cpp
 *
 * @author Alberto Ocaranza
 * Contact: alt.ocaranza@gmail.com
 *
 */
#include "include/Tokenizer.hpp"
#include "include/Template.hpp"
#include "include/OperationIdentifier.hpp"
#include "include/Evaluator.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

// Using my own CLI template.
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
        }else if(argList[0] == "-d"  || argList[0] == "-D" || argList[0] == "dot"){
            Tokenizer tk;
            Evaluator ev;
            
            vector<float> v1 = tk.numbers(argList[1]);
            vector<float> v2 = tk.numbers(argList[2]);
            ev.point_product(v1, v2); 
        }else if(argList[0] == "-cr"  || argList[0] == "-CR" || argList[0] == "cross"){
            Tokenizer tk;
            Evaluator ev;
            
            vector<float> v1 = tk.numbers(argList[1]);
            vector<float> v2 = tk.numbers(argList[2]);
            ev.cross_product(v1, v2); 
        }
    }
    return 0;
}