#include<iostream>
#include<fstream>

class list{
public:
    int dd,mm,yy,item;
    std::string task_name,description;
    bool add();
    bool show(int task_no);
    bool delet(int task_no);
    bool exit();
}task_list[1005],task;
