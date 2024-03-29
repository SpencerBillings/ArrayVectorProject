//
//  Controller.cpp
//  ArrayVectorProject
//
//  Created by Billings, Spencer on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"

void Controller :: start()
{
    vector<int> intVec;
    vector<string> stringVec;
    
    intVec.push_back(1);
    intVec.push_back(2);
    intVec.push_back(3);
    
    stringVec.push_back("String One");
    stringVec.push_back("String Two");
    stringVec.push_back("I am very creative.");
    
    string stringArr[3];
    copy( stringVec.begin(), stringVec.end(), stringArr );
    
    for (int item : intVec)
    {
        cout << item << endl;
    }
    for (string item : stringVec)
    {
        cout << item << endl;
    }
    for (string item : stringArr)
    {
        cout << item << endl;
    }
}
