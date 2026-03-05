#include <iostream>
#include <vector>
#include <string>
using namespace std;
enum level {
    LOW =25,
    MEDIUM ,
    HIGH 
};
struct employee
{
    int emp_id;
    string emp_name;
    // enum Hierarchy level ;
};

int main(){
    employee emp1, emp2, emp3;
    emp1.emp_id = 123456789;
    emp1.emp_name = "Dj waale babu";
    // emp1.level = LOW;

    enum level var1;
    var1 = MEDIUM;
    cout<<emp1.emp_id<<endl<<emp1.emp_name<<endl /*<< emp1.level <<endl*/;
    cout << var1 <<endl;
    
    return 0;
}