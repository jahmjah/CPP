#ifndef CCALCULADORA_H
#define CCALCULADORA_H


class cCalculadora
{
    public:
        cCalculadora();
        virtual ~cCalculadora();

        unsigned int Getm_Counter() { return m_Counter; }
        void Setm_Counter(unsigned int val) { m_Counter = val; }
// int a,b;
        int mSumar(int a,int b), mRestar(int a,int b);
    protected:

    private:
        unsigned int m_Counter;

};

#endif // CCALCULADORA_H

cCalculadora::mSumar(int a, int b){
    int pa= a;
    int pb= b;
    return pa + pb;
}


cCalculadora::mRestar(int a, int b){
    int pa= a;
    int pb= b;
    return pa - pb;
}
