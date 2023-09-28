
#ifndef CAT_H
#define CAT_H

class Cat
{
    public:
        void speak();
        void jump();
        void make_happy();
        void make_sad();
        Cat();
        ~Cat();

    private:
        bool happy = false; // private variable must be initialized to 0 else there might be garbage value depending on the compiler
};

#endif //CAT_H