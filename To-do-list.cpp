#include<iostream>
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
        //std::cout<<str<<"\n";
        if(str=="add"){
            chk = task.add(item);
        }
        else if(str=="delet"){
            ent();
            std::cin>>n;
            getchar();
            chk = task.delet(n,item);
        }
        else if(str=="show"){
            ent();
            std::cin>>n;
            getchar();
            chk = task.show(n);
        }
        else if(str=="exit"){
            chk = task.exit(item);
        }
        if(chk){
            error();
        }
    }
    return 0;
}
