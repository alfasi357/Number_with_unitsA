#include "NumberWithUnits.hpp"
#include <fstream>
#include <iostream>
#include <sstream>
#include <stdexcept>



using namespace std;

namespace ariel{


     void NumberWithUnits::read_units(ifstream& infile){}
        NumberWithUnits NumberWithUnits::operator+(const NumberWithUnits& s) const{
            return NumberWithUnits{1, "hello"};
        }
        NumberWithUnits& NumberWithUnits::operator+=(const NumberWithUnits& s){
            return *this;
        }
        NumberWithUnits NumberWithUnits::operator+() const{
            return NumberWithUnits{1, "hello"};
                    }
        NumberWithUnits NumberWithUnits::operator-(const NumberWithUnits& s){
            return NumberWithUnits{1, "hello"};
                    }
        NumberWithUnits& NumberWithUnits::operator-=(const NumberWithUnits& s){
            return *this;
        }
        NumberWithUnits NumberWithUnits::operator-() const{
            return NumberWithUnits{1, "hello"};
                    }

        bool operator>(const NumberWithUnits& s1, const NumberWithUnits& s2){
            return true;
        }
        bool operator>=(const NumberWithUnits& s1, const NumberWithUnits& s2){
            return true;
        }
        bool operator<(const NumberWithUnits& s1, const NumberWithUnits& s2){
            return true;
        }
        bool operator<=(const NumberWithUnits& s1, const NumberWithUnits& s2){
            return true;
        }
        bool operator==(const NumberWithUnits& s1, const NumberWithUnits& s2){
            return true;
        }
        bool operator!=(const NumberWithUnits& s1, const NumberWithUnits& s2){
            return true;
        }
        
         NumberWithUnits& NumberWithUnits::operator++(){
            return *this;
            }
         NumberWithUnits NumberWithUnits::operator++(int dummy_flag_for_postfix_increment){
            return NumberWithUnits{1, "hello"};
                        }
        NumberWithUnits& NumberWithUnits::operator--(){
            return *this;
        }
          NumberWithUnits NumberWithUnits::operator--(int dummy_flag_for_postfix_increment){
            return NumberWithUnits{1, "hello"};
                        }

           NumberWithUnits operator* (double c1,const NumberWithUnits& c2){
                       return NumberWithUnits{1, "hello"};
        }
        
          std::ostream& operator<< (std::ostream& output, const NumberWithUnits& c){
            return output;
        }
          std::istream& operator>> (std::istream& input , NumberWithUnits& c){
            return input;
        }
}