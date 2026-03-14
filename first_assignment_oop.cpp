#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <functional>
using namespace std;
class book{
    public:
        string title;
        string author;
        int year;
};


int main(){
    book obj1,obj2;
    obj1.title = "Matilda";
    obj1.author = "Roald Dahl";
    obj1.year = 1988;

    obj2.title= "The Giving Tree";
    obj2.author = "Shel Silverstein";
    obj2.year = 1964;

    cout << obj1.author << endl << obj1.title <<endl<< obj1.year<<endl;
    cout << obj2.author << endl <<obj2.title<<endl<<obj2.year<<endl;
    return 0;
}