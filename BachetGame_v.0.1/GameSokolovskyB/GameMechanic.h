#ifndef GAMEMECHANIC_H
#define GAMEMECHANIC_H

/* ���������� ������� ���������� ��������� ���� (��������� ���������, ���� ���������� ������ � �.�.) */

#include <SFML/Graphics.hpp>
#include <cstdlib>
#include <ctime>

using namespace sf;

//������� ������� ���������� ���������� ������ ������ �����������
int chooseEnemy(int c, int border);
//������� ������� ������ ���� ���������� � ����������� �� ����������
void setColorCount(int c, Text &text);
//������� ������� ������ ��������� ����� ��� ������ �����������
int random(int border);

#endif