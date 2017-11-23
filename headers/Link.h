//
// Created by Christoffer Strandberg on 2017-11-17.
//

#ifndef CPP_ADV_LAB1_LINK_H
#define CPP_ADV_LAB1_LINK_H

#include <iostream>
using namespace std;

template <class T>
class List;

template <class T>
class Link {
private:
    Link* next;
    Link* prev;
    friend class List<T>;
public:
    Link(){

    }

    ~Link() = default;

    T*Next() const {
        return static_cast<T*>(this->next);
    }

    T*Prev() const {
        return static_cast<T*>(this->prev);
    }

    T* InsertAfter(T* ToInsert){
        if(next == nullptr){
            this->next = ToInsert;
        }else{
            next->InsertAfter(ToInsert);
        }
        return static_cast<T*>(next);
    }

    T* InsertBefore(T* ToInsert){
        if(prev == nullptr){
            prev = ToInsert;
        }else{
            prev = InsertBefore(ToInsert);
        }
        return static_cast<T*>(prev);
    }

    T* DeleteAfter(){

    }

    template<class Arg>
    T* FindNext(const Arg& searchFor){

    }

    virtual std::ostream& Print(std::ostream& cout) const {
        cout << "You are here" << endl;
        return cout;
    }
};
#endif //CPP_ADV_LAB1_LINK_H
