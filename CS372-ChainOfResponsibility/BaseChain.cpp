//
//  BaseChain.cpp
//  CS372-ChainOfResponsibility
//
//  Created by Will Fisher on 5/4/15.
//  Copyright (c) 2015 Will Fisher. All rights reserved.
//

#include "BaseChain.h"

void BaseChain::add(std::shared_ptr<BaseChain> next)
{
    if (_next)
        _next->add(next);
    else
        _next = next;
}

std::shared_ptr<BaseChain> BaseChain::getNext()
{
    return _next;
}

std::string BaseChain::handle(int number)
{
    return "unknown";
}