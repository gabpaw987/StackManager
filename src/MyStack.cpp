#include "MyStack.h"
#include "MyStackElement.h"

//Constructor, which sets the lastIndex of the Stack to zero
MyStack::MyStack()
{
    lastIndex=0;
}

//Destructor, which dosen´t do anything but deleting the stack by poping every element in the array
MyStack::~MyStack()
{
    for(int i = 0; i < lastIndex; i++){
        pop();
    }
}

//Puts creates a StackElement and puts it on top of the Stack. It also increases the size of the array.
void MyStack::push()
{
    //Increase index attribute and create a new array with the size 1 bigger than the old array
    lastIndex++;
    MyStackElement* newElements[lastIndex];

    //Copy all Elements from the old array to the new one
    for(int i = 0; i < lastIndex; i++){
        newElements[i] = elements[i];
    }

    //insert a new element into the stack, to fulfil push requirements
    newElements[lastIndex-1] = new MyStackElement();

    //save the new elements array instead of the old one
    *elements = *newElements;
}

//Decreases the size of the array in order to deletes the last pushed element.
void MyStack::pop()
{
    //Decrease index attrbute to create the new array
    lastIndex--;

    //Delete the last element in the stack by creating smaller array and copying each element but the last one into the new array
    MyStackElement* newElements[lastIndex];
    for(int i = 0; i < lastIndex; i++){
        newElements[i] = elements[i];
    }

    //save the new elements array instead of the old one
    *elements = *newElements;
}

//Functions which returns the element on top of the stack
MyStackElement* MyStack::getTopElement()
{
    //returns the element on top of the stack
    return elements[lastIndex-1];
}
