//
//  SuffixHandler.cpp
//  CS372-ChainOfResponsibility
//
//  Created by Will Fisher on 5/4/15.
//  Copyright (c) 2015 Will Fisher. All rights reserved.
//

#include "SuffixHandler.h"
#include <sstream>
#include <stdlib.h>

SuffixHandler::SuffixHandler(int number, std::string suffix): _number(number), _suffix(suffix)
{
    
}

std::string SuffixHandler::handle(int number)
{
    std::stringstream buffer;
    
    buffer << number;
    if (abs(number) == _number || (abs(number) % 10) == _number)
    {
        buffer << _suffix;
        return buffer.str();
    }
    else
        if (getNext())
            return getNext()->handle(number);
    
    return BaseChain::handle(number);
}