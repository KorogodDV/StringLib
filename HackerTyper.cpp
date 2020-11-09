#include "String.h"
#include <SFML/Graphics.hpp>

//int main()
//{
//	sf::RenderWindow window(sf::VideoMode(1280, 720), "HackerTyper");
//
//	String buffer;
//
//	String text;
//
//	sf::Text program;
//	sf::Font font;
//	if (!font.loadFromFile("arial.ttf"))
//	{}
//
//	program.setFont(font);
//
//	int start;
//	int end;
//
//	while (window.isOpen())
//	{
//		sf::Event event;
//
//		program.setString()
//
//		while (window.pollEvent(event))
//		{
//			if ((event.type == sf::Event::Closed) || (event.key.code == sf::Keyboard::Escape))
//			{
//				window.close();
//				break;
//			}
//			
//			if (event.KeyPressed)
//			{
//				text += String(&buffer.str[end]);
//				text += String(&buffer.str[end + 1]);
//				break;
//			}
//		}
//
//}

int main()
{
	char s1[] = "asdsadasdsads";
	char s2[] = "122212333333333333333333321312312312312312";
	String str1 = String(s1);
	String str2 = String(s2);
	str1 += str2;
	std::cout << str1.split(0)[1].str;
	return 0;
}