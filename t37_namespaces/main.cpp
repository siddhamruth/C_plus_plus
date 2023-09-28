#include <iostream>

#include "Cat.h"
#include "Animals.h"

using namespace pvg;

int main()
{

   Cat cat("tommy");
   cat.speak();

   cats::Cat cat_2("cats_namespace_animal");
   cat_2.speak();
   
   return 0;

}