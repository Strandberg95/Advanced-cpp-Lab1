//
// Created by Christoffer Strandberg on 2017-11-17.
//

#ifndef CPP_ADV_LAB1_LINK_H
#define CPP_ADV_LAB1_LINK_H

#include <iostream>;

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

    T*Next(){
        return this->next;
    }
    T*Prev(){
        return this->prev;
    }

    T* InsertAfter(T* ToInsert){
        if(next == nullptr){
            next = ToInsert;
        }else{
            next->InsertAfter(ToInsert);
        }
        return next;
    }

    T* InsertBefore(T* ToInsert){
        if(prev == nullptr){
            prev = ToInsert;
        }else{
            prev = InsertBefore(ToInsert);
        }
        return prev;
    }

    T* DeleteAfter(){

    }

    template<class Arg>
    T* FindNext(const Arg& searchFor){

    }

    virtual std::ostream& Print(std::ostream& cout){
        return cout;
    }
};
#endif //CPP_ADV_LAB1_LINK_H
