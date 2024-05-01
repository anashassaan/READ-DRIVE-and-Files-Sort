#pragma once
#include<iostream>
#include <filesystem>
#include <string.h>
#include"class.h"

class sue :public file_class {
public:
    int count[50];
    string sort_name[50];
    long double sorted_time[50];
	

public:
     int  val__ = 0;
	void bable_by_name(class file_class* head);
    void selecton_by_name(class file_class* head);
    void insertion_by_name(class file_class* head);
    void selection_by_size(class file_class* head);
	void bable_by_size(class file_class* head);
    void insertion_by_size(class file_class* head);
	void display(class file_class* head);
	void print(class file_class* head);
    void summary(class file_class* head) {
        cout << "\n------*************************------";
        cout << "\n------*************************------\n";
        cout << "        Summary         \n";
        cout << "No#    Sort Name             Sort Time";
        for(int i=0; i<sue::val__;i++)
        {
            cout <<endl<< count[i] << "      " << sort_name[i] << "     " << sorted_time[i];
            cout << endl;
            
        }
        cout << "\n------*************************------";
        cout << "\n------*************************------";
    }



};





