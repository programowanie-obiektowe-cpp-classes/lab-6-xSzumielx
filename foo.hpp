#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>
#include <iostream>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > retval;
    retval.reserve(people.size());

    auto                f = [&](Human& person) {
        person.birthday();
        if (person.isMonster() == true) {
            retval.push_back('n');
        }
        else {
            retval.push_back('y');
        }
    };
    std::for_each(people.begin(), people.end(), f);
    std::reverse(retval.begin(), retval.end());

    return retval;
}
