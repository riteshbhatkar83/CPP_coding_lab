//Access Private Function via Public Wrapper

class Demo
{
private:
    void fun()
    {
        cout << "Hello";
    }

public:
    void callFun()
    {
        fun();   // accessing private inside class
    }
};

int main()
{
    Demo obj;
    obj.callFun();   // indirect access
}