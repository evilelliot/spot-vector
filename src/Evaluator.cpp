/*
 * @file Evaluator.cpp
 *
 * @author Alberto Ocaranza
 * Contact: alt.ocaranza@gmail.com
 *
 */
#include "../include/Evaluator.hpp"
#include "../include/Tokenizer.hpp"
#include <math.h>
#include <regex>
#include <string>
#include <iostream>
using namespace std;


Evaluator::Evaluator(string type, string e): _exp(e){
  const bool DEBUG = true;
  Tokenizer tk;
  vector<float> list = tk.numbers(_exp);
  
  cout << (DEBUG? type: " ") << endl;
  if(type == "vector_2D"){
    this->vector_2D(list);
  }else if(type == "vector_3D"){
    this->vector_3D(list);  
  }else if(type == "sum_v2D"){
    this->sum_v2D(list);
  }else if(type == "sumb_v2D"){
    this->sumb_v2D(list);
  }else if(type == "sumbl_v2D"){
    this->sumbr_v2D(list);
  }else if(type == "sumbr_v2D"){
    this->sumbl_v2D(list);
  }else if(type == "res_v2D"){
    this->res_v2D(list);
  }else if(type == "resb_v2D"){
    this->resb_v2D(list);
  }else if(type == "resbl_v2D"){
    this->resbl_v2D(list);
  }else if(type == "resbr_v2D"){
    this->resbr_v2D(list);
  }else if(type == "sum_v3D"){
    this->sum_v3D(list);
  }else if(type == "sumb_v3D"){
    this->sumb_v3D(list);
  }else if(type == "sumbl_v3D"){
    this->sumbl_v2D(list);
  }else if(type == "sumbr_v3D"){
    this->sumbr_v2D(list);
  }else if(type == "esc_2D_s"){
    this->esc_2D_s(list);
  }else if(type == "esc_2D_b"){
    this->esc_2D_s(list);
  }else if(type == "module_v2D"){
    this->module_v2D(list);
  }else if(type == "module_v3D"){
    this->module_v2D(list);
  }else{
    cout << "Invalid expression: " << _exp << endl;
  }
  
}
void Evaluator::vector_2D(vector<float> data){
  cout << "(V²\u2192) = " << _exp << endl;
  cout << "V₁ = " << data[0] << " V₂ = " << data[1] << endl;
}
void Evaluator::vector_3D(vector<float> data){
  cout << "(R³\u2192) = " << _exp << endl;
  cout << "V₁ = " << data[0] << " V₂ = " << data[1] << " V₃ = " << data[2] << endl;
}
void Evaluator::sum_v2D(vector<float> data){
  cout << "(R\u2192) = (" << data[0] + data[2] << "," << data[2] + data[3] << ")" << endl; 
}
void Evaluator::sumb_v2D(vector<float> data){
  cout << "(R\u2192) = (" << data[0] + data[2] << "," << data[2] + data[3] << ")" << endl; 
}
void Evaluator::sumbr_v2D(vector<float> data){
  float v1_x = data[0] + data[2];
  float v1_y = data[1] + data[3];
  cout << "(R\u2192) = (" << v1_x + data[4] << "," << v1_y + data[5] << ")" << endl; 
}
void Evaluator::sumbl_v2D(vector<float> data){
  float v1_x = data[0] + data[2];
  float v1_y = data[1] + data[3];
  cout << "(R\u2192) = (" << v1_x + data[4] << "," << v1_y + data[5] << ")" << endl;
}
void Evaluator::res_v2D(vector<float> data){
  cout << "(R\u2192) = (" << data[0] - data[2] << "," << data[2] - data[3] << ")" << endl;
}
void Evaluator::resb_v2D(vector<float> data){
  cout << "(R\u2192) = (" << data[0] - data[2] << "," << data[2] - data[3] << ")" << endl;
}
void Evaluator::resbr_v2D(vector<float> data){
  float v1_x = data[0] + data[2];
  float v1_y = data[1] + data[3];
  cout << "(R\u2192) = (" << v1_x - data[4] << "," << v1_y - data[5] << ")" << endl;
}
void Evaluator::resbl_v2D(vector<float> data){
  float v1_x = data[0] + data[2];
  float v1_y = data[1] + data[3];
  cout << "(R\u2192) = (" << v1_x - data[4] << "," << v1_y - data[5] << ")" << endl;
}
void Evaluator::sum_v3D(vector<float> data){
  cout << "(R\u2192) = (" << data[0]+data[3] <<","<<data[1]+data[4]<<","<<data[2]+data[5]<<")"<<endl;
}
void Evaluator::sumb_v3D(vector<float> data){
  float v1_x = data[0] + data[3];
  float v1_y = data[1] + data[4];
  float v1_z = data[2] + data[5];
  cout << "(R\u2192) = (" << v1_x + data[6] << "," << v1_y + data[7] << v1_z + data[8] << ")" << endl;
}
void Evaluator::sumbl_v3D(vector<float> data){
  float v1_x = data[0] + data[3];
  float v1_y = data[1] + data[4];
  float v1_z = data[2] + data[5];
  cout << "(R\u2192) = (" << v1_x + data[6] << "," << v1_y + data[7] << v1_z + data[8] << ")" << endl;  
}
void Evaluator::esc_2D_s(vector<float> data){
  cout << "(R\u2192) = (" << data[0] * data[1] << "," << data[0] * data[2] << ")" << endl;  
}
void Evaluator::module_v2D(vector<float> data){
  // There's a more programatically way to do this.
  if(data.size() == 2){
    cout << "(|R\u2192|) = " << sqrt(pow(data[0],2)+pow(data[1],2)) << endl;
  }else if(data.size() == 3){
    cout << "(|R\u2192|) = " << sqrt(pow(data[0],2) + pow(data[1],2) + pow(data[2],2) ) << endl;
  }
}