//
//  PositiveHandler.h
//  CS372-ChainOfResponsibility
//
//  Created by Will Fisher on 5/4/15.
//  Copyright (c) 2015 Will Fisher. All rights reserved.
//

#ifndef __CS372_ChainOfResponsibility__PositiveHandler__
#define __CS372_ChainOfResponsibility__PositiveHandler__

#include "BaseChain.h"

class PositiveHandler : public BaseChain
{
public:
    PositiveHandler() = default;
    virtual std::string handle(int) override;
private:
};

#endif /* defined(__CS372_ChainOfResponsibility__PositiveHandler__) */
