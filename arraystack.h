#define STACK_H

template <class T>

class stack{
  private:
    T* data; // array or pointer
    int top;
    int size;
    void resize(); // if it needs to be resized
    bool needToResize();


  public:
      stack () //constructor
      {
        size = 5;
        data = new T[size];
        top = 0;
      } // end of constructor
      void push(T item);
      T peek();
      T pop();
      bool isEmpty(); // to see if stack is isEmpty


};

#include "arraystack.cpp"
