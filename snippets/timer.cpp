/*
author:  rohitkotha10
created: 25.04.2021 15:58:38
*/
#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

struct Timer //make object at start
{
    chrono::_V2::system_clock::time_point start, end;
    chrono::duration<float> duration = end - start;
    
    Timer()
    {
        start = chrono::high_resolution_clock::now();
    };

    ~Timer()
    {
        end = chrono::high_resolution_clock::now();
        duration = end - start;
        cout << endl << "Time elapsed: " << duration.count() * 1000 << "ms " << endl;
    };

};
