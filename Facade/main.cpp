#include "KVN.h"
#include "Team.h"
#include "Repetition.h"
#include "Fans.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    std::cout << "Метод без фасада" << std::endl;
    Team* team = new Team("Это не повод"); // Создание команды
    Repetition* repetition = new Repetition(25); // Проведение указанного количества репетиций
    Fans* fans = new Fans(100); // Создание фанатов
    
    int love_to_team = fans->Love_to_Team();
    float power_of_show = repetition->Power_of_Show();
    std::cout << "Шансы на победу " << team->Chance_to_Win(love_to_team, power_of_show) << " %" << std::endl;

    std::cout << std::endl;

    delete team;
    delete repetition;
    delete fans;

    KVN* kvn = new KVN("Cosa Nostra", 80, 200);
    kvn->Prediction_to_Game();
    delete kvn;
}
