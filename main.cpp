#include <windows.h>  // Required for WinMain in Windows apps
#include <iostream>
#include "emotion_detector.h"
#include "response_generator.h"

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    // Your application logic here
    std::cout << "EmoBot started!" << std::endl;

    return 0;
}
int main() {
    // Output a message to show the bot is working
    std::cout << "EmoBot started! Type 'exit' to quit.\n";

    std::string input;
    while (true) {
        // Take user input
        std::cout << "You: ";
        std::getline(std::cin, input);

        // Exit condition
        if (input == "exit") {
            break;
        }

        // Detect emotion
        std::string emotion = detectEmotion(input);

        // Generate response based on emotion
        std::string response = generateResponse(emotion);

        // Output the response
        std::cout << "EmoBot: " << response << std::endl;
    }

    return 0;
}