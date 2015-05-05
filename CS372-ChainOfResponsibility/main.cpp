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
#include "SuffixHandler.h"

int main(int argc, const char * argv[]) {
    auto numberHandler = std::make_shared<PositiveHandler>();
    
    numberHandler->add(std::make_shared<NegativeHandler>());
    numberHandler->add(std::make_shared<ZeroHandler>());

    std::cout << "-10 is " << numberHandler->handle(-10) << std::endl;
    std::cout << "100 is " << numberHandler->handle(100) << std::endl;
    std::cout << "0 is " << numberHandler->handle(0) << std::endl;
    
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
    std::cout << "-25 is " << numberHandler->handle(-25) << " and " << multipleHandler->handle(-25) << std::endl;
    std::cout << "361 is " << multipleHandler->handle(361) << std::endl;
    
    auto suffixHandler = SuffixHandler(11, "th");
    suffixHandler.add(std::make_shared<SuffixHandler>(12, "th"));
    suffixHandler.add(std::make_shared<SuffixHandler>(13, "th"));
    suffixHandler.add(std::make_shared<SuffixHandler>(1, "st"));
    suffixHandler.add(std::make_shared<SuffixHandler>(2, "nd"));
    suffixHandler.add(std::make_shared<SuffixHandler>(3, "rd"));
    suffixHandler.add(std::make_shared<SuffixHandler>(4, "th"));
    suffixHandler.add(std::make_shared<SuffixHandler>(5, "th"));
    suffixHandler.add(std::make_shared<SuffixHandler>(6, "th"));
    suffixHandler.add(std::make_shared<SuffixHandler>(7, "th"));
    suffixHandler.add(std::make_shared<SuffixHandler>(8, "th"));
    suffixHandler.add(std::make_shared<SuffixHandler>(9, "th"));
    suffixHandler.add(std::make_shared<SuffixHandler>(0, "th"));

    for(auto ii=1; ii <= 101; ++ii)
        std::cout << ii << " is " << suffixHandler.handle(ii) << std::endl;
    
    return 0;
}
