#include <iostream>
#include "MyStack.h"
#include "MyStackElement.h"

using namespace std;

//main-function of testclass

int main()
{
    //Testing of StackManagment
    cout << "Watch the Stackmanager do his thing!" << endl;
    //Create Stack-Manager
    MyStack* stack = new MyStack();
    //Push first Element onto the Stack
    stack->push();
    //Print id of the first element
    cout << stack->getTopElement()->id << endl;

    //Do a few pushs and pops and print the the id of the last element after each call of a function
    stack->push();
    cout << stack->getTopElement()->id << endl;
    stack->push();
    cout << stack->getTopElement()->id << endl;
    stack->push();
    cout << stack->getTopElement()->id << endl;
    stack->pop();
    cout << stack->getTopElement()->id << endl;
    stack->pop();
    cout << stack->getTopElement()->id << endl;
    stack->push();
    cout << stack->getTopElement()->id << endl;

    //delete Stack-Manager
    delete &stack;

    //return 0 because everything went well, when this statement is reached
    return 0;
}
