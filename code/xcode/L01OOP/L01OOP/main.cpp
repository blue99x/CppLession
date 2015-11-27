//
//  main.cpp
//  L01OOP
//
//  Created by Song Carlos on 15/11/27.
//  Copyright © 2015年 Song Carlos. All rights reserved.
//

#include <iostream>
#include "People.hpp"

int main(int argc, const char * argv[]) {
    
    People *p = new People();
    p->hello();
    
    delete p;
    
    return 0;
}
