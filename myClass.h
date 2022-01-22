#ifndef MYCLASS_H
#define MYCLASS_H


class myClass  {
    public: myClass(),~myClass(); // Constructor
    private: paint();
/**
        public:	paint(int a, int b) {
             int c = 0;
              c = a*b;
             //std::cout << "Windows button \n\t" << c << "\n";
              return c;
            //    system("pause");
        } **/
};

    myClass::myClass()
     {
     std::cout << "------------------------------\n";
     std::cout << "Welcome to the constructor!\n";
     }
    myClass::~myClass()
     {
     std::cout << "------------------------------\n";
     std::cout << "The destructor is now running.\n";
     }
    myClass::paint(int a, int b){
             int c = 0;
              c = a*b;
             //std::cout << "Windows button \n\t" << c << "\n";
              return c;
            //    system("pause");
    }



#endif // MYCLASS_H
