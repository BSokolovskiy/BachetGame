#ifndef MENU_H
#define MENU_H

/* ���������� � ������� ��������� ���� ���� */

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Create.h"

using namespace sf;

//������� ������� �������� ������� ���� ����
void callMenu(RenderWindow &window, Sprite &cursor, bool *v);
//������� � ������ ���������� 
int chDifficultyGame(RenderWindow &window, Sprite &cursor, bool *v);

#endif