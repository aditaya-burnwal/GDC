#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    // cout << "You have entered " << argc
    //      << " arguments:" << "\n";
  
    fstream newfile;
    newfile.open("task.txt",ios::in); //open a file to perform read operation using file object
    if (newfile.is_open()){ //checking whether the file is open
      string tp;
      while(getline(newfile, tp)){ //read data from file object and put it into string.
         cout << tp << "\n"; //print the data of the string
      }
      newfile.close(); //close the file object.
    }
    // for (int i = 0; i < argc; ++i){
    //     string argvi = argv[i];
    //     if(argc == 2 && argvi == "help"){
    //     cout << argvi << "\n";

    //     }
    // }

  
    return 0;
}