#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using std::cout;
using std::ifstream;
using std::string;
using std::vector;
using std::istringstream;


int main () { 
  string path = "input.txt";
  ifstream myfile(path);
  if(myfile){
    string line;
    while(getline(myfile, line)){
      string direction;
      int distance
      istringstream stream(line);
      while(stream >> n >> c){
        cout << std::format("Direction: {}, Distance: {}", direction, distance);
      }
    }
  }
}