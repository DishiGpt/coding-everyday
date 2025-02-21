#include<iostream>
using namespace std;
struct book{
    string title;
    string author;
    float price;
};

int main()
{
    book book1={"Da Vinci Code","Dan Brown",500};
    cout<<"the book name is "<<book1.title<<endl<<"the author is  "<<book1.author<<endl<<"price "<<book1.price;
    return 0;

}