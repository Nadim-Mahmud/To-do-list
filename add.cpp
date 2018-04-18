#include<iostream>

bool list::add(int item){
    std::cout<<"Ener task Name\n";
    std::cin>>task_list[++item].task_name;
    std::cout<<"Enter date according to dd//mm//yy format\n";
    std::cin>>task_list[item].dd>>task_list[item].mm>>task_list[item].yy;
    return 0;
}
