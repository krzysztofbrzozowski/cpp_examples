#ifndef CLASS_TEMPLATE
#define CLASS_TEMPLATE

template <class T>

class Test {
    T data;
    public:
        Test(const T &data): data(data) {}
};


template <typename T2>

class Test2 {
    T2 data;
    public:
        Test2(const T2 &data): data(data) {}
};

#endif /* CLASS_TEMPLATE */
