#include <iostream>
#include <vector>
#include <string>
#include "middle_list.h"

using namespace std;

vector <char> itc_strtlist(string str){//1

    vector <char> mass;
    for(int i = 0; i < str.size();i++)
        mass.push_back(str[i]);

    return mass;
}
string itc_join(vector <char> lst, string sep){//2
    string str = "";
    for(int i = 0; i < lst.size()-1;i++){
        str = str + lst[i] + sep;
    }
    str = str + lst[lst.size() - 1];

    return str;
}

string itc_rmstrspc(string str){//3
    string new_str="";
    for(int i = 0; i < str.size();i++)
        if(str[i] != ' ')
            new_str = new_str + str[i];

    return new_str;

}

string itc_rmstrchar(string str, string less){//4


    string new_str = "";
    vector <int> mass;
        for(int i = 0; i < less.size();i++)
            mass.push_back(less[i]);

         for(int j = 0; j < str.size();j++){
             int g = 0;
                for(int i = 0; i < mass.size();i++)
                    if (str[j] == mass[i])
                g++;
            if (g == 0)
            new_str = new_str + str[j];
    }
    return new_str;
}

long itc_sumlst(const vector <int> &lst){//5
    int sym = 0;
        for(int i = 0;i < lst.size();i++)
            sym = lst[i] + sym;

    return sym;

}


