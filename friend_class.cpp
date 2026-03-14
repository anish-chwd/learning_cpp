#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <functional>
using namespace std;

class employee{
    private:
        int salary;
    
    public:
        employee(int s){
            salary=s;
        }

    friend void displaySalary(employee emp);
};

void displaySalary(employee emp){
    cout << "Salary : " << emp.salary;
}

int main(){
    employee emp1(50000);
    displaySalary(emp1);
    return 0;
}