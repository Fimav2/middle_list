#include <iostream>
#include <vector>
#include <string>
#include "middle_list.h"

using namespace std;
long itc_sum_even_lst(const vector <int> &lst){//6



      int sym = 0;
      for(int i = 1; i < lst.size(); i+=2)
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
