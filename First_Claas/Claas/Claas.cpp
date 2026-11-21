#include <iostream>
using namespace std;

class rectangle
{
private:
    float width;
    float length;

public:
    void setlength(float l)
    {
        if (l >= 0)
        {
            length = l;
        }
        else cout << "error enter pos num ";
    }    
    float getlength()
    {
        return length;
    }
    void setwidth(float w)
    {
        if (w >= 0)
        {
            width = w;
        }
        else cout << "error enter pos num ";
    }
    float getwidth()
    {
        return width;
    }
    float area()
    {
        return width * length;
    }
};

int main()
{
    rectangle box;
    box.setlength(5);
    box.setwidth(5);
    cout << "the area = "<<box.area();
}
