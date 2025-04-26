#include "emotion_detector.h"
#include <iostream>

std::string detectEmotion(const std::string& input) {
    // Basic emotion detection logic (this can be expanded with machine learning or more sophisticated methods)
    if (input.find("happy") != std::string::npos) {
        return "happy";
    } else if (input.find("sad") != std::string::npos) {
        return "sad";
    } else if (input.find("angry") != std::string::npos) {
        return "angry";
    } else {
        return "neutral";
    }
}
