#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <functional>
using namespace std;

class employee{
    protected:
        double salary;
};

class swe: public employee {
    public :
        /*temporary increase in salary 
        usually once in a fiscal year*/
        double bonus=0;

        double increment=0;//permanent increase in salary
        void setSalary(double a){
            salary = a;
        }
        void update_salary(){
            salary = salary + increment;
        }
        double current_fiscal_year_salary(){
            return (salary + bonus);
        }
        double getSalary(){
            return salary;
        }
};

int main(){
    swe engg1;

    engg1.setSalary(100000);
    engg1.bonus = 1000;
    engg1.increment = 230;
    engg1.update_salary();


    cout << "Salary : " << engg1.getSalary()<<endl;
    cout <<"A Bonus of "<< engg1.bonus << " has been awarded for this year && a salary increment of " << engg1.increment << " has been applied."<< endl;
    cout << "Taxable & take home income for current fiscal year is : " << engg1.current_fiscal_year_salary()<<endl;
    

    return 0;
}