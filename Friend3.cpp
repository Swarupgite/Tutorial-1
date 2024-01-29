#include<iostream>
using namespace std;

class Hello
{
    public:
    void Display();
      
};

class Demo
{
    public:
    int i;
    private:
    int j;
    protected:
    int k;
    public:
        Demo()
        {
            i = 10;
            j = 20;
            k = 30;
        }
    friend void Hello::Display();
};

  void Hello::Display()
        {
          Demo obj;
    
         std::cout<<"Value of i : "<<obj.i<<"\n";
         std::cout<<"Value of j : "<<obj.j<<"\n";
         std::cout<<"Value of k : "<<obj.k<<"\n";
        }

int main()
{
    Hello hobj;
    hobj.Display();

    return 0;
}