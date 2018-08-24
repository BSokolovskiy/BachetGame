#ifndef CREATE_H
#define CREATE_H

/* ���������� � ������ ��������� ������, ��������, ������ � ������ */

#include <SFML/Graphics.hpp>
#include <string>

#define SIZE 100

using namespace std;
using namespace sf;

//������� ������� ������� ����� � ������ ��������� ���������
void createText(Text &text, int pos_x, int pos_y, string strText, static const Color color);
//������� ������ ������� �������� ��� ��������
Texture createTexture(string way);
//������� ������� ������� ������ � ����������� �� ������������ ������� � ������ ��������� ���������
void createFigure(RectangleShape &figure, int pos_x, int pos_y, static const Color colorLine, static const Color colorFill, int thicknessLine);
//������� ������� ������ ����� ������
void setNewString(int c, Text &text);
//������� ������� ������������� ��������� ����
void setDiff(int diffic, int *border, string *borderStr, string *way, int *c, Text &text�ount, Text &text, int *countAnim, float *timeAnim, Text &name);
//������� ������� ������������� ����� � ����������� �� ��������� ����
void setEnemy(int diffic, Sprite &sprite);
//������� ������� ������������� �������� ����� � ����������� �� ��������� ����
void setAnimEnemy(int diffic, int animFrame, Sprite &sprite);

#endif