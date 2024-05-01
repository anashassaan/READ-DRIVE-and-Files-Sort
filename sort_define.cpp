#include<iostream>
#include <filesystem>
#include <string.h>
#include <chrono>
#include <windows.h>
//#include<thread>
#include"sort.h"
time_t in, last;
void sue::selecton_by_name(file_class* head)
{
    val__++;
    time(&in);
    file_class* temp;
    file_class* mynode = head;
    file_class* mynode2 = head;
    while (mynode2 != NULL)
    {
        temp = mynode2->next;
        while (temp != NULL)
        {
            if (mynode2->name[0] > temp->name[0])
            {
                string temp1 = mynode2->name;
                mynode2->name = temp->name;
                temp->name = temp1;

            }
            temp = temp->next;
        }
        mynode2 = mynode2->next;
    }
    time(&last);
    

    long double timetaken = double(last - in);
    cout << "Time taken to sort : " << timetaken / 0.000000001 << endl;
   // val__++;
    
    count[val__-1]=val__;
    sorted_time[val__-1] = timetaken;
    sort_name[val__-1] = "Selection by name";
    string n;
    cout << "\nEnter yes for Display :";
    cin >> n;
    if (n == "yes") {
        print(head);
    }

    
}
void sue::bable_by_name( file_class* head) {
    time(&in);
    file_class* temp = head;
    for (int i = 0; i < size_of_list - 1; ++i)
    {
        temp = head;
        for (int j = 0; j < size_of_list - i - 1; ++j)
        {
            if (temp->name[0] > temp->next->name[0])
            {
                string temp1 = temp->name;
                temp->name = temp->next->name;
                temp->next->name = temp1;
            }
            temp = temp->next;
        }
    }
    Sleep(1000);
    time(&last);
    
    long double timetaken = double(last - in);
    cout << "Time taken to sort : " << timetaken/0.000000001<<endl;
    val__++;
    count[val__ - 1] = val__;
    sorted_time[val__ - 1] = timetaken;
    sort_name[val__ - 1] = "Buble Sort by name";
    string n;
    cout << "\nEnter yes for Display :";
    cin >> n;
    if (n == "yes") {
        print(head);
    }
    
}
void sue::insertion_by_name(file_class* head)
{
    time(&in);
    file_class* p; file_class* po; file_class* p1; file_class*p2;


    int i = 0, j = 0;
    bool swapped = true;

    while (swapped)
    {

        swapped = false;
        p = head;

        while (p != nullptr && p->next != nullptr)
        {
            p1 = p;
            p2 = p->next;

            if (p1->name[0] > p2->name[0]) {

                string temp = p1->name;
                p1->name = p2->name;
                p2->name = temp;

                swapped = true;
            }
            p = p->next->next;
        }

        po = head->next;
        while (po != nullptr && po->next != nullptr)
        {

            p1 = po;
            p2 = po->next;

            if (p1->name[0] > p2->name[0]) {

                string temp = p1->name;
                p1->name = p2->next->name;
                p2->next->name = temp;
            }
            po = po->next->next;

        }
    }
    time(&last);
    
    long double timetaken = double(last - in);
    cout << "Time taken to sort : " << timetaken / 0.000000001 << endl;
    val__++;
    count[val__ - 1] = val__;
    sorted_time[val__ - 1] = timetaken;
    sort_name[val__ - 1] = "Insertion Sort by name";
    string n;
    cout << "\nEnter yes for Display :";
    cin >> n;
    if (n == "yes") {
        print(head);
    }
    
    
}
void sue::selection_by_size(file_class* head)
{
    time(&in);
    file_class* temp;
    file_class* mynode = head;
    file_class* mynode2 = head;
    while (mynode2 != NULL)
    {
        temp = mynode2->next;
        while (temp != NULL)
        {
            if (mynode2->size > temp->size)
            {
                std::uintmax_t temp1 = mynode2->size;
                mynode2->size = temp->size;
                temp->size = temp1;

            }
            temp = temp->next;
        }
        mynode2 = mynode2->next;
    }

    time(&last);
    
    long double timetaken = double(last - in);
    cout << "Time taken to sort : " << timetaken / 0.000000001 << endl;
    val__++;
    count[val__ - 1] = val__;
    sorted_time[val__ - 1] = timetaken;
    sort_name[val__ - 1] = "Selection Sort by size";
    string n;
    cout << "\nEnter yes for Display :";
    cin >> n;
    if (n == "yes") {
        print(head);
    }
    
}
void sue::bable_by_size(file_class* head)
{
    time(&in);
    file_class* scan2 = head;
    for (int i = 0; i < size_of_list - 1; ++i)
    {
        scan2 = head;
        for (int j = 0; j < size_of_list - i - 1; ++j)
        {
            if (scan2->size > scan2->next->size)
            {
                std::uintmax_t temp = scan2->size;
                scan2->size = scan2->next->size;
                scan2->next->size = temp;
            }
            scan2 = scan2->next;
        }
    }

    time(&last);
    
    long double timetaken = double(last - in);
    cout << "Time taken to sort : " << timetaken / 0.000000001 << endl;
    val__++;
    count[val__ - 1] = val__;
    sorted_time[val__ - 1] = timetaken;
    sort_name[val__ - 1] = "Buble Sort by size";
    string n;
    cout << "\nEnter yes for Display :";
    cin >> n;
    if (n == "yes") {
        print(head);
    }
    
    
   

}
void sue::insertion_by_size(file_class* head)
{
    time(&in);
    file_class* p;
    file_class* po;
    file_class* p1;
    file_class* p2;

    int i = 0, j = 0;
    bool swapped = true;

    while (swapped)
    {

        swapped = false;
        p = head;

        while (p != nullptr && p->next != nullptr)
        {
            p1 = p;
            p2 = p->next;

            if (p1->size > p2->size) {

                std::uintmax_t temp = p1->size;
                p1->size = p2->size;
                p2->size = temp;

                swapped = true;
            }
            p = p->next->next;
        }

        po = head->next;
        while (po != nullptr && po->next != nullptr)
        {

            p1 = po;
            p2 = po->next;

            if (p1->size > p2->size) {

                std::uintmax_t temp = p1->size;
                p1->size = p2->size;
                p2->size = temp;
            }
            po = po->next->next;

        }
    }
    time(&last);
    
    long double timetaken = double(last - in);
    cout << "Time taken to sort : " << timetaken / 0.000000001 << endl;
    val__++;
    count[val__ - 1] = val__;
    sorted_time[val__ - 1] = timetaken;
    sort_name[val__ - 1] = "Insertion Sort by size";
    string n;
    cout << "\nEnter yes for Display :";
    cin >> n;
    if (n == "yes") {
        print(head);
    }
    

}


void sue::display(file_class* head) {
    //sue h
    while (true) {
        cout << "\n\n  *****----------------------------*****";
        cout << "\n  *****----------------------------*****";
        cout << "\n\nEnter   1 for sort by Name :";
        cout << "\nEnter   2 for sort by Size :";
        cout << "\nEnter   3 for Display Summary :";
        cout << "\nEnter   4 for exit :";
        int n;
        cin >> n;
        switch (n)
        {
        case 1:
            while (true) {
                cout << "\nEnter your  1 for Selection Sort :";
                cout << "\nEnter your  2 for Bable Sort :";
                cout << "\nEnter your  3 for Insertion Sort :";
                

                cin >> n;
                switch (n) {
                case 1:
                    selecton_by_name(head);
                    break;
                case 2:
                    bable_by_name(head);
                   
                    break;
                case 3:
                    insertion_by_name(head);
                    break;
                
                }
        
            break;
                


            }
            

            break;
        case 2:
            while (true) {
                cout << "Enter your  1 for Selection Sort :";
                cout << "\nEnter your  2 for Bable Sort :";
                cout << "\nEnter your  3 for Insertion Sort :";
                

                cin >> n;
                switch (n) {
                case 1:
                    selection_by_size(head);
                    break;
                case 2:
                    bable_by_size(head);
                    
                    break;
                case 3:
                    insertion_by_size(head);
                    break;
                
                }
                break;
        
            }
                break;
            
        case 3:
            summary(head);
            break;
        case 4:
            exit(0);
            break;
        }
        
    }
}
void sue::print(class file_class* head) {
    file_class* scan2 = head;
    while (scan2 != NULL)
    {
        cout << scan2->name;
        cout << "  " << scan2->size;
        cout << endl;
        scan2 = scan2->next;
    }
    
}

