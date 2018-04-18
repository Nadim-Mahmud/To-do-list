#include<iostream>

bool list::show(int task_no){
    std::cout<<"Task No : "<<task_no<<"\n";
    std::cout<<"Task Name : "<<task_list[task_no].task_name<<"\n";
    std::cout<<"Day : "<<task_list[task_no].dd<<"\nMonth : "<<task_list[task_no].mm<<"\nYear : "<<task_list[task_no].yy<<"\n\n";
    return 0;
}
