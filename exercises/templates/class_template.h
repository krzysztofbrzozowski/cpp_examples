#ifndef CLASS_TEMPLATE
#define CLASS_TEMPLATE

template <class T>

class Test {
    T data;
    public:
        Test(const T &data): data(data) {}
};

#endif /* CLASS_TEMPLATE */
