#include "Evaluator.hpp"
#include <regex>
#include <string>
#include <iostream>
using namespace std;


Evaluator::Evaluator(string type, string e): _exp(e){
  int flag = 0;
  const regex vector_2D("(\\()+((-?[0-9]\\d*(\\.\\d+)?)+(\\,)+(-?[0-9]\\d*(\\.\\d+)?))+(\\))");
  const regex vector_3D("(\\()+((-?[0-9]\\d*(\\.\\d+)?)+(\\,)+(-?[0-9]\\d*(\\.\\d+)?))+(\\,)+(-?[0-9]\\d*(\\.\\d+)?)+(\\))");
  const regex sum_v2D("(\\()+((-?[0-9]\\d*(\\.\\d+)?)+(\\,)+(-?[0-9]\\d*(\\.\\d+)?))+(\\))+(\\+)(\\()+((-?[0-9]\\d*(\\.\\d+)?)+(\\,)+(-?[0-9]\\d*(\\.\\d+)?))+(\\))");
  const regex sumb_v2D("(\\[)+(\\()+((-?[0-9]\\d*(\\.\\d+)?)+(\\,)+(-?[0-9]\\d*(\\.\\d+)?))+(\\))+(\\+)(\\()+((-?[0-9]\\d*(\\.\\d+)?)+(\\,)+(-?[0-9]\\d*(\\.\\d+)?))+(\\))+(\\])");
  const regex sumbl_v2D("(\\[)+(\\()+((-?[0-9]\\d*(\\.\\d+)?)+(\\,)+(-?[0-9]\\d*(\\.\\d+)?))+(\\))+(\\+)(\\()+((-?[0-9]\\d*(\\.\\d+)?)+(\\,)+(-?[0-9]\\d*(\\.\\d+)?))+(\\))+(\\])+(\\+)+(\\()+((-?[0-9]\\d*(\\.\\d+)?)+(\\,)+(-?[0-9]\\d*(\\.\\d+)?))+(\\))");
  const regex sumbr_v2D("(\\()+((-?[0-9]\\d*(\\.\\d+)?)+(\\,)+(-?[0-9]\\d*(\\.\\d+)?))+(\\))+(\\+)+(\\[)+(\\()+((-?[0-9]\\d*(\\.\\d+)?)+(\\,)+(-?[0-9]\\d*(\\.\\d+)?))+(\\))+(\\+)(\\()+((-?[0-9]\\d*(\\.\\d+)?)+(\\,)+(-?[0-9]\\d*(\\.\\d+)?))+(\\))+(\\])");
  const regex res_v2D("(\\()+((-?[0-9]\\d*(\\.\\d+)?)+(\\,)+(-?[0-9]\\d*(\\.\\d+)?))+(\\))+(\\-)(\\()+((-?[0-9]\\d*(\\.\\d+)?)+(\\,)+(-?[0-9]\\d*(\\.\\d+)?))+(\\))");
  const regex resb_v2D("(\\[)+(\\()+((-?[0-9]\\d*(\\.\\d+)?)+(\\,)+(-?[0-9]\\d*(\\.\\d+)?))+(\\))+(\\-)(\\()+((-?[0-9]\\d*(\\.\\d+)?)+(\\,)+(-?[0-9]\\d*(\\.\\d+)?))+(\\))+(\\])");
  const regex resbr_v2D("(\\[)+(\\()+((-?[0-9]\\d*(\\.\\d+)?)+(\\,)+(-?[0-9]\\d*(\\.\\d+)?))+(\\))+(\\-)(\\()+((-?[0-9]\\d*(\\.\\d+)?)+(\\,)+(-?[0-9]\\d*(\\.\\d+)?))+(\\))+(\\])");
  const regex resbl_v2D("(\\()+((-?[0-9]\\d*(\\.\\d+)?)+(\\,)+(-?[0-9]\\d*(\\.\\d+)?))+(\\))+(\\-)+(\\[)+(\\()+((-?[0-9]\\d*(\\.\\d+)?)+(\\,)+(-?[0-9]\\d*(\\.\\d+)?))+(\\))+(\\-)(\\()+((-?[0-9]\\d*(\\.\\d+)?)+(\\,)+(-?[0-9]\\d*(\\.\\d+)?))+(\\))+(\\])");
  const regex sum_v3D("(\\()+((-?[0-9]\\d*(\\.\\d+)?)+(\\,)+(-?[0-9]\\d*(\\.\\d+)?))+(\\,)+(-?[0-9]\\d*(\\.\\d+)?)+(\\))+(\\+)+(\\()+((-?[0-9]\\d*(\\.\\d+)?)+(\\,)+(-?[0-9]\\d*(\\.\\d+)?))+(\\,)+(-?[0-9]\\d*(\\.\\d+)?)+(\\))");
  const regex sumb_v3D("(\\[)+(\\()+((-?[0-9]\\d*(\\.\\d+)?)+(\\,)+(-?[0-9]\\d*(\\.\\d+)?))+(\\,)+(-?[0-9]\\d*(\\.\\d+)?)+(\\))+(\\+)+(\\()+((-?[0-9]\\d*(\\.\\d+)?)+(\\,)+(-?[0-9]\\d*(\\.\\d+)?))+(\\,)+(-?[0-9]\\d*(\\.\\d+)?)+(\\))+(\\])+(\\+)+(\\()+((-?[0-9]\\d*(\\.\\d+)?)+(\\,)+(-?[0-9]\\d*(\\.\\d+)?))+(\\,)+(-?[0-9]\\d*(\\.\\d+)?)+(\\))");
  const regex sumbl_v3D("(\\[)+(\\()+((-?[0-9]\\d*(\\.\\d+)?)+(\\,)+(-?[0-9]\\d*(\\.\\d+)?))+(\\,)+(-?[0-9]\\d*(\\.\\d+)?)+(\\))+(\\+)+(\\()+((-?[0-9]\\d*(\\.\\d+)?)+(\\,)+(-?[0-9]\\d*(\\.\\d+)?))+(\\,)+(-?[0-9]\\d*(\\.\\d+)?)+(\\))+(\\])+(\\+)+(\\()+((-?[0-9]\\d*(\\.\\d+)?)+(\\,)+(-?[0-9]\\d*(\\.\\d+)?))+(\\,)+(-?[0-9]\\d*(\\.\\d+)?)+(\\))");
  const regex sumbr_v3D("(\\()+((-?[0-9]\\d*(\\.\\d+)?)+(\\,)+(-?[0-9]\\d*(\\.\\d+)?))+(\\,)+(-?[0-9]\\d*(\\.\\d+)?)+(\\))+(\\+)+(\\[)+(\\()+((-?[0-9]\\d*(\\.\\d+)?)+(\\,)+(-?[0-9]\\d*(\\.\\d+)?))+(\\,)+(-?[0-9]\\d*(\\.\\d+)?)+(\\))+(\\+)+(\\()+((-?[0-9]\\d*(\\.\\d+)?)+(\\,)+(-?[0-9]\\d*(\\.\\d+)?))+(\\,)+(-?[0-9]\\d*(\\.\\d+)?)+(\\))+(\\])");
  const regex esc_2D_b("((-?[0-9]\\d*(\\.\\d+)?))+(\\()+((-?[0-9]\\d*(\\.\\d+)?)+(\\,)+(-?[0-9]\\d*(\\.\\d+)?))+(\\))");
  const regex esc_2D_s("((-?[0-9]\\d*(\\.\\d+)?))+(\\*)+(\\()+((-?[0-9]\\d*(\\.\\d+)?)+(\\,)+(-?[0-9]\\d*(\\.\\d+)?))+(\\))");
  const regex module_v2D("(\\!)+(\\()+((?:\\d+(?:\\.\\d*)?|\\.\\d+))+(\\,)+((?:\\d+(?:\\.\\d*)?|\\.\\d+))+(\\))");
  const regex module_v3D("(\\!)+(\\()+((-?[0-9]\\d*(\\.\\d+)?)+(\\,)+(-?[0-9]\\d*(\\.\\d+)?))+(\\,)+(-?[0-9]\\d*(\\.\\d+)?)+(\\))");

  const regex comparisson[] = {vector_2D,  vector_3D, sum_v2D, sumb_v2D, sumbl_v2D, sumbr_v2D, res_v2D, resb_v2D, resbl_v2D, resbr_v2D, sum_v3D, sumb_v3D, sumbl_v3D, sumbr_v3D, esc_2D_s, esc_2D_b, module_v2D, module_v3D};

  const string types[] = {"vector_2D",  "vector_3D", "sum_v2D", "sumb_v2D", "sumbl_v2D", "sumbr_v2D", "res_v2D", "resb_v2D", "resbl_v2D", "resbr_v2D", "sum_v3D", "sumb_v3D", "sumbl_v3D", "sumbr_v3D", "esc_2D_s", "esc_2D_b", "module_v2D", "module_v3D"};
  for(int i = 0; i < 18; i++){
    if(type == types[i]){
      flag = i;
    }
  }
  smatch matches;
  int aux_match = 0;
  for(int i = 0; i < 18; i++){
    if(regex_search(_exp, matches, comparisson[i])){
      aux_match = i;
    }
  }  
  if(aux_match == 0){
    if(regex_search(_exp, matches, comparisson[aux_match])){
      this->vector_2D(matches[3], matches[6]);
    }
  }else if(aux_match == 1){
    if(regex_search(_exp, matches, comparisson[aux_match])){
      this->vector_3D(matches[3], matches[6], matches[9]);
    }
  }else if(aux_match == 2){
    if(regex_search(_exp, matches, comparisson[aux_match])){
      this->sum_v2D(matches[3], matches[6], matches[12], matches[15]);
    }
  }else if(aux_match == 3){
    if(regex_search(_exp, matches, comparisson[aux_match])){
      this->sumb_v2D(matches[4], matches[7], matches[13], matches[16]);
    }
  }else if(aux_match == 4){
    if(regex_search(_exp, matches, comparisson[aux_match])){
      this->sumbr_v2D(matches[4], matches[7], matches[13], matches[16], matches[23], matches[26]);
    }
  }else if(aux_match == 5){

  }else if(aux_match == 6){

  }else if(aux_match == 7){

  }else if(aux_match == 8){

  }else if(aux_match == 9){

  }else if(aux_match == 10){

  }else if(aux_match == 11){

  }else if(aux_match == 12){

  }else if(aux_match == 13){

  }else if(aux_match == 14){

  }else if(aux_match == 15){

  }else if(aux_match == 16){

  }else if(aux_match == 17){

  }else if(aux_match == 18){

  }
  
}
void Evaluator::vector_2D(string x, string y){
  cout << "X = " << x << " Y = " << y << endl;
}
void Evaluator::vector_3D(string x, string y, string z){
  cout << "X = " << x << " Y = " << y << " Z = " << z << endl;
}
void Evaluator::sum_v2D(string x, string y, string x1, string y1){
  cout << "R => (" << stof(x) + stof(x1) << "," << stof(y) + stof(y1) << ")" << endl; 
}
void Evaluator::sumb_v2D(string x, string y, string x1, string y1){
  cout << "R => (" << stof(x) + stof(x1) << "," << stof(y) + stof(y1) << ")" << endl; 
}
void Evaluator::sumbr_v2D(string x, string y, string x1, string y1, string x2, string y2){
  float v1_x = stof(x) + stof(x1);
  float v1_y = stof(y) + stof(y);
  cout << "R => (" << v1_x + stof(x2) << "," << v1_y + stof(y2) << ")" << endl; 
}