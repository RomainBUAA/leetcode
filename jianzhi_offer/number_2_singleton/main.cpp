#include "Singleton.h"
#include <vector>
#include <pthread.h>

using namespace std;
void *print_instance(void* )
{
    Singleton * obj1 = Singleton::get_instance();
    cout<<obj1<<endl;
}
void test()
{
    vector<int> threads;
    vector<pthread_t> ids;
    pthread_t threadId;
    int ret;
    for (int i = 0 ;i< 10;i++)
    {
        ret = pthread_create(&threadId, NULL, print_instance, NULL);
        cout<< " "<< ret<<endl;
    }
    /**
    for(int i=0;i<10;i++)
    {
        threads[i].join();
    }
    **/
}
int main()
{
    test();
    return 0;
}
