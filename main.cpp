#include <iostream>
#include "cvector.h"

void test_int()
{
    cvector<int> vec;
    cvector<int> vecsec(3); //just to show they work
    cvector<int> vecthi(3, 54); //just to show they work
    int i;

    std::cout << "Created vector of ints, default" << std::endl;
    std::cout << "Size: " << vec.size() << " Capacity: " << vec.capacity()
              << " Empty: " << vec.empty() << std::endl << "All elements: ";
    for(i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Created vector of ints, size set" << std::endl;
    std::cout << "Size: " << vecsec.size() << " Capacity: " << vecsec.capacity()
              << " Empty: " << vecsec.empty() << std::endl << "All elements: ";
    for(i = 0; i < vecsec.size(); i++)
    {
        std::cout << vecsec[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Created vector of ints, size + initializer set" << std::endl;
    std::cout << "Size: " << vecthi.size() << " Capacity: " << vecthi.capacity()
              << " Empty: " << vecthi.empty() << std::endl << "All elements: ";
    for(i = 0; i < vecthi.size(); i++)
    {
        std::cout << vecthi[i] << " ";
    }
    std::cout << std::endl;

    vec.push_back(1);
    std::cout << "Push back(1)" << std::endl;
    std::cout << "Size: " << vec.size() << " Capacity: " << vec.capacity()
              << " Empty: " << vec.empty() << std::endl << "All elements: ";
    for(i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    vec.push_back(1);
    std::cout << "Push back(1)" << std::endl;
    std::cout << "Size: " << vec.size() << " Capacity: " << vec.capacity()
              << " Empty: " << vec.empty() << std::endl << "All elements: ";
    for(i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    vec.push_back(1);
    std::cout << "Push back(1)" << std::endl;
    std::cout << "Size: " << vec.size() << " Capacity: " << vec.capacity()
              << " Empty: " << vec.empty() << std::endl << "All elements: ";
    for(i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    vec.shrink_to_fit();
    std::cout << "Shrink to fit()" << std::endl;
    std::cout << "Size: " << vec.size() << " Capacity: " << vec.capacity()
              << " Empty: " << vec.empty() << std::endl << "All elements: ";
    for(i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    vec.pop_back();
    std::cout << "Pop back()" << std::endl;
    std::cout << "Size: " << vec.size() << " Capacity: " << vec.capacity()
              << " Empty: " << vec.empty() << std::endl << "All elements: ";
    for(i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    vec.clear();
    std::cout << "Clear()" << std::endl;
    std::cout << "Size: " << vec.size() << " Capacity: " << vec.capacity()
              << " Empty: " << vec.empty() << std::endl << "All elements: ";
    for(i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

void test_float()
{
    cvector<float> vec;
    cvector<float> vecsec(3); //just to show they work
    cvector<float> vecthi(3, 12.5); //just to show they work
    int i;

    std::cout << "Created vector of floats, default" << std::endl;
    std::cout << "Size: " << vec.size() << " Capacity: " << vec.capacity()
              << " Empty: " << vec.empty() << std::endl << "All elements: ";
    for(i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Created vector of floats, size set" << std::endl;
    std::cout << "Size: " << vecsec.size() << " Capacity: " << vecsec.capacity()
              << " Empty: " << vecsec.empty() << std::endl << "All elements: ";
    for(i = 0; i < vecsec.size(); i++)
    {
        std::cout << vecsec[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Created vector of floats, size + initializer set" << std::endl;
    std::cout << "Size: " << vecthi.size() << " Capacity: " << vecthi.capacity()
              << " Empty: " << vecthi.empty() << std::endl << "All elements: ";
    for(i = 0; i < vecthi.size(); i++)
    {
        std::cout << vecthi[i] << " ";
    }
    std::cout << std::endl;

    vec.push_back(1.07);
    std::cout << "Push back(1.07)" << std::endl;
    std::cout << "Size: " << vec.size() << " Capacity: " << vec.capacity()
              << " Empty: " << vec.empty() << std::endl << "All elements: ";
    for(i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    vec.push_back(1.07);
    std::cout << "Push back(1.07)" << std::endl;
    std::cout << "Size: " << vec.size() << " Capacity: " << vec.capacity()
              << " Empty: " << vec.empty() << std::endl << "All elements: ";
    for(i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    vec.push_back(1.07);
    std::cout << "Push back(1.07)" << std::endl;
    std::cout << "Size: " << vec.size() << " Capacity: " << vec.capacity()
              << " Empty: " << vec.empty() << std::endl << "All elements: ";
    for(i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    vec.shrink_to_fit();
    std::cout << "Shrink to fit()" << std::endl;
    std::cout << "Size: " << vec.size() << " Capacity: " << vec.capacity()
              << " Empty: " << vec.empty() << std::endl << "All elements: ";
    for(i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    vec.pop_back();
    std::cout << "Pop back()" << std::endl;
    std::cout << "Size: " << vec.size() << " Capacity: " << vec.capacity()
              << " Empty: " << vec.empty() << std::endl << "All elements: ";
    for(i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    vec.clear();
    std::cout << "Clear()" << std::endl;
    std::cout << "Size: " << vec.size() << " Capacity: " << vec.capacity()
              << " Empty: " << vec.empty() << std::endl << "All elements: ";
    for(i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

void test_double()
{
    cvector<double> vec;
    cvector<double> vecsec(3); //just to show they work
    cvector<double> vecthi(3, 11.6); //just to show they work
    int i;

    std::cout << "Created vector of doubles, default" << std::endl;
    std::cout << "Size: " << vec.size() << " Capacity: " << vec.capacity()
              << " Empty: " << vec.empty() << std::endl << "All elements: ";
    for(i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Created vector of doubles, size set" << std::endl;
    std::cout << "Size: " << vecsec.size() << " Capacity: " << vecsec.capacity()
              << " Empty: " << vecsec.empty() << std::endl << "All elements: ";
    for(i = 0; i < vecsec.size(); i++)
    {
        std::cout << vecsec[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Created vector of doubles, size + initializer set" << std::endl;
    std::cout << "Size: " << vecthi.size() << " Capacity: " << vecthi.capacity()
              << " Empty: " << vecthi.empty() << std::endl << "All elements: ";
    for(i = 0; i < vecthi.size(); i++)
    {
        std::cout << vecthi[i] << " ";
    }
    std::cout << std::endl;

    vec.push_back(2.6);
    std::cout << "Push back(2.6)" << std::endl;
    std::cout << "Size: " << vec.size() << " Capacity: " << vec.capacity()
              << " Empty: " << vec.empty() << std::endl << "All elements: ";
    for(i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    vec.push_back(2.6);
    std::cout << "Push back(2.6)" << std::endl;
    std::cout << "Size: " << vec.size() << " Capacity: " << vec.capacity()
              << " Empty: " << vec.empty() << std::endl << "All elements: ";
    for(i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    vec.push_back(2.6);
    std::cout << "Push back(2.6)" << std::endl;
    std::cout << "Size: " << vec.size() << " Capacity: " << vec.capacity()
              << " Empty: " << vec.empty() << std::endl << "All elements: ";
    for(i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    vec.shrink_to_fit();
    std::cout << "Shrink to fit()" << std::endl;
    std::cout << "Size: " << vec.size() << " Capacity: " << vec.capacity()
              << " Empty: " << vec.empty() << std::endl << "All elements: ";
    for(i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    vec.pop_back();
    std::cout << "Pop back()" << std::endl;
    std::cout << "Size: " << vec.size() << " Capacity: " << vec.capacity()
              << " Empty: " << vec.empty() << std::endl << "All elements: ";
    for(i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    vec.clear();
    std::cout << "Clear()" << std::endl;
    std::cout << "Size: " << vec.size() << " Capacity: " << vec.capacity()
              << " Empty: " << vec.empty() << std::endl << "All elements: ";
    for(i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

void test_pair()
{
    cvector<cpair> vec;
    cvector<cpair> vecsec(3); //just to show they work
    cvector<cpair> vecthi(3, cpair()); //just to show they work
    int i;
    std::cout << "Testing pairs - this is test pair: " << std::endl;
    cpair a = cpair(1, 4.5);
    std::cout << a << std::endl << "Enter a new value of pair, first int, then double: " << std::endl;
    std::cin >> a;
    std::cout << "New pair - " << a << std::endl;


    std::cout << "Created vector of pairs, default" << std::endl;
    std::cout << "Size: " << vec.size() << " Capacity: " << vec.capacity()
              << " Empty: " << vec.empty() << std::endl << "All elements - ";
    for(i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << "; ";
    }
    std::cout << std::endl;

    std::cout << "Created vector of pairs, size set" << std::endl;
    std::cout << "Size: " << vecsec.size() << " Capacity: " << vecsec.capacity()
              << " Empty: " << vecsec.empty() << std::endl << "All elements - ";
    for(i = 0; i < vecsec.size(); i++)
    {
        std::cout << vecsec[i] << "; ";
    }
    std::cout << std::endl;

    std::cout << "Created vector of pairs, size + initializer set" << std::endl;
    std::cout << "Size: " << vecthi.size() << " Capacity: " << vecthi.capacity()
              << " Empty: " << vecthi.empty() << std::endl << "All elements - ";
    for(i = 0; i < vecthi.size(); i++)
    {
        std::cout << vecthi[i] << "; ";
    }
    std::cout << std::endl;

    vec.push_back(cpair(4, 2.6));
    std::cout << "Push back(4 : 2.6)" << std::endl;
    std::cout << "Size: " << vec.size() << " Capacity: " << vec.capacity()
              << " Empty: " << vec.empty() << std::endl << "All elements - ";
    for(i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << "; ";
    }
    std::cout << std::endl;

    vec.push_back(cpair(4, 2.6));
    std::cout << "Push back(4 : 2.6)" << std::endl;
    std::cout << "Size: " << vec.size() << " Capacity: " << vec.capacity()
              << " Empty: " << vec.empty() << std::endl << "All elements - ";
    for(i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << "; ";
    }
    std::cout << std::endl;

    vec.push_back(cpair(4, 2.6));
    std::cout << "Push back(4 : 2.6)" << std::endl;
    std::cout << "Size: " << vec.size() << " Capacity: " << vec.capacity()
              << " Empty: " << vec.empty() << std::endl << "All elements - ";
    for(i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << "; ";
    }
    std::cout << std::endl;

    vec.shrink_to_fit();
    std::cout << "Shrink to fit()" << std::endl;
    std::cout << "Size: " << vec.size() << " Capacity: " << vec.capacity()
              << " Empty: " << vec.empty() << std::endl << "All elements - ";
    for(i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << "; ";
    }
    std::cout << std::endl;

    vec.pop_back();
    std::cout << "Pop back()" << std::endl;
    std::cout << "Size: " << vec.size() << " Capacity: " << vec.capacity()
              << " Empty: " << vec.empty() << std::endl << "All elements - ";
    for(i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << "; ";
    }
    std::cout << std::endl;

    vec.clear();
    std::cout << "Clear()" << std::endl;
    std::cout << "Size: " << vec.size() << " Capacity: " << vec.capacity()
              << " Empty: " << vec.empty() << std::endl << "All elements - ";
    for(i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << "; ";
    }
    std::cout << std::endl;
}


int main() {
    int flag;
    std::cout << "Choose an option of testing: \n1 - ints\n2 - floats"
              << std::endl << "3 - doubles\n4 - pairs\n" << std::endl;
    std::cin >> flag;
    switch (flag) {
        case 1:
            test_int();
            break;
        case 2:
            test_float();
            break;
        case 3:
            test_double();
            break;
        case 4:
            test_pair();
            break;
        default:
            break;
    }
    return 0;
}
