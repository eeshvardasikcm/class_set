//
// Created by Erik Douglas Ward (Eeshvar Das, EeshvarDasIKCM) on 2/2/2024.
//
// Class (Set) © 2024 by Erik Douglas Ward (Eeshvar Das,
// EeshvarDasIKCM) is licensed under Attribution-ShareAlike 4.0 International.
// To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
#include <set>
#include <string>
#include <stdexcept>
#include <limits>
#ifndef EESHVARDASIKCM_SET_H
#define EESHVARDASIKCM_SET_H
namespace EeshvarDasIKCM::classSet::set {
    struct element {
    private:
        using _key = long long int;
        static _key nextKeyToUse;
        static bool isFull;
        _key key=nextKeyToUse;
        std::string _name{"zzz"};
        element() {
            if (isFull) {
                throw std::logic_error("IMPLEMENT_ELSEWHERE");
            } else {
                key = nextKeyToUse;
            }
            if (nextKeyToUse < std::numeric_limits<long long int>::max()) {
                nextKeyToUse++;
            } else if (nextKeyToUse>=std::numeric_limits<long long int>::max()) {
                isFull=true;
                nextKeyToUse=std::numeric_limits<long long int>::max();
            } else throw std::logic_error("IMPLEMENT_ELSEWHERE");
        }
    public:
        void setName(std::string name) { _name = name; }
        std::string getName() {return _name; }
    };long long int element::nextKeyToUse=1;bool element::isFull=false;
    struct roster {
    private:
        std::set<long long int> elements;
        set::element _element;
    public:
        void setElementName(const std::string& name) { _element.setName(name);};
    };
}
#endif //EESHVARDASIKCM_SET_H
