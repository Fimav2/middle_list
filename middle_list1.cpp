#include <iostream>
#include <vector>
#include <string>
#include "middle_list.h"

using namespace std;
long itc_sum_even_lst(const vector <int> &lst){//6



      long sym = 0;
      for(int i = 0; i < lst.size(); i+=2)
        sym = lst[i] + sym;


    return sym;
}
long itc_sum_even_part_lst(const vector <int> &lst){//7

    int sym = 0;
    for(int i = 0;i < lst.size();i++)
        if(lst[i]%2 == 0)
            sym = lst[i] + sym;

    return sym;
}

void itc_odd_even_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2){//8
  int sym = 0;
    for(int i = 0;i < lst.size();i++)
        if(lst[i]%2 == 0)
            lst1.push_back(lst[i]);
        else
            lst2.push_back(lst[i]);


}
void itc_pos_neg_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2, vector <int> &lst3){//9
    for(int i = 0;i < lst.size();i++){
        if(lst[i] < 0)
            lst1.push_back(lst[i]);
        else if(lst[i] == 0)
                lst2.push_back(lst[i]);

        else if(lst[i] > 0)
                lst3.push_back(lst[i]);

    }
}

void itc_odd_even_analysis_lst(const vector <int> &lst){//10
    cout << "ANALIZATOR:" << endl;
    int sum = 0;
    for(int i = 0;i < lst.size();i++){
        if(lst[i]%2 == 0)
            sum++;
    }
    cout << "kol chet:" << sum << ","<< "    ";
    int nesum = 0;
    for(int i = 0;i < lst.size();i++)
        if(lst[i]%2 != 0)
            nesum++;
    cout << "kol ne chet:" << nesum << "," << endl;
    int maxi = 0;
    for(int i = 0;i < lst.size();i++){
        if (lst[i] % 2 == 0)
            if (lst[i] > maxi)
            maxi = lst[i];
    }
    cout << "max chet:"  <<  maxi  << "," << "    ";
    int max = 0;
    for(int i = 0;i < lst.size();i++){
        if (lst[i] % 2 != 0)
            if (lst[i] > max)
            max = lst[i];
    }
    cout << "max ne chet:" << max << "," << endl;
    int mini = 10000000000;
    for(int i = 0;i < lst.size();i++){
        if (lst[i] % 2 == 0)
            if (lst[i] < mini)
            mini = lst[i];
    }
    cout << "min chet:" << mini << "," << "    ";
    int min = 10000000000;
    for(int i = 0;i < lst.size();i++){
        if (lst[i] % 2 != 0)
            if (lst[i] < min)
            min = lst[i];
    }
    cout << "min ne chet:" << min << "," << endl;
    int summa = 0;
    for(int i = 0; i < lst.size();i++){
        if(lst[i]%2 == 0)
            summa = summa + lst[i];
    }
    cout << "summa chet:" << summa << "," << "   ";
     int nesumma = 0;
    for(int i = 0; i < lst.size();i++){
        if(lst[i]%2 != 0)
            nesumma = nesumma + lst[i];
    }
    cout << "summa ne chet:" << nesumma << "," << endl;
}
