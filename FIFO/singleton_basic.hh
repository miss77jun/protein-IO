#ifndef SINGLEN_H
#define SINGLEN_H
#include <stdio.h>
#include <string.h>
class Singleton
{
public:
    static Singleton * instance();
    int get_gen();
    void set_gen( int ) ;
private:
    Singleton();       // forbid create instance outside
    ~Singleton();      // forbid to delete instance outside


    Singleton(Singleton const&);        // Don't forget to disable copy
    void operator=(Singleton const&);   // Don't forget to disable copy

    static Singleton* m_inst;
    int gen ;
};

#endif
