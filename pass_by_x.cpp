/* Passing by address */
void func(*y) {
    *y = 1;
}

func(&a);

/* Passing by reference */
void func(int& y) {
    y = 1;
}

func(x);

/* Passing by const reference */
class MyClass {};

/* Arg refernenced by CONST can not be changed
   The most sufficient way wyll be that way since you are not creating any copy thus 
   there is no overhead of copying the data 
*/
void func(const MyClass& y) {
    return MyClass;
}

MyClass my_class;
func(my_class);