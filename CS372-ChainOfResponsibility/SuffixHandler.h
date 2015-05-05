//
//  SuffixHandler.h
//  CS372-ChainOfResponsibility
//
//  Created by Will Fisher on 5/4/15.
//  Copyright (c) 2015 Will Fisher. All rights reserved.
//

#ifndef __CS372_ChainOfResponsibility__SuffixHandler__
#define __CS372_ChainOfResponsibility__SuffixHandler__

#include "BaseChain.h"
#include <string>

class SuffixHandler : public BaseChain
{
public:
    SuffixHandler(int, std::string);
    virtual std::string handle(int) override;
private:
    int _number;
    std::string _suffix;
};

#endif /* defined(__CS372_ChainOfResponsibility__SuffixHandler__) */
