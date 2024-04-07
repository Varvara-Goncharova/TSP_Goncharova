#include "parser.h"

parser::parser (ifstream &file_in){
    if(!file_in.is_open()) cout << "There is no such file";
    string s;
    file_in >> s;;
    N = stoi(s);
    for (int i = 0; i < N; i++){
        file_in >> s;
        x.push_back(stod(s));
        file_in >> s;
        y.push_back(stod(s));
    }
}