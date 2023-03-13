#include <iostream>
#include <vector>
#include <string>
#include "middle_list.h"

using namespace std;
void itc_pos_neg_analysis_lst(const vector <int> &lst){//11
    cout << "poloj:" << "                   " << "otriza:" << endl;
    int kolp = 0;
    for(int i = 0;i < lst.size();i++){
        if(lst[i] > 0)
            kolp++;
    }
    cout << "kol chisel:" << kolp << "," << "       ";
    int kolo = 0;
    for(int i = 0;i < lst.size();i++){
        if(lst[i] < 0)
            kolo++;
    }
    cout << "kol chisel:" << kolo << "," << endl;
    int maxi = 0;
    for(int i = 0;i < lst.size();i++){
        if (lst[i] > 0)
            if (lst[i] > maxi)
            maxi = lst[i];
    }
    cout << "max:" << maxi << "," << "       ";
     int max = 0;
    for(int i = 0;i < lst.size();i++){
        if (lst[i] < 0)
            if (lst[i] < max)
            max = lst[i];
    }
    cout << "max:" << max << "," << endl;
    int mini = 10000000000;
    for(int i = 0;i < lst.size();i++){
        if (lst[i]  > 0)
            if (lst[i] < mini)
            mini = lst[i];
    }
    cout << "min:" << mini << "," << "       ";
    int min = 10000000000;
    for(int i = 0;i < lst.size();i++){
        if (lst[i]  < 0)
            if (lst[i] < min)
            min = lst[i];
    }
    cout << "min:" << min << "," << endl;
    int summa = 0;
    for(int i = 0; i < lst.size();i++){
        if(lst[i] > 0)
            summa = summa + lst[i];
    }
    cout << "summa:" << summa << "," << "       ";
    int nesumma = 0;
    for(int i = 0; i < lst.size();i++){
        if(lst[i] < 0)
            nesumma = nesumma + lst[i];
    }
    cout << "summa:" << nesumma << "," << endl;
    int a = summa / kolp ;
    cout << "srznach:" << a << "," << "       ";
    int b = nesumma / kolo ;
    cout << "srznach:" << b << "," << endl;
    int c = 0;
    for(int i = 0;i < lst.size();i++){
        if(lst[i] == '0')
            c++;
    }
    cout << "nol:" << c;
}

