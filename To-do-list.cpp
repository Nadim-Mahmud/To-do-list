#include<iostream>
#include "list.cpp"
#include "show.cpp"
#include "add.cpp"
#include "delet.cpp"
#include "file.cpp"
#define P(XX) std::cout<<XX<<"\n";

int main(){
    //class list task_list[1005],task;
    int item,i,j,k;
    item = file();
    //i = task.add(item);
    //i = task.delet(1,item);
    i = task.show(2);
    P(item)
    i = task.exit(2);
    return 0;
}
