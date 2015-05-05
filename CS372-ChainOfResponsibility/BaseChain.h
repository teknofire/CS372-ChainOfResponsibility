//
//  BaseChain.h
//  CS372-ChainOfResponsibility
//
//  Created by Will Fisher on 5/4/15.
//  Copyright (c) 2015 Will Fisher. All rights reserved.
//

#ifndef __CS372_ChainOfResponsibility__BaseChain__
#define __CS372_ChainOfResponsibility__BaseChain__

#include <memory>
#include <string>

class BaseChain
{
public:
    BaseChain() = default;
    virtual ~BaseChain() = default;
    virtual void add(std::shared_ptr<BaseChain>);
    virtual std::string handle(int);
    virtual std::shared_ptr<BaseChain> getNext();
private:
    std::shared_ptr<BaseChain> _next;
};

#endif /* defined(__CS372_ChainOfResponsibility__BaseChain__) */
