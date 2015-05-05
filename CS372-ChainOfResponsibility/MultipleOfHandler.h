//
//  MultipleOfHandler.h
//  CS372-ChainOfResponsibility
//
//  Created by Will Fisher on 5/4/15.
//  Copyright (c) 2015 Will Fisher. All rights reserved.
//

#ifndef __CS372_ChainOfResponsibility__MultipleOfHandler__
#define __CS372_ChainOfResponsibility__MultipleOfHandler__

#include "BaseChain.h"

class MultipleOfHandler : public BaseChain
{
public:
    MultipleOfHandler(int);
    virtual std::string handle(int) override;
private:
    int _multiple;
};

#endif /* defined(__CS372_ChainOfResponsibility__MultipleOfHandler__) */
