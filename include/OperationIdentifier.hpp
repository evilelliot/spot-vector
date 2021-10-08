/**
 * @file OperationIdentifier.hpp
 *
 * @author Alberto Ocaranza
 * Contact: alt.ocaranza@gmail.com
 *
 */
#ifndef OperationIdentifier_hpp
#define OperationIdentifier_hpp

#include <string>
#include <regex>
using namespace std;

class OperationIdentifier{
  public:
  string identify(string exp);
};

#endif