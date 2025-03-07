//  Vector10.cpp
//      <TODO: Describe the data structure here >
//
//  Author: <TODO: place your name here>
//  CU ID: <TODO: place your CU ID here (4 letters - 4 digits)>
//  GitHub Username: <TODO: place your GitHub user name here>

#include "Vector10.h"

Vector10::Vector10() {
  for(int i = 0; i < 10; i++){
    arr[i] = 0;
  }
  cursor = 0;
  }


Vector10::~Vector10() {
  // You don't need to add anything here
}

// Implement this function first, since all tests use it.
int Vector10::value_at(int index) {
  return arr[index];
  
}

// Implement this function second, since most tests use it.
bool Vector10::push_back(int value) {
  if(cursor >= 10)
    return false;
  arr[cursor] = value;
  cursor++;
  return true;
}

int Vector10::count_empty() {
  return 10 - cursor;
}

bool Vector10::search(int value) {
  // YOUR CODE HERE
  for (int i = 0; i < cursor; i++){
    if (arr[i] == value) return true;

  }
  return false;
}

bool Vector10::remove(int index) {
  if (index < 0) return false;
  if (index >= cursor) return false;
  for (int i = index; i < cursor; i++){
    arr[i] = arr[i+1];
  }
  cursor--;
  return true;
}
