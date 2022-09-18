#include <iostream>

int main(){

    std::cout << "It's been a strange day indeed. You've fallen down a rabbit hole, happened across a strange tea party, and had many other absurd adventures.\n";
    std::cout << "But now, you are called to a trial of some sort, ushered in by a Gryphon. \n";
    std::cout << "The King and Queen of Hearts are seated on their throne when you arrive, with a great crowd assembled about them - all sorts of little birds and beasts, as well as the whole pack of cards. \n";
    std::cout << "The White Rabbit is standing near the King, with a trumpet in one hand, and  a scroll of parchment in the other. \n";
    std::cout << "In the very middle of the court is a table, with a large dish of tarts upon it. They look really good, making you feel quite hungry. \n";
    std::cout << "You see twelve jurors writing busily on slates. You wonder how they have anything to write down before the trial's begun. \n";
    std::cout << "*        *         *\n";
    std::cout << "What do you do? \n\n";

    std::cout << "a. What the hell!!\n";
    std::cout << "b. What did I do wrong?\n";
    std::cout << "c. Release me!!\n";
    std::cout << "d. Come and fight me!!\n\n";

    char choice1 = 'y';

    std::cin >> choice1;

   
    if(choice1 == 'a'){
      std::cout << "What the hell!!\n";
    }else if(choice1  == 'b'){
      std::cout << "What did I do wrong?\n";
    }else if(choice1 == 'c'){
      std::cout << "Release Me!\n";
    }else if(choice1 == 'd'){
      std::cout << "Come and fight me!!\n";
    }else{
      std::cout << "Please choose a valid answer\n";
      std::cin >> choice1;

       if(choice1 == 'a'){
      std::cout << "What the hell!!\n";
    }else if(choice1  == 'b'){
      std::cout << "What did I do wrong?\n";
    }else if(choice1 == 'c'){
      std::cout << "Release Me!\n";
    }else if(choice1 == 'd'){
      std::cout << "Come and fight me!!\n";
    }
    }


}