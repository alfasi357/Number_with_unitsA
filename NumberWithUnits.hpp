#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>



using namespace std;

namespace ariel{
    class NumberWithUnits{

        public:
        NumberWithUnits(double a, string f){
           a=1;
           f="hello"; 
        }
        static void read_units(ifstream& infile);
        NumberWithUnits operator+(const NumberWithUnits& s) const;
        NumberWithUnits& operator+=(const NumberWithUnits& s);
        NumberWithUnits operator+() const;
        NumberWithUnits operator-(const NumberWithUnits& s);
        NumberWithUnits& operator-=(const NumberWithUnits& s);
        NumberWithUnits operator-() const;

        friend bool operator>(const NumberWithUnits& s1, const NumberWithUnits& s2);
        friend bool operator>=(const NumberWithUnits& s1, const NumberWithUnits& s2);
        friend bool operator<(const NumberWithUnits& s1, const NumberWithUnits& s2);
        friend bool operator<=(const NumberWithUnits& s1, const NumberWithUnits& s2);
        friend bool operator==(const NumberWithUnits& s1, const NumberWithUnits& s2);
        friend bool operator!=(const NumberWithUnits& s1, const NumberWithUnits& s2);
        
         NumberWithUnits& operator++();
         NumberWithUnits operator++(int dummy_flag_for_postfix_increment);
        NumberWithUnits& operator--();
        NumberWithUnits operator--(int dummy_flag_for_postfix_increment);

         friend  NumberWithUnits operator* (double c1,const NumberWithUnits& c2);
        
         friend std::ostream& operator<< (std::ostream& output, const NumberWithUnits& c);
         friend std::istream& operator>> (std::istream& input , NumberWithUnits& c);
        




    };
}