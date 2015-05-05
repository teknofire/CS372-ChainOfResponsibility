//
//  NegativeHandler.h
//  CS372-ChainOfResponsibility
//
//  Created by Will Fisher on 5/4/15.
//  Copyright (c) 2015 Will Fisher. All rights reserved.
//

#ifndef __CS372_ChainOfResponsibility__NegativeHandler__
#define __CS372_ChainOfResponsibility__NegativeHandler__

#include "BaseChain.h"

class NegativeHandler : public BaseChain
{
public:
    NegativeHandler() = default;
    virtual std::string handle(int) override;
private:
};

#endif /* defined(__CS372_ChainOfResponsibility__NegativeHandler__) */
