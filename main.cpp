#include <iostream>
#include<string>
#include<iomanip>
#include<limits>
#include<cstring>
#include<concepts>
#include<type_traits>

//defined header files
#include "comparison.h"
#include "math_operation.h"
#include "contants.h"
#include "cylinder_class.h"
#include "dog_class.h"
#include "person_class.h"
#include "player_person_class.h"
#include "Person.h"
#include "Test_Private_Person.h"
#include "Test_Protected_Person.h"

void say_age_PV(int age);
void say_age_PP(int* age);
void say_age_PR(int& age);
template <typename dType> dType maximum(dType a, dType b);
template <typename dType>const dType& maximumRV(const dType& a, const dType& b);
template<> const char* maximum<const char*>(const char* a, const char* b);
void f_printHello()
{
    std::cout << "------------------------------" << std::endl;
    std::cout << "f_print_hello():" << std::endl;
    std::cout << "Hello world!" << std::endl;
    std::cout << "------------------------------" << std::endl;
}
void f_comments()
{
    std::cout << std::endl << "------------------------------" << std::endl;
    std::cout << "f_comments(): ";
    std::cout << "you are seeing this line, as this is not commented, below there is a line in comment section, not seeing." << std::endl;
    //std::cout << "you will not see this line, as this is not commented" << std::endl;
    std::cout << "------------------------------" << std::endl;
    std::cout << std::endl << std::endl;

}
void f_errors()
{
    /*There are 3 kinds of errors:
        1. Compiletime Error: show errors while building/compiling and don't produce the exe file(e.g: not putting semi-colon)
        2. Runtime Error    : show errors while building/compiling but produce the exe file(e.g: 8/0)
        3. warnings         : show potential errors while building/compiling and produce the exe file
    */
    //std::cout<<"Compiletime error" //Compiletime error
    //std::cout<< (9/0) <<std::endl; //runtime error
}
void f_statements()
{
    std::cout << std::endl << "------------------------------" << std::endl;
    std::cout << "f_statements(): " << std::endl;
    int first_num{ 10 };
    int second_num{ 20 }, third_num{ 30 };
    std::cout << "First_num = " << first_num << "from first statement" << std::endl;
    std::cout << "second_num = " << second_num << " third_num = " << third_num << " from 2nd statement" << std::endl;
    std::cout << "------------------------------" << std::endl;

}
int f_getIntSumFromIntParams(int param1, int param2)
{
    std::cout << std::endl << "------------------------------" << std::endl;
    std::cout << "f_getIntSumFromIntParams(int param1, int param2): from main()";
    int sum = param1 + param2;
    return sum;
    std::cout << std::endl << "------------------------------" << std::endl;
}
void f_iostreamFunctions()
{
    std::cout << std::endl << "------------------------------" << std::endl;
    std::cout << "f_statements(): " << std::endl;
    std::cout << "1.\tstd::cout -- printing data on cosole\n2.\tstd::cin -- reading data from console.\n3.\tstdcerr -- printing errors in terminal.\n4.\tstd::clog -- printing log message in terminal." << std::endl;
    std::cerr << "something error occured!!" << std::endl; // works like normal cout.
    std::clog << "logs this message!!" << std::endl; // works like normal cout.
    std::string name, fullName;
    int age;
    std::cout << "Enter your name and age: ";
    std::cin >> name >> age;
    std::cin.ignore();
    std::cout << "Hello " << name << ", you are " << age << " years old!" << std::endl;
    std::cout << "Please enter your full name: ";
    std::getline(std::cin, fullName);
    std::cout << std::endl << "------------------------------" << std::endl;
    std::cout << "Hello " << fullName << ", you are " << age << " years old!" << std::endl;
}
void f_differentNumbers()
{
    std::cout << std::endl << "------------------------------" << std::endl;
    std::cout << "f_differentNumbers(): " << std::endl;
    int decimal = 15; //decimal
    int binary = 0b00001111; //binary
    int hexa = 0x00f; //hexadecimal
    int octal = 017;
    std::cout << "Decimal(15) = " << decimal << ", binary(0b00001111) = " << binary << ", hexa(0x00f) = " << hexa << ", octal(017) = " << octal << std::endl;
    std::cout << std::endl << "------------------------------" << std::endl;
}
void f_assignments()
{
    std::cout << std::endl << "------------------------------" << std::endl;
    std::cout << "f_assignments(): " << std::endl;

    std::cout << "1.Braced Assignments: " << std::endl;
    int b_num1{};
    int b_num2{ 10 };
    int f_frac(2.02);
    int a_frac = 2.02;
    std::cout << "b_num1{} = " << b_num1 << std::endl;
    std::cout << "b_num2{10} = " << b_num2 << std::endl;
    std::cout << "f_frac(2.92) = " << f_frac <<" (in functional assignment it works, but not by braced assignment)"<< std::endl;
    std::cout << "f_frac = 2.02 => " << a_frac << " (in assignment notation it works, but not by braced assignment)" << std::endl;

    std::cout << "sizeof(b_num1) = " << sizeof(b_num1) << std::endl;

    std::cout << std::endl << "------------------------------" << std::endl;

    std::cout << "1.Functional Assignments: " << std::endl;
    int fa_num1(20);
    std::cout << "fa_num1(20) = " << fa_num1 << std::endl;
    int fa_num2(10);
    std::cout << "fa_num2(10) = " << fa_num2 << std::endl;
    std::cout << fa_num1 + fa_num2 << std::endl;
    //std::cout <<"0.0/0.0 = "<< 0.0/0.0 << std::endl; // compile time error, not run time error

    std::cout << "With braced assignment: " << std::endl;
    double zero1{}, zero2{}, notZero{ 5.6 };
    double resultINF = zero1 / zero2, resultNaN = notZero/zero1;
    std::cout << zero1 << "/" << zero2 << " = " << resultINF << std::endl;
    std::cout << notZero << "/" << zero2 << " = " << resultNaN << std::endl;
    //std::cout << 0.0 << "/" << 0.0 << " = " << {0.0} / {0.0} << std::endl;

    std::cout << "With functional assignment: " << std::endl;
    double bzero1(0.0); //without any value it gives build error.
    double bzero2(0.0); 
    double bnotZero(5.6);
    double bresultINF = bzero1 / bzero2, bresultNaN = bnotZero / bzero1;
    std::cout << bzero1 << "/" << bzero2 << " = " << bresultINF << std::endl;
    std::cout << bnotZero << "/" << bzero2 << " = " << bresultNaN << std::endl;

    std::cout << "With assignment: initialization" << std::endl;
    double azero1 = 0.0; //without any value it gives build error.
    double azero2 = 0.0;
    double anotZero = 5.6;
    double aresultINF = azero1 / azero2, aresultNaN = anotZero / azero1;
    std::cout << azero1 << "/" << azero2 << " = " << aresultINF << std::endl;
    std::cout << anotZero << "/" << azero2 << " = " << aresultNaN << std::endl;

    /* 
    * with int variable, it provides runtime error
    std::cout << "With functional assignment: " << std::endl;
    int izero1(0); //without any value it gives build error.
    int izero2(0);
    int inotZero(5);
    int iresultINF = izero1 / izero2, iresultNaN = inotZero / izero1;
    std::cout << izero1 << "/" << izero2 << " = " << iresultINF << std::endl;
    std::cout << inotZero << "/" << izero2 << " = " << iresultNaN << std::endl;*/



    std::cout << std::endl << "------------------------------" << std::endl;
}
void f_varModifier()
{
    std::cout << std::endl << "------------------------------" << std::endl;

    std::cout << "short, long only works with whole numbers(int)" << std::endl;
    signed int num1{ -20 };
    //unsigned int num2{ -20 };//compiler error
    std::cout << "signed num1{-20} = " << num1 << std::endl;
    //std::cout<<" unsigned num2{-20}" << num2 << std::endl;
    std::cout << "sizeof(int) = " << sizeof(int) << " sizeof(long) = " << sizeof(long) << " sizeof(long long) = " << sizeof(long long) << std::endl;
    std::cout << "sizeof(int) = " << sizeof(int) << " sizeof(short) = " << sizeof(short) << " (int short short is not possible)" << std::endl;
    std::cout << "sizeof(float) = " << sizeof(float) << " sizeof(double) = " << sizeof(double) << " sizeof(long double) = " << sizeof(long double) << std::endl;

    float v_float{10.123456789111f};
    std::cout << std::setprecision(10);
    std::cout << "setprecision(10) for 10.123456789111f = " << v_float << std::endl;
    
    double v_double{ 10.123456789111 };
    std::cout << std::setprecision(10);
    std::cout << "setprecision(10) for 10.123456789111 = " << v_double << std::endl;

    long double v_lDouble{ 10.123456789123456789 };
    std::cout << std::setprecision(15);
    std::cout << "setprecision(15) for 10.123456789123456789 = " << v_lDouble << std::endl;

    double v_doubleExp{ 123456e6 };
    std::cout <<"123456e6 = "<< v_doubleExp << std::endl;
    double v_doubleExp2{ 12345e-6 };
    std::cout << "12345e-6 = " << v_doubleExp2 << std::endl;

    std::cout << std::endl << "------------------------------" << std::endl;

}
void f_booleans()
{
    std::cout << std::endl << "------------------------------" << std::endl;
    std::cout << "F_booleans(): " << std::endl;
    std::cout << "sizeof(bool) = " << sizeof(bool) << std::endl;
    bool var1{ true }, var2{ false };
    std::cout << "without printing boolalpha : " << std::endl;
    std::cout << "var1{true} = " << var1 << " var2{false} = " << var2 << std::endl;
    
    std::cout << "after printing boolalpha : " << std::endl;
    std::cout << std::boolalpha;
    std::cout << "var1{true} = " <<var1<<" var2{false} = "<<var2<< std::endl;
    std::cout << std::endl << "------------------------------" << std::endl;

}
void f_characters()
{
    std::cout << std::endl << "------------------------------" << std::endl;
    std::cout << "f_characters(): " << std::endl;

    char char1 = 65; //ascii character code for 'A'
    std::cout << "char1 : " << char1 << std::endl;
    std::cout << "char1 in int : " << static_cast<int>(char1) << std::endl;

    std::cout << std::endl << "------------------------------" << std::endl;
}
void f_autoVar()
{
    std::cout << std::endl << "------------------------------" << std::endl;
    std::cout << "f_autoVar(): " << std::endl;

    auto var1{ 12 };
    auto var2{ 12.32 };
    auto var3{ 2.32f };
    auto var4{ 15.01l };
    auto var5{ 'r' };

    auto var6{ 123u };
    auto var7{ 123ul };
    auto var8{ 123ll };

    std::cout << "auto 12 occupies = " << sizeof(var1) <<"bytes"<< std::endl;
    std::cout << "auto 12.32 occupies = " << sizeof(var2) << "bytes" << std::endl;
    std::cout << "auto 2.32f occupies = " << sizeof(var3) << "bytes" << std::endl;
    std::cout << "auto 15.01l occupies = " << sizeof(var4) << "bytes" << std::endl;
    std::cout << "auto 'r' occupies = " << sizeof(var5) << "bytes" << std::endl;
    std::cout << "auto 123u occupies = " << sizeof(var6) << "bytes" << std::endl;
    std::cout << "auto 123ul occupies = " << sizeof(var7) << "bytes" << std::endl;
    std::cout << "auto 123ll occupies = " << sizeof(var8) << "bytes" << std::endl;

    var6 = -234;
    std::cout << "var6(123u in auto) after setting -234 = " << var6 << "[getting garbase]"<<std::endl;

    var5 = -234;
    std::cout << "var5('r' in auto) after setting -234 = " << var5 << "[getting garbase]" << std::endl;
    std::cout << std::endl << "------------------------------" << std::endl;
}
void f_pre_postfix_change()
{
    std::cout << std::endl << "------------------------------" << std::endl;
    std::cout << "f_pre_postfix_change(): " << std::endl;

    int val{ 10 };
    std::cout << "val = " << val << std::endl;
    std::cout << "val++(in line) = " << val++ << std::endl;
    std::cout << "val(after postfix increment) = " << val << std::endl;

    std::cout << "val = " << val << std::endl;
    std::cout << "++val(in line) = " << ++val << std::endl;
    std::cout << "val(after prefix increment) = " << val << std::endl;

    std::cout << std::endl << "------------------------------" << std::endl;
}
void f_output_formatting()
{
    std::cout << std::endl << "------------------------------" << std::endl;
    std::cout << "f_output_formatting(): " << std::endl;
    std::cout << "Formatted table : " << std::endl;

    std::cout<<std::left;
    int colwidth{ 20 };
    std::cout << std::setw(colwidth) << "Lastname" << std::setw(colwidth) << "Firstname" << std::setw(colwidth/2) << "Age" << std::endl;
    std::cout << std::setw(colwidth) << "Daniel" << std::setw(colwidth) << "Gray" << std::setw(colwidth/2) << "25" << std::endl;
    std::cout << std::setw(colwidth) << "Stanley" << std::setw(colwidth) << "Woods" << std::setw(colwidth/2) << "33" << std::endl;
    std::cout << std::setw(colwidth) << "Jordan" << std::setw(colwidth) << "Parker" << std::setw(colwidth/2) << "45" << std::endl;
    std::cout << std::setw(colwidth) << "Joe" << std::setw(colwidth) << "Ball" << std::setw(colwidth/2) << "21" << std::endl;
    std::cout << std::setw(colwidth) << "Josh" << std::setw(colwidth) << "Carr" << std::setw(colwidth/2) << "27" << std::endl;
    std::cout << std::setw(colwidth) << "Izaiah" << std::setw(colwidth) << "Robinson" << std::setw(colwidth/2) << "29" << std::endl;

    std::cout << std::right;
    std::cout << std::setw(colwidth) << "Lastname" << std::setw(colwidth) << "Firstname" << std::setw(colwidth / 2) << "Age" << std::endl;
    std::cout << std::setw(colwidth) << "Daniel" << std::setw(colwidth) << "Gray" << std::setw(colwidth / 2) << "25" << std::endl;
    std::cout << std::setw(colwidth) << "Stanley" << std::setw(colwidth) << "Woods" << std::setw(colwidth / 2) << "33" << std::endl;
    std::cout << std::setw(colwidth) << "Jordan" << std::setw(colwidth) << "Parker" << std::setw(colwidth / 2) << "45" << std::endl;
    std::cout << std::setw(colwidth) << "Joe" << std::setw(colwidth) << "Ball" << std::setw(colwidth / 2) << "21" << std::endl;
    std::cout << std::setw(colwidth) << "Josh" << std::setw(colwidth) << "Carr" << std::setw(colwidth / 2) << "27" << std::endl;
    std::cout << std::setw(colwidth) << "Izaiah" << std::setw(colwidth) << "Robinson" << std::setw(colwidth / 2) << "29" << std::endl;

    std::cout << std::internal;
    float var = -123.234;
    std::cout << std::setw(colwidth) << var << std::endl;
    std::cout << std::left;
    std::cout << std::setw(colwidth) << var << std::endl;
    std::cout << std::right;
    std::cout << std::setw(colwidth) << var << std::endl;

    std::cout << std::right;
    std::cout << std::setfill('.');
    std::cout << std::setw(colwidth) << "Lastname" << std::setw(colwidth) << "Firstname" << std::setw(colwidth / 2) << "Age" << std::endl;
    std::cout << std::setw(colwidth) << "Daniel" << std::setw(colwidth) << "Gray" << std::setw(colwidth / 2) << "25" << std::endl;
    std::cout << std::setw(colwidth) << "Stanley" << std::setw(colwidth) << "Woods" << std::setw(colwidth / 2) << "33" << std::endl;
    std::cout << std::setw(colwidth) << "Jordan" << std::setw(colwidth) << "Parker" << std::setw(colwidth / 2) << "45" << std::endl;
    std::cout << std::setw(colwidth) << "Joe" << std::setw(colwidth) << "Ball" << std::setw(colwidth / 2) << "21" << std::endl;
    std::cout << std::setw(colwidth) << "Josh" << std::setw(colwidth) << "Carr" << std::setw(colwidth / 2) << "27" << std::endl;
    std::cout << std::setw(colwidth) << "Izaiah" << std::setw(colwidth) << "Robinson" << std::setw(colwidth / 2) << "29" << std::endl;

    int v_pos{ 44 };
    std::cout << "Showpos : " << std::endl;
    std::cout << "Before showpos: " << v_pos << std::endl;
    std::cout << std::showpos;
    std::cout <<"After showpos: "<< v_pos << std::endl;


    std::cout << "34 in hex using std::hex = " <<std::hex<< v_pos << std::endl;
    std::cout << "34 in octal using std::octal = " <<std::oct<< v_pos << std::endl;

    double v_double{ 3123456789.123456789 };
    std::cout << "Before std::scientific : " << v_double << std::endl;
    std::cout << "std::scientific : " << std::endl;
    //std::cout << std::scientific;
    std::cout << "After std::scientific : " << v_double << std::endl;
    std::cout << std::endl << "------------------------------" << std::endl;
}
void f_numericLimits()
{
    std::cout << std::endl << "------------------------------" << std::endl;
    std::cout << "f_numericLimits(): " << std::endl;
   
    std::cout <<"Short variable min, max, lowest = "<< std::numeric_limits<short>::min() <<" || "<< std::numeric_limits<short>::max() << " || " << std::numeric_limits<short>::lowest() << std::endl;
    std::cout << "int variable min, max, lowest = " << std::numeric_limits<int>::min() <<" || "<< std::numeric_limits<int>::max() << " || " << std::numeric_limits<int>::lowest() << std::endl;
    std::cout << "long variable min, max, lowest = " << std::numeric_limits<long>::min() << " || " << std::numeric_limits<long>::max() << " || " << std::numeric_limits<long>::lowest() << std::endl;
    std::cout << "long long variable min, max, lowest = " << std::numeric_limits<long long>::min() << " || " << std::numeric_limits<long long>::max() << " || " << std::numeric_limits<long long>::lowest() << std::endl;
    std::cout << "unsigned variable min, max, lowest = " << std::numeric_limits<unsigned>::min() << " || " << std::numeric_limits<unsigned>::max() << " || " << std::numeric_limits<unsigned>::lowest() << std::endl;

    std::cout << "float variable min, max, lowest = " << std::numeric_limits<float>::min() << " || " << std::numeric_limits<float>::max() << " || " << std::numeric_limits<float>::lowest() << std::endl;
    std::cout << "double variable min, max, lowest = " << std::numeric_limits<double>::min() << " || " << std::numeric_limits<double>::max() << " || " << std::numeric_limits<double>::lowest() << std::endl;


    std::cout << std::endl << "------------------------------" << std::endl;
}
void f_mathOps()
{
    std::cout << std::endl << "------------------------------" << std::endl;
    std::cout << "f_mathOps(): " << std::endl;

    double exp = std::exp(2);
    std::cout << "exp(2) = " << exp << std::endl;

    double vlog2 = std::log2(54.59), vlog10 = std::log10(54.59);
    std::cout << "log2(54.59) = " << vlog2 <<" || log10(54.59) = "<< vlog10 << std::endl;

    double v_round1 = std::round(2.49), v_round2 = std::round(2.5), v_round3 = std::round(2.51);
    std::cout << "round(2.49) = " << v_round1 << " || round(2.50) = " << round(2.50) << " || round(2.51) = " << round(2.51) << std::endl;

    std::cout << std::endl << "------------------------------" << std::endl;
}
void f_weiredVar()
{
    std::cout << std::endl << "------------------------------" << std::endl;
    std::cout << "f_weiredVar(): " << std::endl;

    char char1{ 40 }, char2{ 41 };
    short short1{ 10 }, short2{ 20 };
    auto result1 = char1 + short1, result2 = char2 + short2;
    std::cout << "size of char1 + short1 = " << sizeof(result1) << " || size of char2 + short2 = " << sizeof(result2) << std::endl;

    std::cout << std::endl << "------------------------------" << std::endl;
    std::cout << std::endl << "------------------------------" << std::endl;
}
void f_ternary()
{
    std::cout << std::endl << "------------------------------" << std::endl;
    std::cout << "f_ternary(): " << std::endl;
    int a = 20, b = 200;
    int ans = (a > b) ? a : 22.5f;
    std::cout << ((a > b) ? a : 22.5f) << std::endl;
}
void f_charArray()
{
    std::cout << std::endl << "------------------------------" << std::endl;
    std::cout << "f_charArray(): " << std::endl;
    char message[]{ 'H', 'e', 'l','l','o','\0' };
    std::cout << "printing char array without loop = " << message << std::endl;
    std::cout << std::endl << "------------------------------" << std::endl;
}
void f_pointer()
{
    std::cout << std::endl << "------------------------------" << std::endl;
    std::cout << "f_pointer(): " << std::endl;
    int* p_numer1{ nullptr }, normal_var{}, var{ 10 }; // nomal_var is not pointer here
    //normal_var = &var ;
    std::cout << p_numer1 << " " << normal_var  << std::endl;

    const char* p_message{ "Hello World" };
    std::cout << "Array of characters can be assigned to a const pointer." << std::endl;
    std::cout << "const char* p_message =" << p_message << std::endl;

    /*
    * Memory Management Unit is divided into 4 parts:
    * 1.Text: Holds the binary data
    * 2.Data:
    * 3.Heap: Memory of this portion can be dynamically allocated by the developer by using pointer(new,delete) and this memeory is finite.
    * 4.Stack:Memory of this portion can't be dynamically allocated by the developer, rather controlled by scope mechanism and this memeory is finite.
    * e.g:
    *       int main()
    *       {
    *           {                               //scope-start
    *               int local_var{20};          //get demolished after going out of this stack.
    *               int* local_ptr_var=new int; //it's stored in the heap, and don't get deleted after getting out of stack, and can be accessed from out of scope.
    *           }
    *       }
    * 
    * local_ptr_var will be deleted only when
    * we delete and assign a nullptr to that pointer
    * otherwise it'll make error or the value stored in that pointer address may affect.
    * PLEASE don't delete twice a memory, bad things can be happened (dangling pointer)
    *           
    */

    /*
    * Don't assign the memory address(like 0x982/055/45) manually to a pointer, 
    * cause we don't know what is stored on that address previously.Thats why we need to assign address dynamically.
    * initialize a pointer with "nullptr" and use "new" int/float/double to allocate that size of memory, then assign value to that pointer
    * or just use new int/float/double(val)
    */
    int* p{};   //we are now allocating memory of heap, not stack [without nullptr, it also works]
    p = new int{};
    *p = 20;            //this 3 lines ca be written in a single line int* p{ new int{20} }

    //int* p{ new int{20} };

    std::cout << "Value of *p = " << *p << " address of *p = " << p << std::endl;

    //delete this address from heap by using delete and nullptr
    delete p;
    p = nullptr;

    /*
    * 3 types dangling pointer:
    *    1. Uninitialized pointer [just declaration, not using any nullptr/ new int()/ {}]
    *    2. deleted pointer       [using a pointer, that is deleted already]
    *    3. address that is used by multiple pointer [ int* p1{int new(20)}; int p2{p1}; delete p1; cout<<*p2; ]
    *                                                  //here p2 pointing to p1, which is printing after after deleting p1, but
    *                                                  // which makes p2 a dangling pointer
    * 
    * Solution to dangling pointer:
    *   1. Uninitialized pointer: always initialize and before using any pointer just make sure that is not nullptr/or assigned a value
    *   2. deleted pointer:       always assign nullptr after deleting a pointer and check weather it's nullptr, before using it
    *   3. multiple pointer pointing to a same address: make sure which is master pointer and which are slave.
    *                                                   don't just delete the mater pointer
    * 
    * mainly checking condition wheather a pointer is nullptr/not using
    */

    int lim{ 100000000 };
    /*for (size_t i{0}; i <= lim; ++i)
    {
        try
        {
            int* data = new int[lim];
        }
        catch (const std::exception& ex)
        {
            std::cout << " Some thing went wrong : " << ex.what() << std::endl;
        }
    }*/

    /*for (size_t i{0}; i <= lim; ++i)
    {
        int* data = new(std::nothrow) int[lim];// if new fail, nullptr is set 
        if (data != nullptr)
        {
            std::cout << "Data Allocated!\n";
        }
        else
        {
            std::cout << "Data allocation failed!\n";
        }
    }*/

    //null pointer safety: is something to avoid crushing/BAD erros, like- dangling pointer etc
    // checking if the pointer is nullptr before using and after deleting a pointer
    int* p_number{};
    
    //p_number = new int(7);
    if (p_number != nullptr)
    {
        std::cout << "points to a VALID address : " << p_number << std::endl;
        std::cout << "*p_number = " << *(p_number) << std::endl; 
    }
    else
    {
        std::cout << "Points to an invalid address\n";
    }
    
    delete p_number;
    if (p_number != nullptr)
    {
        p_number = nullptr;
        std::cout << "Deletion compelete\n";
    }

    //Memory Leak(double allocation witout deletion the prior address
    int* p_leak{ new int(90) };
    int var_MLeak{ 100 };
    p_leak = &var_MLeak; //memory of 90 here priorly pointed by p_leak has been leaked after reassign 100
                         // OS also thinks that 90 is in use
    {
        int* p_scope{ new int(67) }; //memory leaks
                                    //after this scope, the local variable 67'a address get lost(as it's in stack)
                                    //but the pointer don't dieand we can't access p_scope
    }

    //Dynamic Array
    size_t size{ 10 };
    double* p_salaries{ new double[size] }; //array witout initilization
    int* p_student{ new(std::nothrow) int[size] {} };// array initialized with 0 to each
    double* p_scores{ new(std::nothrow) double[size] { 1,2,3,4,5} };// array initialized with 5 elements, others zero


    if (p_scores != nullptr)
    {
        for (size_t i{ 0 }; i < size; ++i)
        {
            std::cout << "Value : " << p_scores[i] << " : " << *(p_scores + i) << std::endl;
        }
    }
    else
    {
        std::cout << "p_salaries not allocated!";
    }

    /*for (auto score : p_scores) range based for loops don't works with dynamically allocated array
    {

    }*/
    delete[] p_salaries;
    p_salaries = nullptr;

    delete[] p_student;
    p_student = nullptr;

    delete[] p_scores;
    p_scores = nullptr;
    std::cout << std::endl << "------------------------------" << std::endl;
}
void f_reference()
{
    std::cout << std::endl << "------------------------------" << std::endl;
    std::cout << "f_reference(): " << std::endl;
    int int_val{ 45 };
    double double_val{ 33.45 };

    //reference must be initialized, otherwise error
    int& reference_to_int1{ int_val };
    int& reference_to_int2 = int_val;
    double& refererence_to_double1{ double_val };

    //don't need the deference operator to print reference like pointer
    std::cout << "Before Change : \n";
    std::cout << "int_val = " << int_val << " ||reference_to_int1 = " << reference_to_int1 << " || reference_to_int2 = " << reference_to_int2 << std::endl;
    std::cout << "double_val = " << double_val << " || refererence_to_double1 = " << refererence_to_double1 << std::endl;

    std::cout << "&int_val = " << &int_val << " || &reference_to_int1 = " << &reference_to_int1 << std::endl;
    std::cout << "&double_val = " << &double_val << " || &refererence_to_double1 = " << &refererence_to_double1 << std::endl << std::endl;

    reference_to_int1 = 40;
    double_val = 43.45;

    std::cout << "\nAfter Change : \n";
    std::cout << "int_val = " << int_val << " ||reference_to_int1 = " << reference_to_int1 << " || reference_to_int2 = " << reference_to_int2 << std::endl;
    std::cout << "double_val = " << double_val << " || refererence_to_double1 = " << refererence_to_double1 << std::endl;

    //double changed_var = 30.456;
    //reference can be reassigned but the address it was holding initially, that doesn't get changed
    //and the value it is reassigned, it just get reflected into the initialzed variable
    std::cout << "\n\nafter 'reference_to_int1 = double_val' : \n";
    reference_to_int1 = double_val;
    std::cout << "double_val = " << double_val << " || int_val = " << int_val << " || reference_to_int1 = " << reference_to_int1 << " || &reference_to_int1 = " << &reference_to_int1 << " || &double_var = " << &double_val << std::endl;


    //as changing in reference with other value make no sense or logical error, we need to declare it as const
    int int_var3{ 68 };
    const int& const_ref{ int_var3 };
    std::cout << "\n\nConst_reference : \n";
    std::cout << "int_var3 = " << int_var3 << " || &int_var3 = " << &int_var3 << " || const_ref = " << const_ref << " || &const_ref = " << &const_ref << std::endl;
    
    //const_ref = 90; // makes error


    std::cout << "\n\nConst_reference after changing the referred variable : \n";
    //const int& const const_ref_const_val{ int_var3 };
    int_var3++;
    std::cout << "int_var3 = " << int_var3 << " || &int_var3 = " << &int_var3 << " || const_ref = " << const_ref << " || &const_ref = " << &const_ref << std::endl;

    //const reference to const value makes it so secured
   //int int_var4{ 68 };
    const int const_var{ 68 };
    const int& const_ref_const_var{ const_var };
    std::cout << "\n\nCOnst reference, const value : \n\n";
    std::cout << "const_var = " << const_var << " || &const_var = " << &const_var << " || const_ref_const_var = " << const_ref_const_var << " || &const_ref_const_var = " << &const_ref_const_var << std::endl;

    std::cout << std::endl << "------------------------------" << std::endl;
}
void f_character_manip()
{
    std::cout << std::endl << "------------------------------" << std::endl;
    std::cout << "f_character_manip(): " << std::endl;
    
    //alphaneumeric-- (isalnum)
    std::cout << "Alphaneumeric : \n";
    std::cout << "C is alphaneumeric : " << (std::isalnum('C') != 0) << std::endl;
    std::cout << "7 is alphaneumeric : " << (std::isalnum('7') !=0) << std::endl;
    std::cout << "^ is alphaneumeric : " << (std::isalnum('^') != 0) << std::endl;
    
    //alphabetic-- (isalpha)
    std::cout << "\n\nAlphabetic : \n";
    std::cout << "C is alphabetic : " << (std::isalpha('C') != 0) << std::endl;
    std::cout << "* is alphabetic : " << (std::isalpha('*') != 0) << std::endl;
    std::cout << "7 is alphabetic : " << (std::isalpha('7') != 0) << std::endl;

    //digit-- (isdigit)
    std::cout << "\n\isdigit : \n";
    std::cout << "C is isdigit : " << (std::isdigit('C') != 0) << std::endl;
    std::cout << "* is isdigit : " << (std::isdigit('*') != 0) << std::endl;
    std::cout << "7 is isdigit : " << (std::isdigit('7') != 0) << std::endl;

    //isblank
    std::cout << "\n\nBlank character : \n";
    char message[]{"Hello there, I am working with character manipulation."};
    std::cout << "message:-" << message << std::endl;

    int blank_char{};
    for (size_t i{ 0 }; i < std::size(message); ++i)
    {
        if (std::isblank(message[i]))
        {
            std::cout << "Founded Blank character at index : [" << i << "]" << std::endl;
            ++blank_char;
        }
    }
    std::cout << "Total Blank character : " << blank_char << std::endl;

    //islower && isupper
    std::cout << "\n\nUpper and Lower Character Count : \n";
    int lower_char{}, upper_char{};
    for (size_t i{ 0 }; i < std::size(message); ++i)
    {
        if (std::islower(message[i]))
        {
            //std::cout << "Founded Blank character at index : [" << i << "]" << std::endl;
            ++lower_char;
        }
        if (std::isupper(message[i]))
        {
            ++upper_char;
        }
    }
    std::cout << "Total Lower characters : " << lower_char << std::endl;
    std::cout << "Total Upper characters : " << upper_char << std::endl;
    

    //converting to upper and lower
    std::cout << "\n\nConverting all the lower to uppercase : \n";
    for (size_t i{ 0 }; i < std::size(message); ++i)
    {
        if (std::islower(message[i]))
        {
            //std::cout << "Founded Blank character at index : [" << i << "]" << std::endl;
            message[i] = std::toupper(message[i]);
        }
    }

    std::cout << "After all upper : " << std::endl;
    std::cout << message << std::endl;
    std::cout << std::endl << "------------------------------" << std::endl;
}
void f_C_StringManip()
{
    std::cout << std::endl << "------------------------------" << std::endl;
    std::cout << "f_C_StringManip(): " << std::endl;
    //length of the string
    //sizeof() : provides the size of the array, counts the null char; but with pointer, it just points to the first pointer
    //strlen(): provides the length without null character
    std::cout << "String length : \n";
    const char message1[]{ "This is message with array." };
    const char* message2 { "This is message with pointer." };
    std::cout << "message1 = " << message1 << "\nmesage2 = " << message2 << std::endl;
    std::cout << "strlen(message1) = " << strlen(message1) << " || sizeof(message1) = " << sizeof(message1) << std::endl;
    std::cout << "strlen(message2) = " << strlen(message2) << " || sizeof(message2) = " << sizeof(message2) << std::endl;

    //string comparison
    //strcmp(str1, str2): 0 - equal, negative - str1>str2, positive - str1<str2
    
    char str1[]{ "Alabama" };
    char str2[]{ "Blabama" };
    std::cout << "strcmp(" << str1 << "," << str2 << ") = " << strcmp(str1, str2) << std::endl;
    (strcmp(str1, str2)) == 0 ? (std::cout << str1 << " == " << str2 <<"\n") :( (strcmp(str1, str2)) < 0 ? (std::cout << str1 << " < " << str2 << "\n"):(std::cout << str1 << " > " << str2 << "\n"));

    //strncmp(str1,str2,n)
    //n here means to compare first n characters
    char str3[]{ "Alabama1" };
    char str4[]{ "Alabama" };
    size_t n{ 8 };
    std::cout << "strncmp(" << str3 << "," << str4 << ","<<n<<") = " << strncmp(str3, str4, n) << std::endl;
    
    //character find in a string
    //strchr(result,target): returns nullptr if the target is not found, 
    //                       otherwise returns a pointer, where there is the target has been started
    //                       and print the rest of the string where the target has been started
    //WRNING!!!!!!!!!! : must check nullptr before use it, oterwise may get crushed

    //char str[]{ "Try not. Do, or do not. There is no try." };
    const char* p_str{"Try not. Do, or do not. There is no try."};// here p_str is being assigned a const string, which is not stored anywhere, thats why,p_str should be constant, but if we saved it in any var, then no need of const pointer
    char target = 'T';
    const char* result = p_str; // assigning the p_str, because, we don't wanna manipulate the main string
    size_t itr{};

    //std::cout << "Searcing 'Q' in Md Fakrul Islam Taraque :  " << (strchr("Md Fakrul Islam Taraque", 'Q')) << std::endl;

    while ((result = std::strchr(result, target)) != nullptr)
    {
        std::cout << "Found '" << target
            << "' starting at '" << result << "'\n";
        ++result; //witout increamenting , we will repeatedly get the same string in a infinite loop
        ++itr;
    }
    std::cout << "Iterations : " << itr << std::endl;

    //strrchr() finds out the last pointer to the target
    char input[]{ "home/user/hello.cpp" };
    char* output = std::strrchr(input, '/');
    if (output != nullptr)
        std::cout << output+1 << std::endl;
    std::cout << std::endl << "------------------------------" << std::endl;
}
void f_C_str_Concate_Copy() 
{
    std::cout << std::endl << "------------------------------" << std::endl;
    std::cout << "f_C_str_Concate_Copy() : \n";
    std::cout << "Joining string: \n";
    char dest[50]{ "Hello" };
    char src[]{ "world!" };

    //strcat(dest,src): join the src after dest
    //gives error, as compiler treats it as usafe, reather use the same adding '_s'
    strcat_s(dest, src);
    strcat_s(dest, "Goodbye world!");
    std::cout << "strcat_s(dest, src) --> dest: " << dest << std::endl;

    //strncat(dest,src,n): join the first n characters of src after dest
    //gives error, as compiler treats it as usafe, reather use the same adding '_s'
    char dest2[50]{ "Hello" };
    char src2[]{ "world!" };
    strncat_s(dest2, src2,2);
    strncat_s(dest2, "Goodbye world!",3);
    std::cout << "strncat_s(dest2, \"Goodbye world!\",3) -->dest: " << dest2 << std::endl;

    //strcpy(dest,src): copy src to dest
    //gives error, as compiler treats it as usafe, reather use the same adding '_s'
    //const char* src3{ "C++ is a multipurpose programming language." };
    char src3[]{ "C++ is a multipurpose programming language." };
    //char* dest3{ new char[std::strlen(src3)+10]};
    char dest3[100]{};
    strcpy_s(dest3, src3);
    std::cout << "sizeof(dest3):" << sizeof(dest3) << std::endl;
    std::cout << "std::strlen(dest3): " << std::strlen(dest3) << std::endl;
    std::cout << "dest3: " << dest3 << std::endl;
    std::cout << std::endl << "------------------------------" << std::endl;

}
void f_string()
{
    std::cout << std::endl << "------------------------------" << std::endl;
    std::cout << "f_string(): " << std::endl;
    std::string long_str{ "Earth, where the sky is blue, but in Vormir, the sky is pink and nat and gamora died there for sole stone." };
    std::string msg1("Hello World", 5);
    std::string msg2(4, 'e');
    std::string msg3{ long_str,7,10 }; // initialized at index 6 and takes 10 characters

    std::cout << "long_str = " << long_str << std::endl;
    std::cout << "msg1(\"Hello World\",5) = "<< msg1 << std::endl;
    std::cout << "msg2((4, 'e')= " << msg2 << std::endl;
    std::cout << "msg3{ long_str,7,10 } =" << msg3 << std::endl;
    std::cout << std::endl << "------------------------------" << std::endl;
}
void f_function()
{
    std::cout << std::endl << "------------------------------" << std::endl;
    std::cout << "f_function(): " << std::endl;

    /*
    The One Definition Rule
    (no 2 variable, funciton, class, struct be in same file,
    but struct/class can be in differetn file under same folder) 
    */

    //function signature:(function name+params) makes a funciton distinct

    //implicit conversion
    //provides different types of parameters rather than defined
    //min(int var1, int var2) , but we are providing here double value
    
    //int min = std::min(34.5, 45.6);
    //std::cout << min << std::endl;

    //Function Declaration and Function Definitions 
    //( in funciton prototype, we don't need to declare the parameter vaiable name)

    /*
    * 3 steps to get the executale file : 
    1.Preprocessing: 1. Preprocessing: Translation Unit(replace the header by it's definition and make a cpp and header file for each header)
    2.Compilation: (Converts the TU components to binary, i.e Obj File) 
    3.Linker: ( Links all the object and make it binary executable file)
    */

    //from different header file
    //header files contains only the prototypes 
    //the definition should be in other files named same/different as the header files
    //here the linker finds the same function from all the cpp files with the name on different files, but the best practise is to make them organized
    //e.g: here the max function is declared in the comparison.cpp and the min in defined here
    int mn = get_min(2, 200);
    int mx = get_max(2, 200);
    std::cout << "From different header file:\n";
    std::cout << "max(2,200) = " << mx << " || min(2,200) = " << mn << std::endl;

    int increased_mult = get_increased_mult(20, 30);
    std::cout << "get_increased_mult(20,30) = " << increased_mult << std::endl;

    //pass by value: address of the variables of mother function and child function 
    //              are differet and the change of var in child function don't affect
    //              the mother functoin varibale
     
    // pass by pointer: passes the address of the argument and parameter is pointer
    //                  here the param in funciton makes a different copy of passed address, but makes the change to the main var
    //                  
    //pass by reference: passes the reference of the argument and parameter is a reference
    //                  here the param in funciton makes the same copy of passed address and makes the change to the main var     

    std::cout << "pass by value : \n";
    int age = 23;
    std::cout << "Before pass by value funciton -- age:" << age <<" || &age = "<<&age<< std::endl;
    say_age_PV(age);
    std::cout << "Before pass by value funciton -- age:" << age <<" || &age = " << &age << std::endl;

    std::cout << "\n\npass by pointer : \n";
    age = 23;
    std::cout << "After pass by pointer funciton -- age:" << age << " || &age = " << &age << std::endl;
    say_age_PP(&age);
    std::cout << "After pass by pointer funciton -- age:" << age << " || &age = " << &age << std::endl;


    std::cout << "\n\npass by reference : \n";
    age = 23;
    std::cout << "After pass by reference funciton -- age:" << age << " || &age = " << &age << std::endl;
    say_age_PR(age);
    std::cout << "After pass by reference funciton -- age:" << age << " || &age = " << &age << std::endl;

    std::cout << std::endl << "------------------------------" << std::endl;
}
int max(int a, int b)
{
    std::cout << "\nInt Overload Called.\n";
    return (a > b) ? a : b;
}
double max(double a, double b)
{
    std::cout << "\nDouble Overload Called.\n";
    return (a > b) ? a : b;
}
std::string max(std::string a, std::string b)
{
    std::cout << "\nString Overload Called.\n";
    return (a > b) ? a : b;
}
void f_function_overload()
{
    std::cout << std::endl << "------------------------------" << std::endl;
    std::cout << "f_function_overloading  : " << std::endl;
    /*2 funcitons are different if 
    *   1. different function name
    *   2. different param list
    *Here to practice Function overloading, we have differentiate the param lists
    */

    std::cout << "max(20,30):" << max(20, 30) << std::endl;
    std::cout << "max(20.345,30.345):" << max(20.345, 30.345) << std::endl;
    std::cout << "max(\"abba\",\"babba\"):" << max("abba", "babba") << std::endl;
    std::cout << std::endl << "------------------------------" << std::endl;
}
void f_lambdaFunction()
{
    std::cout << std::endl << "------------------------------" << std::endl;
    std::cout << "f_lambdaFunction(): " << std::endl;
    /*
    * Lambda Function: a mechanism to set up anonymous functions(without names).
    *                  Once the function is set up, we can give names and call them,
    *                  Or, we ca get them to do things directly. 
    * syntex:
    *        [capture_list](params)->return_type{
    *             //function body
    *            };
    * if we wanna give lambda funciton a name and call it by name, we have to make sure the return type is auto
    * e.g:
    *       auto func = [] (param_list) {
    *                           //function body
    *                         };
    * 
    * if we wanna call a lambda function a without name, we have to append '(arg_list);' after the function
    * 
    * [](double a, double b){
    *       //funciton body
    *     }(12.1, 5.7);
    * 
    */
    [](double a, double b) {
        std::cout << a << " + " << b << " = " << a + b << std::endl;
                 }(12.1, 5.7);

    auto result = [](double a, double b){
        return a + b;
    };
    ;
    std::cout << 12.1 << " + " << 5.7 << " = " << result(12.1, 5.7) << std::endl;
    std::cout << 12 << " + " << 5 << " = " << result(12, 5) << std::endl;

    /*
    * 'capture_list': fetches the outside of the scope variables
    * e.g:
    * 
    *  double a{10};
    *  double b{20};
    *  auto func = [a,b](){
    *   std::cout<<"a + b = "<< a+b<<std::endl;
    * };
    * func();
    * 
    * now here it acts as 2 ways:
    *   1. Capture by value: don't affect the outside var and makes different address
    *   2. Capture by Reference: affect the outside var and works with same address
    */
    double a{ 10 };
    double b{ 20 };
    std::cout << "with capture list(by Value) : where a = " << a << " && b = " << b << std::endl;
    auto funcV = [a, b]() {
        std::cout << "inside -- a + b = " << a + b << std::endl;
        };
    funcV();
    for (int i = 0; i < 5; i++)
    {
        std::cout << "\nOutside -- a+b = " << a + b << std::endl;
        funcV();
        ++a;
        ++b;
    }

    std::cout << "\n\nwith capture list(by reference) : where a = " << a << " && b = " << b << std::endl;
    auto funcR = [&a, &b]() {
        std::cout << "inside -- a + b = " << a + b << std::endl;
    };
    funcR();
    for (int i = 0; i < 5; i++)
    {
        std::cout << "\nOutside -- a+b = " << a + b << std::endl;
        funcR();
        ++a;
        ++b;
    }
    /*
    * To capture evrything outside the context without mentioning in the capture list
    * 1. '[=]': catch the outside vairable, don't affect the change outside.
    * 2. '[&]': catch the outside vairable, affect the change outside.
    *
    */
    int check_out_var = 43;
    std::cout << "using [=] : " << check_out_var << std::endl;
    auto fun_all1 = [=]() {
        std::cout << "Inner value : " << check_out_var << std::endl;
    };

    for (int i = 0; i < 5; i++)
    {
        std::cout << "\nOuter value : " << check_out_var << std::endl;
        fun_all1();
        check_out_var++;
    }

    std::cout << "\n\nusing [&] : " << check_out_var << std::endl;
    auto fun_all2 = [&]() {
        std::cout << "Inner value : " << check_out_var << std::endl;
    };

    for (int i = 0; i < 5; i++)
    {
        std::cout << "\nOuter value : " << check_out_var << std::endl;
        fun_all2();
        check_out_var++;
    }

    std::cout << std::endl << "------------------------------" << std::endl;
}
void f_template()
{
    std::cout << std::endl << "------------------------------" << std::endl;

    /*
    * -- Function templates are just blueprints, not real C++ code consumed by compiler, compiler generates the real C++ code looking at the arguments by your funciton call
    * -- The real C++ funciton generated by the compiler is called template imstance.
    * -- A template instance will be reused when a similar function call (arguments types) is issued. No duplicates are generated by the compiler.
    * 
    * actually the "data type" is different for funciton overloading, for that, just make the template generic for data type
    * 
    *
    * template parameter: the same type of parametes in function param_list with the generic datatypes
    * template argument : the arguments we are passing using template, 
                          generally, there data type is decided by the compiler 
                          and they are of same data type(implicit template arguments
    * 
    */

    //implicit template arguments: same type of arguments are being passed
    std::cout << "f_teplate(): " << std::endl;
    std::cout << "maximum(4,5) : " << maximum(4, 5) << std::endl;
    std::cout << "maximum(4.5,5.5) : " << maximum(4.5, 5.5) << std::endl;
    std::cout << "maximum(\"Taraque\", \"Tereque\") : " << maximum("Taraque", "Tereque") << std::endl;
    
    //explicit temlate arguments: if we set the data type of passed arguments explicitly
    //if the compiler can't make explicit type cast, then throws error.
    int a{ 10 }, b{ 20 };
    double c{ 34.7 }, d{ 23.4 };
    std::string e{ "hello" }, f{ "world" };
    
    auto result1 = maximum<double>(a, c);
    auto result2 = maximum<int>(b, d);
    std::cout << "maximum<double>(10, 34.7) = " << result1 << std::endl;
    std::cout << "maximum<int>(20, 23.4) = " << result2 << std::endl;
    //std::cout << maximum<double>(a, e) << std::endl;

    std::cout << "Outside template : &a" << &a << " || &b = " << &b << std::endl;

    /*
    * template argument can also pass reference(using const is a good practise
    */
    std::cout << "maximumRV(10, 20) = " << maximumRV(a,b) << std::endl;
    //std::cout << "maximumRV(10, 20) = " << maximum(a, b) << std::endl;
    /*
    * 
    * if the tempalte gets overloaded by the same name but different types of argument like 
    * one is by call by value and other is by call by reference
    * then the compiler throws error.
    */


    /*
    * using normal templte with pointer, just work with the pointer(address)
    * it also happens, when we pass the pointer of character.
    * then instead of address, we need the string whole.
    * 
    * In this case, we need to implement the specialization
    * -- duplicate copy of a template with the same name, just the '<>', don't carry any 'typename' and the type is to be explicitly predefine in the declatation
    */
    const char* g{ "hello" };
    const char* h{ "tarauqe" };
    std::cout << "maximum(char* hello, const* taraque) = " << maximum(g, h) << std::endl;

    std::cout << std::endl << "------------------------------" << std::endl;
}

//---------------standard built in concepts--------------------------
//concepts: syntex-1
template <std::integral T>
T add(T a,T b) 
{
    return a + b;
}
//concepts: syntex-2
/*template <typename T>
requires std::integral<T>
T add(T a,T b)
{
    return a + b;
}*/
//concepts: syntex-3
/*auto add(std::integral auto a, std::integral auto b)
{
    return a + b;
}*/
//concepts: syntex-4
/*template <typename T>
T add(T a, T b) requires std::integral<T>
{
    return a + b;
}*/

//---------------Custom concepts--------------------------

//building concept
template <typename T> concept singleConcept = std::is_integral_v<T>;
//implementing our concept
template <singleConcept T> 
T addSingle(T a,T b)
{
    return a + b;
}


template <typename T>
concept multupleConcept = requires(T a, T b) { a* b; };
template <typename T>
requires multupleConcept<T>
T addM(T a, T b)
{
    return a + b;
}

template <typename T> 
concept Incrementable = requires(T a)
{
    a += 1;
    ++a;
    a++;
};

template<typename T>
requires Incrementable<T>
T addIncre(T a, T b)
{
    return a + b;
}

void f_concepts()
{
    std::cout << std::endl << "------------------------------" << std::endl;
    std::cout << "f_concepts(): " << std::endl;
    /*
    * Concepts: a mechanism to place constraints on template type parameter
    */
    int a{ 10 }, b{ 20 };
    double c{ 10.10 }, d{ 20.20 };
    std::cout << "add(10,20) = " << add(a, b) << std::endl;
    std::cout << std::endl << "------------------------------" << std::endl;
}
template <typename dType> dType maximum(dType a, dType b)
{
    return (a >= b) ? a : b;
}
template <typename dType>const dType& maximumRV(const dType& a, const dType& b)
{
    std::cout << "From templte : &a" << &a << " || &b = " << &b << std::endl;
    return (a >= b) ? a : b;
}
template<> const char* maximum <const char*> (const char* a, const char* b)
{
    std::cout << "caling the specialization! : ";
    return (std::strcmp(a, b) > 0) ? a : b;
}
void say_age_PV(int age)
{
    ++age;
    std::cout << "From say_age_PV() -- age:" << age << " || &age = " << &age << std::endl;
}
void say_age_PP(int* age)
{
    ++(*age);
    std::cout << "From say_age_PP() -- age:" << *age << " || &age = " << &age << std::endl;
}
void say_age_PR(int& age)
{
    ++age;
    std::cout << "From say_age_PR() -- age:" << age << " || &age = " << &age << std::endl;
}
int get_min(int a, int b)
{
    int mn = (a <= b) ? a : b;
    return mn;
}



//----------------------------------- chapter-17(Classes)-----------------------
void f_dog_class_cons()
{
    C_dog dog1("Jimmy", "Speniol", 2);
}
void f_dog_classP()
{
    C_dog dog2("Jack", "Shepard", 3);
}
void f_test_desc()
{
    C_dog dog1("Jerry", "breed-1", 2);
    C_dog dog2("Jimmy", "breed-2", 3);
    C_dog dog3("Jacky", "breed-3", 4);
}
void f_Class()
{
    std::cout << std::endl << "------------------------------" << std::endl;
    /*
    * size of class/object = sum of al the member varable size
    * the size of pointer is fixed*/
    
    
    
    /* member variales can be:
    *   1.Raw stack varible
    *   2.pointer
    **But can't be reference(sad :| )
    *
    * class methods have access to the member variables(public,private everything)
    * 
    */

    /*
    * Class Across Multiple Files(constants and classes are defined in single files, with .h notation, it can be included in main.cpp file like other header files)
    */
    std::cout << "f_Class(): " << std::endl;
    C_cylinder cylinder1(2,3);
    std::cout <<"Radius: "<<cylinder1.get_base_rad()<<" || Height: "<<cylinder1.get_height() << " ==> volume : " << cylinder1.CF_volume() << std::endl;

    cylinder1.set_base_radius(10);
    cylinder1.set_height(10);

    std::cout << "Radius: " << cylinder1.get_base_rad() << " || Height: " << cylinder1.get_height() << " ==> volume : " << cylinder1.CF_volume() << std::endl;
    //std::cout << "base_radius : " << cylinder1.base_radius<<" || height : "<<cylinder1.height << std::endl;
    
    //---------------------------------------
    /* Arrow pointer call notation:
    * using pointer to initialize a class makes it dynamic
    * to access the member methods of a pointer object, we use '->'
    */
    C_cylinder* p_cylinder = new C_cylinder(11, 20);
    std::cout << "(*p_cylinder).CF_volume() = " << (*p_cylinder).CF_volume() << std::endl;
    std::cout << "p_cylinder->CF_volume() = " << p_cylinder->CF_volume() << std::endl << std::endl;
    delete p_cylinder;

    /*
    * destructor is called at the end of completing all the instructors of a scope.
    */

    //as the constructor is called in the scope of function, destructor is called
    //at the bottom of that function and then the rest of the lines are executed.
    //if the class was constructed here, then the destructor will be called after '----'(dashed line) being printed
    f_dog_class_cons();


    //WARNING: don't just pass an object to a function as parameter,
    //cause after initializing an object in the present scope, passing it to function
    // create a copy in the function scope,
    //which leads to call the destructor twice(one in main scope, another in function scope)
    //and calling delete twice may crush your program, even the system may face problem.
    std::cout << "After function scope normal.\n";

    /*
    * When an object of pointer is instantiated in the scope of a function outside of the mother function,
    * we need to call the "delete class" to get the destructor explicitly (though in Visual studio 2019, that doesn't need) 
    */
    f_dog_classP();
    std::cout << "After function scope pointer.\n";

    /*
    The constructor declared first, that destructor declared in the last
    */
    f_test_desc();

    /*
    * This pointer used to :
    *   1. print out current address of the object
    *   2. resolve conflicts with the same name of function parameter and class member vaariaables
    *   3. chaained calls using pointers
    */
    C_dog thisDog("name-before", "breed-before", 0);
    thisDog.print_info();

    //manully this seting for all the member functions is cumbersome, tht's why, we need to set the return type as address of the object nd do it in  same line.
    thisDog.set_name("name-after");
    thisDog.set_breed("breed-fter");
    thisDog.set_age(2);
    thisDog.print_info();

    //chined calls using pointer
    //process: 1. set the return type of the setters as class pointer(i.e: class_name*)
    //         2. write the code by class_name.setter1(arg1)->setter2(arg2)->setter3(arg3)...
    //         3. the arguments are in value, not by pointer/address
    //         4. set the value of member variabes like: *(this->member) = arg
    //         5. "return this; form every setter

    thisDog.set_name("name-line")->set_breed("breed-line")->set_age(0);
    thisDog.print_info();

    //chined calls using reference
    //process:  1. set the return type of setters as reference(i.e: class_name&)
    //          2. write the code by class_name.setter1(arg1).setter2(arg2).setter3(arg3)....
    //          3. the arguments in value, not by pointer/address
    //          4. set the value of member variabes like: this->member = arg
    //          5. "return *this;" from every setter
    thisDog.set_name2("ref-name").set_breed2("ref-breed").set_age2(2);
    thisDog.print_info();

    std::cout << std::endl << "----------------struct--------------" << std::endl;
    /*
    * difference between struct and class:
    *  struct member are public by default 
    * class member are private by default
    */
    std::cout << std::endl << "------------------------------" << std::endl;
}

//---------------------------------- chapter-18(inheritance)--------------------
void f_inhertance()
{
    std::cout << std::endl << "------------------------------" << std::endl;
    std::cout << "f_inhertance(): " << std::endl;
    /*
    * inheritance :
    * 1. Public: derive class and friend class of the derived class, 
                 can access the public and protected members from its scope, but not outside of the scope, 
                 can't directly access the private members directly, needs public setter/getters
          means: all the private, protected, private, remains the same.
                 

    * 2. Protected: all the public,protected members and functions become protected, but private remains the same
    * 3. Private:  all the public,protected members and functions become private, private remains the same
    */
    C_Person person1("Fakrul-1", "Tareq-1");
    person1.print_person_info();
    person1.set_first_name("Fakrul-2").set_last_name("Tareq-2");
    person1.print_person_info();

    //C_Player player1("Cricket"); //when the member vairbales are private ad we can't access the private members: first_name, last_name
    C_Player player1("Cricet", "Amartya", "Dip");
    player1.print_player_info();
    player1.set_first_name("Dip-1");
    player1.set_last_name("Das-1");
    player1.print_player_info();

    player1.set_first_name("Dip-2").set_last_name("Daas-2");
    player1.print_player_info();


    Person person2("Fakrul Islam", 23, "Kajla, Rajshahi");
    person2.print_person_info2();

    Test_Protected_Person pro1;
    pro1.print_Test_Protected();

    Test_Private_Person test_Obj_Private;
    test_Obj_Private.print_Test_private();

    /*
    * To keep the mother class members indifferent from "private" in derive class(in private inheritance),
    * code:
    *       inherit_type:
    *           using member function; //not the brace
    * But in this way, we can't make the already private member to other(protected/public)
    * 
    * For funciton overloading, just add the function under the access modifier you wanna make it using "using"
    */
    
    std::cout << std::endl << "------------------------------" << std::endl;
}

int main()
{
    //chapter-2
    f_printHello();
    f_comments();
    //f_errors();
    f_statements();
    int sumOfTwo = f_getIntSumFromIntParams(10, 23);
    std::cout << "--f_getIntSumFromIntParams(10,23) : " << sumOfTwo << std::endl;
    std::cout << std::endl << "------------------------------" << std::endl;
    //f_iostreamFunctions();

    //chapter-3
    f_differentNumbers();
    f_assignments();
    f_varModifier();
    f_booleans();
    f_characters();
    f_autoVar();

    //chapter-4
    f_pre_postfix_change();
    f_numericLimits();
    f_mathOps();
    f_weiredVar();
    //f_output_formatting();

    //chapter-5
    f_ternary();

    //chapter7
    f_charArray();

    //chapter8
    f_pointer();

    //chapter9
    f_reference();

    //chapter-10
    f_character_manip();
    f_C_StringManip();
    f_C_str_Concate_Copy();
    f_string();

    //chapter-11
    f_function();

    /*
    * Chapter-12: Getting Things out of functions
    --Introduction to getting things out of functions
    --Input and output parameters (1.using reference, 2. using pointer ; without return, just passing the address)
    --Returning from functions by value
    */

    //chapter-13
    f_function_overload();

    //chapter-14
    f_lambdaFunction();

    //chapter-15
    f_template();

    //chapter-16
    f_concepts();

    //chapter-17
    f_Class();

    //chapter-18
    f_inhertance();

    return 0; //this returning zero send the OS a message that, no error occured and main function worked successfully.
}
