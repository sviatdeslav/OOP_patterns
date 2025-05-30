#include "KVN.h"

KVN::KVN(std::string team, int repetition, int fans) {
	_team = team;
	_repetition = repetition;
	_fans = fans;
}

void KVN::Prediction_to_Game() {
    std::cout << "Метод с использованием фасада" << std::endl;
    Team* team = new Team(_team); // Создание команды
    Repetition* repetition = new Repetition(_repetition); // Проведение указанного количества репетиций
    Fans* fans = new Fans(_fans); // Создание фанатов

    int love_to_team = fans->Love_to_Team();
    float power_of_show = repetition->Power_of_Show();
    std::cout << "Шансы на победу " << team->Chance_to_Win(love_to_team, power_of_show) << " %" << std::endl;

    delete team;
    delete repetition;
    delete fans;
}