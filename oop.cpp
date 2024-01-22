#include<iostream>
using namespace std;

 class Hero {
        public:
        int health =  50;
        char level;
        
        Hero(){
            cout<<"hello homies";
        }
        int gethealth(){
            return health;
        }
        void sethealth(int h)
        {
            health = h;
        }
    };

    int	main()
        {
   Hero *h1 = new Hero;
   cout<< " health is "<< (*h1).gethealth();
    




    return 0;
}
