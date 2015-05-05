//
//  PositiveHandler.cpp
//  CS372-ChainOfResponsibility
//
//  Created by Will Fisher on 5/4/15.
//  Copyright (c) 2015 Will Fisher. All rights reserved.
//

#include "PositiveHandler.h"
#include <iostream>

std::string PositiveHandler::handle(int number)
{
    if(number > 0)
    {
        return "positive";
    }
    else
    {
        if (getNext())
            return getNext()->handle(number);
    }
    
    return BaseChain::handle(number);
}