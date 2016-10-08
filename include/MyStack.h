#ifndef MYSTACK_H
#define MYSTACK_H

#include "MyStackElement.h"

//Header-File for MyStack
class MyStack
{
    //Public functions and attributes
    public:
        int lastIndex;

        //Constructor and Destructor prototypes
        MyStack();
        virtual ~MyStack();

        //Prototype for push and pop functions
        void push();
        void pop();

        MyStackElement* getTopElement();

    //Private funktoions and attribiutes
    private:
        //StackElement array, which holds all the elements in the stack
        MyStackElement* elements[0];
};


#endif // MYSTACK_H
