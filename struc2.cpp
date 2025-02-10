#include <iostream>
#include <cstring>
using namespace std;
typedef struct student{ 
    char name[18];
    int age;
    int id; 
}s;//rename
typedef struct { 
    int age;
    string name;
}ss; //name
int main(){
    s stu1;
    strcpy(stu1.name,"Devika");
    stu1.age=20;
    cout <<"name of student "<<stu1.name<<endl;
	cout<<"age "<<stu1.age<<endl;
    return 0;
}

