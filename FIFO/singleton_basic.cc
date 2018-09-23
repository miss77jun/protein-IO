#include "singleton_basic.hh"

// Constructor & Dectructor
Singleton::Singleton() {
	gen = 0;
}

Singleton::~Singleton() {

}

// methods
int Singleton::get_gen() {
return gen;
}

void Singleton::set_gen( int gen_ ) {
gen = gen_;
}

Singleton *Singleton::m_inst = 0;
Singleton* Singleton::instance() {
    // create new instance if null
    if(m_inst == NULL) {
        m_inst = new Singleton();
    }

    return m_inst;
}
