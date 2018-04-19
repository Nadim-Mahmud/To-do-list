#include<iostream>
#include<cstdio>
#include<cstring>
#include "list.cpp"
#include "show.cpp"
#include "add.cpp"
#include "delet.cpp"
#include "file.cpp"
#include "io.cpp"
#define P(XX) std::cout<<XX<<"\n";

int main(){
    std::string str;
    int item,i,j,k,n;
    bool chk;
    item = file();
    while(true){
        main1();
        chk=1;
        getline(std::cin,str);
        if(str=="add"){
            chk = task.add(item);
        }
        else if(str=="delet"){
            ent();
            chk = task.delet(inp(),item);
        }
        else if(str=="show"){
            ent();
            chk = task.show(inp());
        }
        else if(str=="exit"){
            chk = task.exit(item);
            return 0;
        }
        if(chk){
            error();
        }
    }
    return 0;
}
