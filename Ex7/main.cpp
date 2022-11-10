#include <iostream>
using namespace std;
class Rectangle{
    float length;
    float width;

    public:
        Rectangle(float l , float w){
            length = l;
            width = w;
        }
    void setLength(float length){
        this->length = length;
    }
    void setWidth(float width){
        this -> width = width;
    }
    float perimeter(){
        return 2 * (length + width);
    }
 
    float area(){
        return width * length;
    }
    void show(){
        cout << "length is " << length <<endl;
        cout << "width is " << width <<endl;
        
    }
    int sameArea(Rectangle r){
        if((r.length * r.width) == (width * length)){
            return 1;
        }
        return 0;
    }
};

int main(){
    Rectangle rectangle1 = Rectangle(5,2.5);
    Rectangle rectangle2 = Rectangle(5,18.9);

    cout << "Rectangle one area is " << rectangle1.area() << endl;
    cout << "Rectangle one perimeter is " << rectangle1.perimeter() << endl;

    cout << "Rectangle two area is " << rectangle2.area() << endl;
    cout << "Rectangle two perimeter is " << rectangle2.perimeter() << endl;

    if(rectangle1.sameArea(rectangle2)){
        cout << "Yes they have the same area";
    }else{
        cout << "NO! they don't have the same area";
    }
    rectangle1.setLength(15);
    rectangle2.setWidth(6.3);
    cout << "Rectangle one area is " << rectangle1.area() << endl;
    cout << "Rectangle one perimeter is " << rectangle1.perimeter() << endl;

    cout << "Rectangle two area is " << rectangle2.area() << endl;
    cout << "Rectangle two perimeter is " << rectangle2.perimeter() << endl;

    if(rectangle1.sameArea(rectangle2)){
        cout << "Yes they have the same area";
    }else{
        cout << "NO! they don't have the same area";
    }
    return 0;
 }