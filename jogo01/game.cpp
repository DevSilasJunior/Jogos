#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
using namespace std;

/*
g++ .\game.cpp -IC:\SFML-3.0.0\include -LC:\SFML-3.0.0\lib -lsfml-graphics -lsfml-window -lsfml-system -o .\game.exe
*/
int main() {
    sf::RenderWindow janela(sf::VideoMode(sf::Vector2u(800, 600)), "Janela1");
    sf::Texture imagem("./tigre.png");
    if (!imagem.loadFromFile("./tigre.png", false, sf::IntRect({10, 10}, {32, 32}))){
        std::cerr << "Erro ao carregar a textura!" << std::endl;
        return -1; 
}
    sf::Sprite sprite(imagem);
    while(janela.isOpen()){
        // check all the window's events that were triggered since the last iteration of the loop
        while (const std::optional event = janela.pollEvent())
        {
            // "close requested" event: we close the window
            if (event->is<sf::Event::Closed>())
                janela.close();
        }
         // Limpar a tela
         janela.clear(sf::Color::Black);

         // Desenhar o sprite
         janela.draw(sprite);
 
         // Mostrar o conteúdo renderizado na tela
         janela.display();
    }
    return 0;
}