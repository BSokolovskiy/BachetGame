#ifndef ENDGAME_H
#define ENDGAME_H

/* ���������� � ������ �������� ������� � ����������� �� �������� ���� (�������� ��� �������) */

#include <SFML\Graphics.hpp>
#include <SFML\Audio.hpp>
#include "Create.h"

using namespace sf;

//������� ������� �������� ���� ���������
void callLose(Font &font, RenderWindow &window, bool *v);
//������� ������� �������� ���� ��������
void callWin(Font &font, RenderWindow &window, bool *v);

#endif
