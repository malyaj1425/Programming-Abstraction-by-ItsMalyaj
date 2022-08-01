#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

struct student{
    double age;
    float cgpa;
    char gender;
};
struct product{
    int price;
    float weight;
};
struct movies_t{
    string title;
    int year;
};
int main()
{
    struct student John={18,9.3,'M'};
    struct student Crane={19,7.4,'M'};
    struct student arr[82]={John,Crane};
    struct product Guns={10000,2.5};
    struct product Roses={50,0.5};
    struct movies_t amovie={"SnyderCut",2021};
    movies_t * pmovie=&amovie;
    cout<<pmovie<<endl;
    cout<<pmovie->title<<endl;
    
    int prodCount;
cout << "Enter number of Products:";
cin >> prodCount;
struct product products[prodCount];
for(int i=0; i<prodCount; ++i){
struct product p;
int wt, price;
cout << "Enter weight and price: ";
cin >> p.weight >> p.price;
products[i] = p;
}
for(int i=0; i<prodCount; ++i){
cout << products[i].weight << ' ' << products[i].price << '\n';
}
    // std::cout<<John.age<<" "<<John.cgpa<<std::endl;
    // std::cout<<Crane.age<<" "<<Crane.cgpa<<std::endl;
    // std::cout<<Guns.price<<" "<<Guns.weight<<std::endl;
    // std::cout<<Roses.price<<" "<<Roses.weight<<std::endl;
    // std::cout<<sizeof(student)<<std::endl;
    // std::cout<<sizeof(product)<<std::endl;


    
    






}

