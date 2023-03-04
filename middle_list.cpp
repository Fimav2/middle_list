#include <iostream>
#include <vector>
#include <string>
#include "middle_list.h"

using namespace std;

vector <char> itc_strtlist(string str){

    vector <char> mass;
    for(int i = 0; i < str.size();i++)
        mass.push_back(str[i]);

    return mass;
}
string itc_join(vector <char> lst, string sep){
    string str = "";
    for(int i = 0; i < lst.size()-1;i++){
        str = str + lst[i] + sep;
    }
    str = str + lst[lst.size() - 1];

    return str;
}

string itc_rmstrspc(string str){
    string new_str="";
    for(int i = 0; i < str.size();i++)
        if(str[i] != ' ')
            new_str = new_str + str[i];

    return new_str;

}

