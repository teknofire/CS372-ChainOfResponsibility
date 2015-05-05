//
//  NegativeHandler.cpp
//  CS372-ChainOfResponsibility
//
//  Created by Will Fisher on 5/4/15.
//  Copyright (c) 2015 Will Fisher. All rights reserved.
//

#include "NegativeHandler.h"
#include <iostream>

std::string NegativeHandler::handle(int number)
{
    if(number < 0)
    {
        return "negative";
    }
    else
    {
        if (getNext())
            return getNext()->handle(number);
    }
    
    return BaseChain::handle(number);
}