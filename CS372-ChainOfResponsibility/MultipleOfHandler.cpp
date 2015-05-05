//
//  MultipleOfHandler.cpp
//  CS372-ChainOfResponsibility
//
//  Created by Will Fisher on 5/4/15.
//  Copyright (c) 2015 Will Fisher. All rights reserved.
//

#include "MultipleOfHandler.h"
#include <sstream>

MultipleOfHandler::MultipleOfHandler(int multiple): _multiple(multiple)
{
    
}

std::string MultipleOfHandler::handle(int number)
{
    std::stringstream buffer;
    
    if((number % _multiple) == 0)
    {
        buffer << "a multiple of " << _multiple;
        return buffer.str();
    }
    else if (getNext())
        return getNext()->handle(number);
    
    return BaseChain::handle(number);
}