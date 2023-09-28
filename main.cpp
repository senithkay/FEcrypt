#include <iostream>
#include <cstring>
#include <unordered_map>
#include <fstream>
#include <stdlib.h>
#include <io.h>
#include <map>

using namespace std;

class File_Protector {

    string file_encryptor(){

    }

    string file_decryptor(){

    }


};



class Init{

    char **args;
    int argsLenght;

    map<char*, char*> argValues{};

public:
    Init(char ** arg, int length){

        args = arg;
        argsLenght  = length;
        parseArgs();
//        const char *filename = "default";
//        map<string, char*>::iterator  itr=argValues.find("filename");
//        if(itr != argValues.end()){
//            filename = argValues["filename"];
//        }
//        if(mkdir(filename) == 0){
//            cout<<"Initialization complete"<<endl;
//        }
//        else{
//            cout<<"Error while initializing"<<endl;
//        }
    }


    void parseArgs(){
        cout<<args[1];
        for (int i = 0; i < argsLenght; ++i) {
            if(strcmp(args[i],"-t") == 0){
//                argValues.insert(make_pair("filename", "name"));
            }
//            else if(strcmp(args[i],"-u") == 0){
//                argValues["user"] =  args[i+1];
//            }
//            else if(strcmp(args[i],"-p") == 0){
//                argValues["password"] =  args[i+1];
//            }
        }
    }
};

int main(int argc, char * arg[]) {

    if(strcmp(arg[1],"init") == 0){
        Init init{&arg[2], argc-1};
    }
    else if (strcmp(arg[1],"add") == 0){
        cout<<"add selected"<<endl;
        cout<<arg[2]<<endl;
    }
    else{
        cout<<"Command 'b' not found"<<endl;
    }

    return 0;
}
