#include <iostream>

int main() {
    std::cout << "Welcome to Dragonscape Chronicles..." << std::endl;

    std::string playerName;
    std::cout << "Tell me your best adventurer name: ";
    std::cin >> playerName;

    std::cout << "Hail, " << playerName << "!" << std::endl;

    int choice;
    int nestedChoice;

    std::cout << "Where will " << playerName << " go?" << std::endl;
    std::cout << "1. Enchanted Forest" << std::endl;
    std::cout << "2. Crystal Caverns" << std::endl;
    std::cout << "3. Mystic Peaks" << std::endl;
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "You chose Enchanted Forest." << std::endl;
        std::cout << "In the Enchanted Forest, you can explore ancient trees, encounter magical creatures, and search for hidden treasures.\n" << std::endl;

        std::cout << "1. Encounter magical creatures and befriend them on your journey." << std::endl;
        std::cout << "2. Search for hidden treasures, following the whispers of enchanted winds." << std::endl;
        std::cin >> nestedChoice;

        if (nestedChoice == 1) {
           std::cout << "You chose to explore the ancient trees. You uncover ancient runes and gain mystical knowledge." << std::endl;
        } else if (nestedChoice == 2) {
            std::cout << "You chose to encounter magical creatures. You befriend a wise sprite who guides you deeper into the forest." << std::endl;
        } else if (nestedChoice == 3) {
            std::cout << "You chose to search for hidden treasures. You find a chest filled with enchanted artifacts." << std::endl;
        } else {
            std::cout << "Invalid choice within the Enchanted Forest. " << playerName << " stands still and ponders." << std::endl;
        }
    }  else if (choice == 2) {
        std::cout << "You chose Crystal Caverns." << std::endl;
        std::cout << "Within the Crystal Caverns, you can discover dazzling gemstones, solve puzzles, and face challenges to unveil the secrets hidden beneath the earth.\n" << std::endl;

        std::cout << "1. Solve intricate puzzles to unlock the wisdom hidden in the depths." << std::endl;
        std::cout << "2. Face challenges that test your courage and determination." << std::endl;
        std::cin >> nestedChoice;

        if (nestedChoice == 1) {
            std::cout << "You chose to discover gemstones. You find a magical crystal that enhances your abilities." << std::endl;
        } else if (nestedChoice == 2) {
            std::cout << "You chose to solve puzzles. By unraveling the mysteries, you gain ancient knowledge." << std::endl;
        } else if (nestedChoice == 3) {
            std::cout << "You chose to face challenges. Overcoming them, you prove your valor in the depths of the caverns." << std::endl;
        } else {
            std::cout << "Invalid choice within the Crystal Caverns. " << playerName << " stands still and ponders." << std::endl;
        }
    } else if (choice == 3) {
        std::cout << "You chose Mystic Peaks." << std::endl;
        std::cout << "At the Mystic Peaks, you can climb towering mountains, confront mythical beings, and harness the power of ancient magic.\n" << std::endl;

        std::cout << "1. Confront mythical beings and learn the ancient secrets they guard." << std::endl;
        std::cout << "2. Harness the power of ancient magic, shaping the destiny of the realm." << std::endl;
        std::cin >> nestedChoice;

        if (nestedChoice == 1) {
            std::cout << "You chose to climb mountains. At the peak, you gain a panoramic view of the magical realm." << std::endl;
        } else if (nestedChoice == 2) {
            std::cout << "You chose to confront mythical beings. You engage in a conversation with wise spirits who share ancient wisdom." << std::endl;
        } else if (nestedChoice == 3) {
            std::cout << "You chose to harness ancient magic. You feel the power coursing through you, altering the destiny of the realm." << std::endl;
        } else {
            std::cout << "Invalid choice within the Mystic Peaks. " << playerName << " stands still and ponders." << std::endl;
        }
    } else {
        std::cout << "Invalid choice. " << playerName << " stands still and ponders." << std::endl;
    }

    return 0;
}