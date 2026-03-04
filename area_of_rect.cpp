#include <iostream>
using namespace std;    

double area_of_rectangle(double length, double breadth) {
    return (length * breadth);
}

double perimeter_of_rectangle (double length, double breadth) {
    return (2 * (length + breadth));
}


double find_length_or_breadth_with_area(double area, double parameter){
    return (area / parameter);
}


/* 
2 * (l+b) = perimeter 
so , perimeter /2 = l+b , now l+b - l or b = l or b 
*/
double find_length_or_breadth_with_perimeter(double perimeter, double parameter){
    return (((perimeter /2)-parameter) );
}


int main(){
    cout<< "to perform several functions of rectangle \n1.To find area\n2.To find perimeter \n3.to find length or breadth with inputing area \n4.to find length or breadth with inputing perimeter" << endl;
    int fnx_input ;
    double length , breadth, area, perimeter, parameter;
    cin >> fnx_input ;
    switch (fnx_input)
    {
    case 1:
        cout << "input length : ";
        cin >> length;
        cout << "input breadth : ";
        cin >> breadth ;
        cout << "area of rectangle is : " <<area_of_rectangle(length,breadth) << endl ;
        break;
    
    case 2:
        cout << "input length : ";
        cin >> length;
        cout << "input breadth : ";
        cin >> breadth ;
        cout  << "perimeter of rectangle is : " <<perimeter_of_rectangle(length,breadth) << endl ;
        break;

    case 3:
        cout << "enter length or breadth : ";
        cin >> parameter ;
        cout << "enter area: ";
        cin >> area;
        cout << "other parameter's dimensions are : " << find_length_or_breadth_with_area(area, parameter);
        break;

    case 4:
        cout << "enter length or breadth : ";
        cin >> parameter ;
        cout << "enter perimeter: ";
        cin >> perimeter;
        cout<< "other parameter's dimensions are : " << find_length_or_breadth_with_perimeter(perimeter, parameter);
        break;
        
    default:
        main();
        break;
    }
    return 0;

}