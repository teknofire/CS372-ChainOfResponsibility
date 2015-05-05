//
//  main.cpp
//  CS372-ChainOfResponsibility
//
//  Created by Will Fisher on 5/4/15.
//  Copyright (c) 2015 Will Fisher. All rights reserved.
//

#include <iostream>
#include <memory>

#include "BaseChain.h"
#include "NegativeHandler.h"
#include "PositiveHandler.h"
#include "ZeroHandler.h"
#include "MultipleOfHandler.h"

int main(int argc, const char * argv[]) {
    auto posHandler = std::make_shared<PositiveHandler>();
    auto negHandler = std::make_shared<NegativeHandler>();
    auto zeroHandler = std::make_shared<ZeroHandler>();
    
    negHandler->add(posHandler);
    negHandler->add(zeroHandler);

    std::cout << "-10 is " << negHandler->handle(-10) << std::endl;
    std::cout << "100 is " << negHandler->handle(100) << std::endl;
    std::cout << "0 is " << negHandler->handle(0) << std::endl;
    
    auto multipleHandler = std::make_shared<MultipleOfHandler>(2);
    
    multipleHandler->add(std::make_shared<MultipleOfHandler>(3));
    multipleHandler->add(std::make_shared<MultipleOfHandler>(5));
    multipleHandler->add(std::make_shared<MultipleOfHandler>(7));
    multipleHandler->add(std::make_shared<MultipleOfHandler>(9));
    multipleHandler->add(std::make_shared<MultipleOfHandler>(11));
    multipleHandler->add(std::make_shared<MultipleOfHandler>(13));
    multipleHandler->add(std::make_shared<MultipleOfHandler>(17));
    multipleHandler->add(std::make_shared<MultipleOfHandler>(19));
    
    std::cout << "10 is " << multipleHandler->handle(10) << std::endl;
    std::cout << "105 is " << multipleHandler->handle(105) << std::endl;
    std::cout << "25 is " << multipleHandler->handle(25) << std::endl;
    std::cout << "361 is " << multipleHandler->handle(361) << std::endl;
    
    return 0;
}
