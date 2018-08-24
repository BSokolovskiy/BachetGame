//���� ������ ������� ��� ��� ��-73 ����������� �.
//1071 ������ ���� +-

#include <SFML/Graphics.hpp>
#include "Menu.h"
#include "Game.h"

using namespace sf;

//����� ������� ����
int main(void)
{
	//�������� ������� ������ ����������
	VideoMode mode = VideoMode::getDesktopMode();
	//������� ����
	RenderWindow window(VideoMode(mode), "BACHET", Style::Fullscreen);
	//������ ������ ��
	window.setMouseCursorVisible(false);
	View fixed = window.getView();
	//������� ���� ������
	Texture cursor;
	cursor.loadFromFile("resource/images/cursor.png");
	Sprite cursorSp(cursor);
	//����
	bool v = true;

	while (window.isOpen())
	{		
		//�������� ������ ���� ����
		callMenu(window, cursorSp, &v);
		//�������� ���������
		int diff = chDifficultyGame(window, cursorSp, &v);
		//��������� ����
		if (diff != 0)
		{
			startGame(diff, window, cursorSp, &v);
		}
	}

	return 0;
}