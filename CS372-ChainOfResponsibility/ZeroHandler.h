//
//  ZeroHandler.h
//  CS372-ChainOfResponsibility
//
//  Created by Will Fisher on 5/4/15.
//  Copyright (c) 2015 Will Fisher. All rights reserved.
//

#ifndef __CS372_ChainOfResponsibility__ZeroHandler__
#define __CS372_ChainOfResponsibility__ZeroHandler__

#include "BaseChain.h"

class ZeroHandler : public BaseChain
{
public:
    ZeroHandler() = default;
    virtual std::string handle(int) override;
private:
};


#endif /* defined(__CS372_ChainOfResponsibility__ZeroHandler__) */
