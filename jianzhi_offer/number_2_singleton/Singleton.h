#include <iostream>
using namespace std;
class Singleton

{
    private:
        Singleton(){}
        static Singleton * m_pinstance;
        class GC
        {
            public:
                ~GC()
                {
                    if(m_pinstance != NULL)
                    {
                        cout<<"gc"<< endl;
                        delete m_pinstance;
                        m_pinstance = NULL;
                    }
                }

        };
        static GC gc;
    public:
        static Singleton * get_instance()
        {
            return m_pinstance;
        }


};
Singleton * Singleton::m_pinstance = new Singleton();
Singleton::GC Singleton::gc;
