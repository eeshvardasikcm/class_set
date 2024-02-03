//
// Created by Erik Douglas Ward (Eeshvar Das, EeshvarDasIKCM) on 2/2/2024.
//
// Class (Set) © 2024 by Erik Douglas Ward (Eeshvar Das,
// EeshvarDasIKCM) is licensed under Attribution-ShareAlike 4.0 International.
// To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
#include <set>
#include <string>
#ifndef EESHVARDASIKCM_SET_H
#define EESHVARDASIKCM_SET_H
namespace EeshvarDasIKCM::classMath::set {
    struct element {
    private:
        using _key = long long int;
        static _key nextKeyToUse;
        static bool isFull;
        _key key=nextKeyToUse;
        string _name{"zzz"};
        element() {
            if (isFull) {
                throw logic_error("IMPLEMENT_ELSEWHERE");
            } else {
                key = nextKeyToUse;
            }
            if (nextKeyToUse < LONG_LONG_INT_MAX) {
                nextKeyToUse++;
            } else if (nextKeyToUse>=LONG_LONG_INT_MAX) {
                isFull=true;
                nextKeyToUse=LONG_LONG_INT_MAX;
            } else throw logic_error("IMPLEMENT_ELSEWHERE");
        }
    public:
        void setName(string name) { _name = name; }
        string getName() {return _name; }
    };long long int element::nextKeyToUse=1;bool element::isFull=false;
    struct roster {
    private:
        std::set<long long int> elements;
        set::element _element;
    public:
        void setElementName(const string& name) { _element.setName(name);};
    };
}
#endif //EESHVARDASIKCM_SET_H
