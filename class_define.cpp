#include <iostream>
#include <filesystem>
#include <string.h>
#include "class.h"


using namespace std;
namespace fs = std::filesystem;



file_class* file_class::readfile()
{
    file_class* head = new file_class;
    string directoryname;
    string fileName, fileExtension;
    cout << "Enter path : ";
    cin >> directoryname;

    fs::path pod = directoryname;



    file_class* scan = head;
    for (const auto& open : fs::recursive_directory_iterator(pod,fs::directory_options::skip_permission_denied))
    {
        if (fs::is_regular_file(open.path()))
        {
            std::uintmax_t fileSize = fs::file_size(open.path());
            scan->size = fileSize;
            fileName = open.path().filename().string();
            scan->name = fileName;
            fileExtension = open.path().extension().string();
            scan->extension = fileExtension;
            scan->next = new file_class;
            scan = scan->next;
            size_of_list++;


        }
    }
    cout << "Files Read Successfully\n\n";
    return head;
    
    

}



