#include "Create.h"

//������� ������� ������� ����� � ������ ��������� ���������
void createText(Text &text, int pos_x, int pos_y, string strText, static const Color color)
{
	//������������� ��������� ���������
	text.setPosition(pos_x, pos_y);
	text.setString(strText);
	text.setStyle(Text::Bold);
	text.setColor(color);
}

//������� ������ ������� �������� ��� ��������
Texture createTexture(string way)
{
	//��������� ��������
	Texture texture;
	texture.loadFromFile(way);
	return texture;
}

//������� ������� ������� ������ � ����������� �� ������������ ������� � ������ ��������� ���������
void createFigure(RectangleShape &figure, int pos_x, int pos_y, static const Color colorLine, static const Color colorFill, int thicknessLine)
{
	figure.setPosition(pos_x, pos_y);
	figure.setFillColor(colorFill);
	figure.setOutlineColor(colorLine);
	figure.setOutlineThickness(thicknessLine);
}

//������� ������� ������ ����� ������
void setNewString(int c, Text &text)
{
	char buff[SIZE];
	_itoa(c, buff, 10);
	text.setString(buff);
}

//������� ������� ������������� ��������� ����
void setDiff(int diffic, int *border, string *borderStr, string *way, int *c, Text &text�ount, Text &text, int *countAnim, float *timeAnim, Text &name)
{
	if (diffic == 1)
	{
		*border = 10;
		*borderStr = "10";
		*way = "resource/sounds/game/dif1.ogg";
		*c = 100;
		text�ount.setString("100");
		text.setString("> Enter count matches [1 .. " + *borderStr + "]:");
		*countAnim = 3;
		*timeAnim = 0.75;
		name.setString("BASIC BOT");
		name.setColor(Color::Green);
		name.setPosition(1130, 510);
	}
	else if (diffic == 2)
	{
		*border = 5;
		*borderStr = "5";
		*way = "resource/sounds/game/dif2.ogg";
		*c = 30;
		text�ount.setString("30");
		text.setString("> Enter count matches [1 .. " + *borderStr + "]:");
		*countAnim = 11;
		*timeAnim = 1;
		name.setString("SHREDDER");
		name.setColor(Color::Yellow);
		name.setPosition(1150, 730);
	}
	else if (diffic == 3)
	{
		*border = 3;
		*borderStr = "3";
		*way = "resource/sounds/game/dif3.ogg";
		*c = 25;
		text�ount.setString("25");
		text.setString("> Enter count matches [1 .. " + *borderStr + "]:");
		*countAnim = 11;
		*timeAnim = 1;
		name.setString("IMMORTAL KONSTANTIN");
		name.setColor(Color::Red);
		name.setPosition(1050, 810);
	}
}

//������� ������� ������������� ����� � ����������� �� ��������� ����
void setEnemy(int diffic, Sprite &sprite)
{
	if (diffic == 1)
	{
		sprite.setTextureRect(IntRect(0, 0, 300, 550));
		sprite.setPosition(1100, 250);
	}
	else if (diffic == 2)
	{
		sprite.setTextureRect(IntRect(0, 0, 500, 400));
		sprite.setPosition(1000, 300);
	}
	else if (diffic == 3)
	{
		sprite.setTextureRect(IntRect(0, 0, 500, 460));
		sprite.setPosition(1000, 300);
	}
}

//������� ������� ������������� �������� ����� � ����������� �� ��������� ����
void setAnimEnemy(int diffic, int animFrame, Sprite &sprite)
{
	if (diffic == 1)
	{
		sprite.setTextureRect(IntRect(300 * animFrame, 0, 300, 250));
	}
	else if (diffic == 2)
	{
		sprite.setTextureRect(IntRect(500 * animFrame, 0, 500, 400));
	}
	else if (diffic == 3)
	{
		sprite.setTextureRect(IntRect(500 * animFrame, 0, 500, 460));
	}
}