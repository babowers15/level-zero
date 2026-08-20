#include <iostream>

int main()
{
    int key { };
    int choice { };
    bool playing { true };
    std::cout << "Welcome to the 4 Room Dungeon!\n";
    std::cout << "You are standing in a cold stone room with three doora. One to the north, one to the east, and one to the west.\n";
    while (playing)
    {
    std::cout << "Enter [1] to go to the west door, [2] to go to the east door, or [3] to go to the north door.\n";
    std::cin >> choice;
    if (choice == 1)
    {
        std::cout << "You approach the western door, as you open you peer into the room and see a large chest. You open the chest and find a small key.\n";
        std::cout << "[KEY AQUIRED]\n";
        key = 1;
    }
    else if (choice == 2)
    {
        std::cout << "You approach the eastern door, it creaks open and you find a small table with a note on it. The note reads: 'The key is in the west room.'\n";
    }
    else if (choice == 3)
    {
        std::cout << "You approach the northern door, it has a large padlock on it.\n";
        if (key == 1)
        {
            std::cout << "You pull out the key you found and unlock the door, revaling a room filled with Gold and Jewels. You have found the treasure!\n";
            std::cout << "Congratulations, you have completed the 4 Room Dungeon!\n";
            playing = false;
        }
        else
        {
            std::cout << "You do not have the required key.\n";
        }
    }
}
}

        
        
    
    
    
