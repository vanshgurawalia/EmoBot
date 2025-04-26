#include "response_generator.h"
#include <iostream>

std::string generateResponse(const std::string& emotion) {
    if (emotion == "happy") {
        return "That's great to hear! Keep smiling!";
    } else if (emotion == "sad") {
        return "I'm sorry you're feeling down. I hope things get better soon!";
    } else if (emotion == "angry") {
        return "Take a deep breath. It's okay to feel angry sometimes.";
    } else {
        return "I'm not sure how you feel, but I'm here to chat!";
    }
}
