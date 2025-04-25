#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Cria a janela com tamanho 800x600 e título "SFML Window"
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Window");

    // Loop principal, a janela vai continuar aberta enquanto o usuário não a fechar
    while (window.isOpen()) {
        // Evento de captura (ex: fechamento da janela)
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();  // Fecha a janela
            }
        }

        // Limpa a janela
        window.clear();

        // Aqui você pode desenhar objetos gráficos (se houver)

        // Exibe o que foi desenhado na janela
        window.display();
    }

    return 0;
}