//
// Created by Christoffer Strandberg on 2017-11-17.
//

#ifndef CPP_ADV_LAB1_LIST_H
#define CPP_ADV_LAB1_LIST_H

#include "Link.h"
#include <iostream>
template <class T>
class List : public Link<T> {
private:
    std::ostream& Print(std::ostream& cout){

    }

public:

    List(){

    }

    T* First(){
        return this->next;
    }

    T* Last(){
        return this->prev;
    }

    T* PushFront(T* item){
        item->InsertAfter(this->next);
        this->next = item;
        return item;
    }

    T* PopFront(){
        T* rItem = this->next;
        delete this->next;
        this->next = rItem->Next();
        return rItem;
    }

    T* PushBack(T* item){
        item->InserBefore(this->prev);
        this->prev = item;
        return item;
    }

    template <class Arg>
            T* FindFirst(const Arg& searchFor){
        return FindNext(searchFor);
    }
    friend std::ostream& operator<<(std::ostream& cout, List& list){
        return list.Print(cout);
    }

    void Check(){

    }
};
#endif //CPP_ADV_LAB1_LIST_H
