#ifndef STACK_H
#include "arraystack.h"
#endif

#include <stdexcept>

template <class T>
void stack<T>::push (T item)
{
  if (needToResize())
      resize();

  data[top] = item;
  top++;
}

// in peek and pop it needs to refer to the spot before
template <class T>
T stack<T>::peek()
{
    if (top <= 0)
        throw std:: out_of_range("Attempte to peek an empty stack."); // this stops the program
    return data[top - 1]; // return whats in previous spot
}
template <class T>
T stack<T> :: pop()
{
    if (top <= 0)
      throw std::out_of_reach("Attempted to pop an empty stack.");
    return data[top];
}

// Resizing

template <class T>
bool stack<T>::needToResize()
{
  return (top == size);

}

template <class T >
void stack<T>::resize()
{
  T* newdata = new T[2*size]; //resizing array
  for (int i = 0; i< size; i ++)
      newdata[i] = data [i];//copy data over
    data = newdata;
    size *=2;
}

template <class T>
bool stack<T>::isEmpty()
{
  return(top==0);
}
