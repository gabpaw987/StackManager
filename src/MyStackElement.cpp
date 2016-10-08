#include "MyStackElement.h"

//Constructor, which increases the static id of the created StackElements
MyStackElement::MyStackElement()
{
    id++;
}

//Destructor, which dosen´t decrease the static id according to the verbal assingment given in the lesson
MyStackElement::~MyStackElement()
{

}

//Initialize the static id with 1, when the first StackElement is created
int MyStackElement::id = 0;
