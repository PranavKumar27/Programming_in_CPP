#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

using namespace std;
using namespace std::chrono;

mutex m;
int common_data = 0;
int run(int n)
{
    // update common data
    
    m.lock();
    common_data = common_data+1;
    cout << "common_data=" << common_data << endl;
    //this_thread::sleep_for(chrono::seconds(3));
    m.unlock();
    
    return -1;
}

int main()
{
    cout << __FUNCTION__ << " starts Here " << endl;
    
    for(int i=0;i<100;i++)
    {
        thread t1(run,1);
    
        thread t2(run,1);
        
        thread t3(run,1);
        
        thread t4(run,1);
        
        thread t5(run,1);
        
        thread t6(run,1);
        
        t1.join();
        t2.join();
        t3.join();
        t4.join();
        t5.join();
        t6.join(); 
    }
    
    
    
    
    cout << __FUNCTION__ << " ends Here " << endl;

    return 0;
}

/*
Ouput as 

common_data=541
common_data=542
common_data=543
common_data=544
common_data=545
common_data=546
common_data=547
common_data=548
common_data=common_data=550550

common_data=551
common_data=552
common_data=553
common_data=554
common_data=555
common_data=556
common_data=557
common_data=558

*/
