//
// Created by Christoffer Strandberg on 2017-11-17.
//

#ifndef CPP_ADV_LAB1_LIST_H
#define CPP_ADV_LAB1_LIST_H

#include "Link.h"
#include "iostream"
using namespace std;

template <class T>
class List : public Link<T> {
private:
    std::ostream& Print(std::ostream& cout){
        //cout << "Here" << endl;

        return cout;
    }

public:

    List(){

    }

    T* First(){
        return static_cast<T*>(this->next);
    }

    T* Last(){
        return static_cast<T*>(this->prev);
    }

    T* PushFront(T* item){
        item->InsertAfter(static_cast<T*>(this->next));
        this->next = item;
        return static_cast<T*>(item);
    }

    T* PopFront(){
        T* r = static_cast<T*>(this->next);
        delete this->next;
        this->next = this->next->next;
        return r;
    }

    T* PushBack(T* item){
        item->InsertBefore(static_cast<T*>(this->prev));
        this->prev = item;
        return static_cast<T*>(item);
    }

    template <class Arg>
            T* FindFirst(const Arg& searchFor){
        return this->FindNext(searchFor);
    }

    friend std::ostream& operator<<(std::ostream& cout, List& list){
        //cout << "Ay lmao" << endl;
        return list.Print(cout);
    }

    void Check(){

    }
};
#endif //CPP_ADV_LAB1_LIST_H
