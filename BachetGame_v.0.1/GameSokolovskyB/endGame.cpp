#include "EndGame.h"

//������� ������� �������� ���� ���������
void callLose(Font &font, RenderWindow &window, bool *v)
{
	//������ ���� ���� ���� �� �� ������� ��� ������� esc
	int isEnd = 1;

	//������� �������� ��� ������
	char pressEsc[SIZE];

	//��������� ��������
	Text lose("", font, 200); createText(lose, 450, 480, "YOU LOSE", Color::Red);
	Text prEsc("", font, 50); createText(prEsc, 340, 780, "Don't worry, keep calm and press space...", Color::White);
	

	//�������� ������
	Music music;
	music.openFromFile("resource/sounds/end/lose.ogg");
	//������������� ������
	if (*v == true)
	{
		music.play();
	}

	//���� ����
	while (isEnd)
	{
		//������� ����
		window.clear();

		//������� ���� ���� �� ������ ������  esc 
		if (Keyboard::isKeyPressed(Keyboard::Space))
		{
			isEnd = 0;
		}

		//���/���� ������
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::EventType::KeyPressed)
			{
				if (event.key.code == Keyboard::Key::M)
				{
					if (music.getStatus() == music.Paused || music.getStatus() == music.Stopped)
					{
						*v = true;
						music.play();
					}
					else if (music.getStatus() == music.Playing)
					{
						*v = false;
						music.pause();
					}
				}
			}
		}

		//������ �����
		window.draw(lose);
		window.draw(prEsc);

		//������� �� �����
		window.display();
	}
}

//������� ������� �������� ���� ��������
void callWin(Font &font, RenderWindow &window, bool *v)
{
	//������ ���� ���� ���� �� �� ������� ��� ������� esc
	int isEnd = 1;

	//��������� �������
	Text win("", font, 200); createText(win, 500, 450, "YOU WIN", Color::Green);
	Text prEsc("", font, 50); createText(prEsc, 740, 780, "Press space...", Color::White);

	//��������� ������
	Music music;
	music.openFromFile("resource/sounds/end/win.ogg");
	//������������� ������
	if (*v == true)
	{
		music.play();
	}

	//���� ����
	while (isEnd)
	{
		//������� ����
		window.clear();

		//������� ���� ���� �� ������ ������  esc 
		if (Keyboard::isKeyPressed(Keyboard::Space))
		{
			isEnd = 0;
		}

		//���/���� ������
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::EventType::KeyPressed)
			{
				if (event.key.code == Keyboard::Key::M)
				{
					if (music.getStatus() == music.Paused || music.getStatus() == music.Stopped)
					{
						*v = true;
						music.play();
					}
					else if (music.getStatus() == music.Playing)
					{
						*v = false;
						music.pause();
					}
				}
			}
		}

		//������ �����
		window.draw(win);
		window.draw(prEsc);

		//������� �� �����
		window.display();
	}
}