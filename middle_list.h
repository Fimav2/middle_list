#ifndef MIDDLE_LIST_H_INCLUDED
#define MIDDLE_LIST_H_INCLUDED
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector <char> itc_strtlist(string str);//1

string itc_join(vector <char> lst, string sep);//2

string itc_rmstrspc(string str);//3

string itc_rmstrchar(string str, string less);//4

long itc_sumlst(const vector <int> &lst);//5

long itc_sum_even_lst(const vector <int> &lst);//6

long itc_sum_even_part_lst(const vector <int> &lst);//7

void itc_odd_even_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2);//8

void itc_pos_neg_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2, vector <int> &lst3);//9

void itc_odd_even_analysis_lst(const vector <int> &lst);//10

void itc_pos_neg_analysis_lst(const vector <int> &lst);//11

#endif // MIDDLE_LIST_H_INCLUDED
