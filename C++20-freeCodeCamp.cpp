#include <iostream>
#include<string>
#include<iomanip>
#include<limits>
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
    char message[] {"Hello there, I am working with character manipulation."};
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

    return 0; //this returning zero send the OS a message that, no error occured and main function worked successfully.
}
