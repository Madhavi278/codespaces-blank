#include <iostream>
using namespace std;

class Box
{
public:
    float length;
    float width;
    float height;

    void boxArea()
    {
        cout << "Box Area : " << 2 * (length * width + width * height + length * height) << endl;
    }
    void boxVolume();

    friend void displayBoxDimensions(Box &obj);

    inline void displayWelcomeMessage()
    {
        cout << "Hii" << endl;
    }
    inline void displayExitMessage()
    {
        cout << "Bye" << endl;
    }
};

void displayBoxDimensions(Box &obj)
{
    cout << "Box Length : " << obj.length << endl;
    cout << "Box width : " << obj.width << endl;
    cout << "Box Height : " << obj.height << endl;
}
void Box::boxVolume()
{
    cout << "Box Volume : " << length * width * height << endl;
}
int main()
{
    Box cuboid;
    cuboid.displayWelcomeMessage();
    cout << "Enter length : ";
    cin >> cuboid.length;
    cout << "Enter width : ";
    cin >> cuboid.width;
    cout << "Enter height : ";
    cin >> cuboid.height;
    cout << "------------------------------------------------------------" << endl;
    cuboid.boxArea();
    cuboid.boxVolume();
    cout << "------------------------------------------------------------" << endl;
    displayBoxDimensions(cuboid);
    cuboid.displayExitMessage();
}

