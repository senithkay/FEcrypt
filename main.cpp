#include <iostream>
#include <cstring>
#include <unordered_map>
#include <fstream>
using namespace std;

class File_Protector {

    string file_encryptor(){

    }

    string file_decryptor(){

    }


};

class Add {

    char * args;
    int add_file(){

    }

    int execute(){

    }


};

int main(int argc, char * arg[]) {
    unordered_map<string, Add> commands;
    cout<<arg[1];

    ifstream input_file;
    input_file.open("CMakeCache.txt");
    if(!input_file){
        cout<<"error reading the file";
        return 1;
    }

    string line_1;
    getline(input_file, line_1);
    cout<<line_1;

    return 0;
}
