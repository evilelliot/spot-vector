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
#include "include/Commands.hpp"
#include "include/Vector2D.hpp"
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
    
    // If argc equals 1, then no argument given
    if(argc == 1){
        cout << "Check -h for help!" << endl;
    }else{
        vector<string> arguments = Commands::artos(argv, argc);
        // Parsing commands
        if(Commands::command(arguments[0], "Help")){
            t.help();
        }else if(Commands::command(arguments[0], "Version")){
            t.version();    
        }else if(Commands::command(arguments[0], "Credits")){
            t.credits();
        }else if(Commands::command(arguments[0], "Operate")){
          if(arguments.size() == 2){
            string type = op.identify(arguments[1]);  
            Evaluator ev(type, arguments[1]);      
          }
        }else if(Commands::command(arguments[0], "Dot")){
            Tokenizer tk;
            Evaluator ev;
            
            vector<float> v1 = tk.numbers(arguments[1]);
            vector<float> v2 = tk.numbers(arguments[2]);
            ev.point_product(v1, v2); 
        }else if(Commands::command(arguments[0], "Cross")){
            Tokenizer tk;
            Evaluator ev;
            
            vector<float> v1 = tk.numbers(arguments[1]);
            vector<float> v2 = tk.numbers(arguments[2]);
            ev.cross_product(v1, v2); 
        }else if(Commands::command(arguments[0], "Angle")){
            Tokenizer tk;
            Vector2D v2;
            
            vector<float> v = tk.numbers(arguments[1]);
            vector<float> w = tk.numbers(arguments[2]);

            cout << "θ of vw = " << v2.getAngle(v,w) << endl;
        }
    }
    return 0;
}