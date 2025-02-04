#include<iostream>
#include<typeinfo>
#include<iomanip>
#include<string>
#include<cstdlib>

using namespace std;
/*
    Covers:
    - Escape sequences
    - Multiple inputs
    - Input with cin
    - Input with getline()
    - Assigment
    - Characters
    - Numbers
    - Coercing rules
    - Casting
    - Overflow example
    - Constant
    - Random number
*/
void escapeSequencesExample() {
    cout << "Escape Sequence Example\n";

    string hello = "Hello";
    string world = "World";
    // Text gets printed together
    cout << "No sequences used"<< endl;
    cout << hello;
    cout << world;
    // A newline separates the words
    cout << endl << "\\n used" << endl;
    cout << hello << endl;
    cout << world << "\n";
    // Tab separates the words
    cout << endl << "\\t used" << endl;
    cout << hello << "\t";
    cout << world << "\n";
    // Deletes the last character from hello before printing world
    cout << endl << "\\b used" << endl;
    cout << hello << "\b";
    cout << world << "\n";
    // Moves cursor back to beginning before printing world
    cout << endl << "\\r used" << endl;
    cout << hello << "\r";
    cout << world << "\n";
    // Sets an alarm
    cout << endl << "\\a used" << endl;
    cout << hello << "\a";
    cout << world << "\n";
    // Can print ' and " 
    cout << endl << "with quotes used" << endl;
    cout << "\'" << hello << "\' \"";
    cout << world << "\" \n\n";
}

void multipleInputsExample() {
    cout << "Multiple Input Example\n";

    // Three variables to be assigned through the console
    int day, month, year;
    cout << "Please enter day month year:\n";
    cout << "Separate each value with a whitespace or [Enter]\n";
    // Expectes three integers separated by whitespaces or [Enter]
    // What happens if it wasn't integers?
    cin >> day >> month >> year;
    cout << "Date given: " << day << "/" << month << "/" << year << endl;
}

void readingInputExample1(){
    cout << "Reading input examples using cin\n";

    string just_a_str = "";
    cout << "Enter two or more words to see what happens\n";
    cin >> just_a_str;
    // Output should only be first word
    cout << "Input received was: " << just_a_str << endl;
    cout << "It only printed the first value\n";
    cout << "Let's call it again\n";
    cin >> just_a_str;
    // We didn't even get a chance to enter input
    cout << "Input received was: " << just_a_str << endl;
    cout << "Oops it got the values we were missing\n";
}

void readingInputExample2() {
    cout << "Reading input examples using getline()\n";
    string just_a_str = "";
    cout << "Enter two words to see what happens\n";
    getline(cin, just_a_str);
    cout << "Input received was: " << just_a_str << endl;
    cout << "It printed everything\n";

    // Ignoring the first 5 characters
    cout << "Write a 6+ letter sentence\n";
    getline(cin.ignore(5), just_a_str);
    cout << "Input received was: " << just_a_str << endl;
    // Ignoring the first 5 characters or stop when we find 'g'
    cout << "Write a that has g in its first 4 letters\n";
    getline(cin.ignore(5, 'g'), just_a_str);
    cout << "Input received was: " << just_a_str << endl << endl;

}
void assignmentsExample() {
    cout << "Assigment Example" << endl;
    int a, b, c, d, e;
    // Must be declared first for this to work
    a = b = c = d = e = 10;
    // Otherwise we assign like this
    int val1 = 5, val2 = 2;

    // Apply all assignment shorthands
    a+=val1;
    b-=val1;
    c*=val1;
    d/=val1;
    e%=val1;
    // Apply shorthand on an expression
    val2 *= val1 + 12;// val2 = val2 * (val1+12)

    cout << "a = b = c = d = e = 10;" << endl;
    cout << "val1 = 5;" << endl;
    cout << "a+=val1 -> " << a << endl; 
    cout << "b-=val1 -> " << b << endl; 
    cout << "c*=val1 -> " << c << endl; 
    cout << "d/=val1 -> " << d << endl; 
    cout << "e%=val1 -> " << e << endl;

    cout<<"\nval2=2\n";
    // We can assign expressions as well
    cout << "val2 *= val1 + 12 -> " << val2 << endl << endl;

    // Short hand notation for incrementing by one
    // This first passes its value to cout ad then increments it
    cout << val2++ << endl;
    // This first increments the value and then passes it to cout
    cout << ++val2 << endl;
}
void characterExamples() {
    cout << "Character Example\n";

    // Characters only hold a single value
    char c = 'C';
    /* 
    Characters are mapped to integer values
    given by ASCII enconding format
    */
   // This represnets C
    char cnum = 67;

    // Converting a letter to its position in the alphabet
    int alphaphetical_position = c - 'A' + 1;

    string im_here = "I'm a string!";

    cout << "This is a character: " << c << endl;
    cout << "Character created using it's ASCII code: " << cnum << endl;
    cout << "Position of this caracter in the alphabet: " << alphaphetical_position <<endl;

    cout << im_here << endl << endl;

}

void numberExample() {
    cout << "Number Example\n";

    // Floating point values
    float float_value = 456.9743f;
    double double_value = 1.3456E3;
    float float_value2 = 2.278098E-4;

    // Hexadecimal values
    int hex = 0xF;
    int hex2 = 0x9;
    // Octal values
    int oct = 011;

    cout << "Float values\n";
    cout << float_value << endl;
    cout << float_value2 << endl;
    cout << "Double values\n";
    cout << double_value << endl;
    cout << "Hexadecimal values\n";
    cout << hex << endl;
    cout << hex2 << endl;
    cout << hex + hex2 << endl;
    cout << "Octal values\n";
    cout << oct << endl << endl;

    // Passing a float to an int
    int just_an_int = float_value;
    // Passing an int to a float
    float just_a_float = just_an_int;

    cout << "Just an integer: " << just_an_int << endl;
    cout << "Just an float: " << just_a_float << endl;

    double largest_num = 9E20;
    long long int largest_int = largest_num;
    cout << "The largest double number: " << largest_num << endl;
    cout << "The largest number as an integer: " << largest_int << endl;

    // You can store a conditional in a bool
    bool isLarger = largest_num > double_value;
    cout << boolalpha;
    cout << "Is this larger? 9E20 > 1.3456E3?" << isLarger << endl;

    cout << "Size of a long long int: " << sizeof(long long) << endl;
    cout << "Size of largest number: " << sizeof(largest_int) << endl;

    cout << "Integer division: 1/2 = " << 1/2 << endl;
    cout << "Float division: 1.0/2 = " << 1.0/2 << endl << endl;
}
void coercingRulesExample() {
    cout << "Coercing Rules Example" << endl;
    int int_v = 100;
    short short_v = 19;
    float float_v = 100.5;
    char char_v = 'd';

    // Print original values
    cout << "int int_v = " << int_v << "\nshort short_v = " << short_v << endl;
    cout << "float float_v = " << float_v << "\nchar char_v = " << char_v << endl;
    
    // Promotion of int and short to double
    cout << "What type will int_v * 0.5 be? " << typeid(int_v*0.5).name() << endl;
    cout << "What type will short_v + 0.5 be? " << typeid(short_v + 0.5).name() << endl;
    
    // Promotion of short to int
    cout << "What type will int_v + short_v be? " << typeid(short_v + int_v).name() << endl;
    
    // Promotion of int to float
    cout << "What type will float_v + value1 be? " << typeid(float_v + int_v).name() << endl;
    
    // Promotion of char to int (Lowest posible rank is int)
    cout << "What type will char_v + short_v be? " << typeid(short_v + char_v).name() << endl<< endl;

    int int_from_float = float_v;

    // Demotion of float to int 
    cout << "float_v is " << float_v << endl;
    cout << "After calling int int_from_float = float_v;" << endl;
    cout << "int_from_float is " << int_from_float << endl << endl;

}

void castingExample() {
    cout << "Casting Example" << endl;
    float float_val = 123.67;
    // Standard way
    int value1 = static_cast<int>(float_val);
    // C style
    int short_v = (int) float_val;

    cout << "OG value: " << float_val << endl;
    cout << "Converted the standard way: " << value1 << endl;
    cout << "Converted the C style way: " << short_v << endl;
    // Show that the original value doesn't get modified
    cout << "OG value again: " << float_val << endl << endl;
}

void overflowExample() {
    cout << "Overflow Example" << endl;
    // We assign it at its maximum value
    short regularValue = 32767;
    cout << "short regularValue = 32767;" << endl;
    // We add +1
    regularValue++;
    cout << "after regularValue + 1" << endl;
    // Now it suddenly became negative, why?
    cout << "regularValue = " << regularValue << endl;

    // Let's do this again but with the bits
    cout << "Let's do this again but let's look at the bits\n";
    regularValue = 32767;
    cout << "regularValue = 32767 (" << bitset<16>(regularValue) <<")\n";
    regularValue++;
    cout << "after regularValue + 1" << endl;
    // Now it suddenly became negative, why?
    cout << "regularValue = -32768 (" << bitset<16>(regularValue) <<")\n\n";
}

void constantExample() {
    cout << "Constant Example" << endl;
    // Usually named in all caps 
    const float PI = 3.14;
    float radius = 12;
    cout << "PI= "<< PI << endl;
    cout << "radius = " << radius << endl;
    cout << "Area of circle: " << PI*pow(radius, 2) << endl << endl;
    // PI++; // Uncomment to receive error
}

void stringFunctionExamples() {
    cout << "String function example\n";

    // Getting the length
    string word = "I'm a sentence!";
    string hello = "Hello";
    string name1 = "John";
    string name2 = "Ben";

    cout << "Using the length function\n";
    cout << "\"" << word << "\"" << " has " << word.length() << " letters\n";
    // Accessing to each character
    cout << "Printing every character at an even position\n";
    for (int i = 0; i < word.length(); i+=2)
    {
        cout << word[i] << " at position " << i << endl;
    }
    cout << "Printing every character at an odd position\n";
    for (int i = 1; i < word.length(); i+=2)
    {
        cout << word.at(i) << " at position " << i << endl;
    }

    // Using concatenation
    string greetings = hello + " " + name1 + " and " + name2;
    cout << "Greeting after concatenation: " << greetings << endl;

    int numbers[] = {1, 2, 3, 4, 5, 6};
    string array_out = "[";
    for(int i = 0; i < 6; i++) {
        // To string is needed to convert number to a string
        array_out += to_string(numbers[i]) + ", ";
    }
    array_out = array_out.substr(0, array_out.length() - 2 ) + "]";
    // array_out += "]";
    cout << "Content of the array: " << array_out << endl;

    string scream;
    // Will repeat A 65 times
    cout << "Now I scream thanks to assign\n";
    scream.assign(65, 'A');
    cout << scream + "ahh\n\n";

}

void formattingExample() {
    // Must include iomanip header for this to work
    cout << "Formatting Example" << endl;

    string long_str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string short_str = "Hello";
    string lays_bag = "|      |";
    float simple_float = 13.1f;
    double complex_double = 123.56789003;
    double long_double = 0.1678973e-4;

    cout << "After setting width to 10\n";
    // Will expand beyond 10
    cout << setw(10) << long_str << endl; 
    // Will align to the right since its length < 10
    cout << setw(10) << short_str << endl; 
    // Whitespace occupies space in the string
    cout << setw(10) << lays_bag << endl;
    
    cout << "Width is 10 and align to the left" << endl;
    // Align text to the left
    cout << setw(10) << left << short_str << endl;

    // Working with the presicion of floating point values
    cout << "Values when assigned" << endl;
    cout << "13.1f\t123.5678900\t0.1678973e-4"<< endl;
    // How its typically printed
    cout << "Before formatting floating point" << endl;
    cout << simple_float << "\t" << complex_double << "\t" << long_double << endl;
    // Using the fixed setting
    cout << "After using fixed\n";
    cout << fixed << simple_float << "\t" << complex_double << "\t" << long_double << endl;
    // Specifying the presicion
    cout << "After setting precision to 7\n";
    cout << setprecision(9) << simple_float << "\t" << complex_double << "\t" << long_double << endl << endl;
}



void randomExample() {
    // We need the cstdlib header for this
    cout << "Random value example\n";
    /* 
    This assigns the seed, this determines which sequence of random
    numbers are given 
    */
    srand(15);
    // Printing 5 random values
    cout << "Printing 5 random values\n";
    for(int i = 0; i < 5; i++)
        cout << rand()<<endl;
    // Print 5 random values between 1 and 10
    int max = 10;
    cout << "Print 5 random values between 1 and " << max << endl;
    for(int i = 0; i < 5; i++)
        // Modulus forces the number to be between 0 and max - 1
        // Plus 1 to shift it to 1 and max
        cout << (rand() % max) + 1 <<endl;
}