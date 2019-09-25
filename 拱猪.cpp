#include<iostream>
#include<string>
#include<Windows.h>
#include<time.h>
#include <iomanip>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
using namespace std;
//////////////////////////////////////////////////
void game_start();//��ʼ
void game_rules();//��Ϸ����
void return_menu();//����
void display();    //��ʾ���˵�
int write(int score, string k);
int  read();
////////////////////////////////////////////////////
class Card
{
private:
	int num;
	char suit;
public:
	Card(){}
	void set_card(char Suit, int Num)//��ʼ��
	{
		num = Num;
		suit = Suit;
	}
	int get_num()//��ȡ�ƵĴ�С
	{
		return num;
	}
	char get_suit()//��ȡ�ƵĻ�ɫ
	{
		return suit;
	}
	bool operator <(Card p);
	void print();
};
bool Card::operator<(Card p)
{

	if (get_suit() == p.get_suit())
		return get_num()<p.get_num();
	else
		return 0;
}
void Card::print()
{
	char color = suit;


	if (num < 11)
	{
		cout << color << num << " ";
	}


	switch (num)
	{
	case 11:cout << color << "J" << " "; break;
	case 12:cout << color << "Q" << " "; break;
	case 13:cout << color << "K" << " "; break;
	case 14:cout << color << "A" << " "; break;
	}

}

class Player
{
private:
	Card   myCard[13];//���ԭ��ӵ�еĵ���
	Card   winCard[52];//Ӯ����
	int cardnum;                       //�Ƶ�����
	int Wnum;                          // Ӯ������
	int score;                          //����
	string name;                      // �����
public:
	Player(){ cardnum = 0; score = 0; Wnum = 0; }
	int Get_score(){ return score; }           //���ط���
	int Get_Wnum(){ return Wnum; }           //Ӯ�����Ƶ����� 
	int Get_cardnum(){ return cardnum; }    //�����Ƶ�����
	string Get_name(){ return name; }		//��������
	int become_pig(){ if (score<=-1000) return 1; else return 0; }
	void add_score(int a){ score = score + a; }  //������� 
	Card Play();				     //���ƺ���	
	void print1();                       //��ʾmyCard
	void set_name(string n){ name = n; }      //��������
	void set_data(int i, int j, int k){ cardnum = i; score = j; Wnum = k; }    
	void Get_card(Card Get);           //����
	void show_winc();                    //��ʾӮ������
	void Wincard(Card win);              //��ȡӮ������
	int one_Score();                    //һ�ֵ÷�
	int spa_q();                            //���ֺ���q����
	int spa_tre();                       //����3����

};
/////////////////////////////////////////////////////////////////

Card Player::Play()//����
{

	int n = 0;
	Card temp;
	srand(time((NULL)));
	n = rand() % cardnum;
	temp = myCard[n];
	myCard[n] = myCard[cardnum - 1];
	cardnum--;
	return temp;

}

void Player::print1()//��ʾ��ҵ���
{
	cout << name << ":";
	for (int i = 0; i < cardnum; i++)
	{
		myCard[i].print();
	}
}
void Player::Get_card(Card Get)//���շ�����
{
	myCard[cardnum] = Get;
	cardnum++;
}

void Player::show_winc()                    //��ʾӮ����
{
	for (int i = 0; i<Wnum; i++)
		winCard[i].print();
}
void Player::Wincard(Card win)//��ȡӮ�õ���
{
	winCard[Wnum] = win;
	Wnum = Wnum++;
}

int Player::one_Score()//�������õķ�
{
	int s = 0;//�ܷ�
	int n = 0;//���ҵ�����
	int p = 1;
	for (int i = 0; i < Wnum; i++)
	{
		if (winCard[i].get_suit() == '\3')
		{
			n++;
		}

	}
	if (n == 13)
	{
		s = s + 200;
	}
	else
	for (int i = 0; i < Wnum; i++)
	{
		if (winCard[i].get_suit() == '\5'&&winCard[i].get_num() == 10)
		{
			p = 2;
		}
		if (winCard[i].get_suit() == '\3')
		{
			switch (winCard[i].get_num())
			{
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 10:s = s - 10; break;
			case 11:s = s - 20; break;
			case 12:s = s - 30; break;
			case 13:s = s - 40; break;
			case 14:s = s - 50; break;
			default:break;

			}
		}
		else if (winCard[i].get_suit() == '\6'&&winCard[i].get_num() == 12)
		{
			s = s - 100;
		}
		else if (winCard[i].get_suit() == '\4'&&winCard[i].get_num() == 11)
		{
			s = s + 100;
		}
	}
	s = s*p;
	return s;

}

int Player::spa_tre()//�ж��Ƿ�Ϊ����3
{
	int temp = 0;
	for (int i = 0; i < 13; i++)
	{
		if (myCard[i].get_num() == 3 && myCard[i].get_suit() == '\6')
			temp = 1;
	}
	return temp;
}
int Player::spa_q()//�жϸ�����Ƿ�Ӯ�˺���Q
{
	int temp = 0;
	for (int i = 0; i < Wnum; i++)
	{
		if (winCard[i].get_num() == 12 && winCard[i].get_suit() == '\6')
			temp = 1;
	}
	return temp;

}
//////////////////////////////////////////////////////////////////////
class CGame
{
private:
	Card   allCard[52];      // ȫ��������
	Player  ptrPlayer[4];	// 4�����
public:
	CGame();// ���캯������ʼ����
	void Shuffle();	// ϴ��
	void Deal();		// ����
	void begin(int rounds);  //����
	void who_is_pig();//�ж�˭����
	void show_win();   //��ʾ���ָ���Ӯ��
	void Score();      // �Ʒ�
	void Show();
	void show_player();   //��ʾ���
	int is_first(int rounds);		//�ĸ���ҵ�һ������
};

CGame::CGame()//���캯����ʼ��
{

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j<13; j++)
		{
			switch (i)
			{
			case 0:
				allCard[i * 13 + j].set_card('\3', j + 2); break;
			case 1:
				allCard[i * 13 + j].set_card('\4', j + 2); break;
			case 2:
				allCard[i * 13 + j].set_card('\5', j + 2); break;
			case 3:

				allCard[i * 13 + j].set_card('\6', j + 2); break;
			}
		}

	}

	ptrPlayer[0].set_name("player1");
	ptrPlayer[1].set_name("player2");
	ptrPlayer[2].set_name("player3");
	ptrPlayer[3].set_name("player4");


}

void CGame::Shuffle()//ϴ��
{
	int r;
	Card tCard;
	srand(time(NULL));
	for (int i = 0; i<52; i++)
	{
		r = rand() % 52;
		tCard = allCard[i];
		allCard[i] = allCard[r];
		allCard[r] = tCard;
	}
}

void CGame::Deal()//����
{
	int dealed = 0;
	int s = 0;
	for (int j = 0; j<4; j++)
	{
		for (int i = dealed; i<dealed + 13; i++)
		{
			ptrPlayer[s % 4].Get_card(allCard[i]);
			s++;
		}
		
		dealed += 13;
	}
}

int CGame::is_first(int n)
{
	int flag,i=0;
	int b = n;
	int s1, s2, s3, s4;
	s1 = ptrPlayer[0].Get_score();
	s2 = ptrPlayer[1].Get_score();
	s3 = ptrPlayer[2].Get_score();
	s4 = ptrPlayer[3].Get_score();
	switch (b)
	{
	case 0:for ( i = 0; i < 4; i++)
	{
			   if (ptrPlayer[i].spa_tre() == 1)
			   {
				   flag = i;
				   cout << "��ǰ���Ƶ�����ǣ�" << ptrPlayer[i].Get_name() << endl;
			   }
	}
		   break;
	default:
		for ( i = 0; i < 4; i++)
		{
			if (ptrPlayer[i].spa_q() == 1)
			{
				flag = i;
				cout << "��ǰ���Ƶ�����ǣ�" << ptrPlayer[i].Get_name() << endl;
			}

		}
		break;
	}

	switch (b)
	{
	case 0:
		ptrPlayer[0].set_data(13, 100, 0);
		ptrPlayer[1].set_data(13, 100, 0);
		ptrPlayer[2].set_data(13, 100, 0);
		ptrPlayer[3].set_data(13, 100, 0);
		break;
	default:
		ptrPlayer[0].set_data(13, s1, 0);
		ptrPlayer[1].set_data(13, s2, 0);
		ptrPlayer[2].set_data(13, s3, 0);
		ptrPlayer[3].set_data(13, s4, 0);
		break;
	}

	return flag;

}


void CGame::begin(int rounds)//����
{
	
	int flag = 0, f = 0, b = rounds,i=0;
	flag = is_first(b);
	Card max, dealed[13][4];
	cout << "---------------------------------------------------------" << endl;
	cout << "  TURN	Player1	player2	player3	player4	BIGGER" << endl;
	cout << "---------------------------------------------------------" << endl;

	for (int turn = 0; turn < 13; turn++)
	{
		cout << setw(5) << turn + 1;
		for ( i = 0; i < 4; i++)
		{
			f = flag + i;
			f = f % 4;
			
			dealed[turn][f] = ptrPlayer[f].Play();
			
		}

		for ( i = 0; i < 4; i++)
		{
			cout << "	";
			dealed[turn][i].print();
		}
		max = dealed[turn][flag];
		for (int i = 0; i < 4; i++)
		{
			if (max<dealed[turn][i])
			{
				max = dealed[turn][i];
				flag = i;
			}
		}
		cout << "	";
		max.print();
		for ( i = 0; i < 4; i++)
		{
			ptrPlayer[flag].Wincard(dealed[turn][i]);
		}
		cout << endl;

	}
	cout << "---------------------------------------------------------" << endl;
}

void CGame::show_win()//��ʾ���ָ���Ӯ����
{

	cout << "player1 :"; ptrPlayer[0].show_winc(); cout << endl;
	cout << "player2 :"; ptrPlayer[1].show_winc(); cout << endl;
	cout << "player3:"; ptrPlayer[2].show_winc(); cout << endl;
	cout << "player4:"; ptrPlayer[3].show_winc(); cout << endl;
}

void  CGame::who_is_pig()//�ж�˭����
{
	int n = 0;
	Player max;
	max = ptrPlayer[0];
	for (int i = 0; i<4; i++)
	{
		if (max.Get_score()<ptrPlayer[i].Get_score())
			max = ptrPlayer[i];

		if (ptrPlayer[i].become_pig() == 1)
		{
			cout << ptrPlayer[i].Get_name() << "�Ѿ�����" << endl;
			n++;
		}
	}
	write(max.Get_score(), max.Get_name());
	if (n != 0)
	{
		cout << "��Ϸ����" << endl;
		
		exit(0);

	}

}



void CGame::Score()      
{
	cout << "============================���ֵ÷�=================================" << endl;
	cout << "=========player1	     player2      player3      	 player4 =======" << endl;

	cout << "score:      ";
	int s1, s2, s3, s4;
	s1 = ptrPlayer[0].one_Score();
	s2 = ptrPlayer[1].one_Score();
	s3 = ptrPlayer[2].one_Score();
	s4 = ptrPlayer[3].one_Score();
	cout << s1 << "		  ";
	cout << s2 << "		  ";
	cout << s3 << "		  ";
	cout << s4 << "		 " << endl;
	cout << "=================================��ҵ�ǰ����==================================" << endl;
	ptrPlayer[0].add_score(s1);
	ptrPlayer[1].add_score(s2);
	ptrPlayer[2].add_score(s3);
	ptrPlayer[3].add_score(s4);
	cout << endl;
	cout << "player1��" << ptrPlayer[0].Get_score() << endl;
	cout << "player2��" << ptrPlayer[1].Get_score() << endl;
	cout << "player3��" << ptrPlayer[2].Get_score() << endl;
	cout << "player4��" << ptrPlayer[3].Get_score() << endl;

}

void CGame::Show()//��ʾһ���˿���
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 13; j++)
		{
			allCard[i * 13 + j].print();
		}
		cout << endl;

	}
}

void CGame::show_player()//��ʾ���
{
	int i = 0;
	for (i = 0; i<4; i++)
	{
		ptrPlayer[i].print1();

		cout << endl;
	}
}

////////////////////////////////////////////////////////





void display()//��ʾ���˵�
{
	
	cout << "                *******************************************" << endl;
	cout << "                ************* ��ӭ����������Ϸ ************" << endl;
	cout << "                *************    1.��Ϸ��ʼ    ************" << endl;
	cout << "                *************    2.��Ϸ����    ************" << endl;
	cout << "                *************    3.�߷ּ�¼    ************" << endl;
	cout << "                *************    4.�˳���Ϸ    ************" << endl;
	cout << "                *******************************************" << endl;
	cout << "������ѡ��" << endl;
	int n;
	cin >> n;
	switch (n)
	{
	case 1:game_start(); break;//��ʼ��Ϸ
	case 2:game_rules(); return_menu(); break;//��Ϸ�������
	case 3:read(); break;//��Ϸ��������
	case 4:exit(0);//�˳���Ϸ
	}

}
//////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////
void game_rules()
{
	cout << "�װ�����ң�����������£�" << endl;
	cout << "1.ÿ�����к���(S)������(H)������(D)���ݻ�(C)���ֻ�ɫ��Suit��" << endl;
	cout << "ÿ�ֻ�ɫ����ʮ�����ƣ���52�ţ�13*4����" << endl;
	cout << "�Ƶ㣨Face���ֱ�Ϊ��2��3��4��5��6��7��8��9��10��J��Q��K��A���Ƶ�A���2��С��" << endl;
	cout << "2.ϴ�ƣ�Shuffle���󣬷��ƣ�Deal����������ң�Player����" << endl;
	cout << "3.���ƣ�send��" << endl;
	cout << "ÿ���Ƶĵ�һ�����ϸ����е���SQ�����ȳ�������һ�����ɳ��к���3�����ȳ�������ֻ�ܳ�����3��" << endl;
	cout << "��󣬸��Ұ�˳ʱ�뷽����ơ�ÿ��ÿλ���ֻ�ܳ�һ���ƣ����һ�ɫ�������һ����ͬ��" << endl;
    cout << "�����û��ͬ��ɫ������Գ�������ɫ����Ϊ���ơ����Ƶ��Ƶ��Ϊ��С��"<< endl;
	cout << "�ļҶ����ƺ󣬱Ƚϣ�compare���Ƶ��С���Ƶ����Ӯ�ñ��֣�������һ�����ȳ��ơ�" << endl;
	cout << "4.�Ʒ�" << endl;
	cout << "���ģ�2��3��4  ���Ƿ�;5-10   -10��;J 	 -20��;Q    -30��; K   -40��;A    -50��" << endl;
	cout << "���ң�Q ����	-100��;���飺J ����	+100��;�ݻ���10��double���ӱ� ��2" << endl;
	cout << "���һ��Ӯ�������к��ģ����Ϊ���룬����Ϊ���֡�" << endl;
	cout << "5.��Ϸ���" << endl;
	cout << "����Ϸ������һ���÷ֳ���-1000�֣����и���ͬʱ��Ϸ������ " << endl;
    cout << " "<<endl;
}

void game_start()
{

	CGame *p = new CGame;
	cout << "=================================��ʼ��===============================" << endl;
	p->Show();
	int n = 0;
	for (int choise = 1; choise != 3;)
	{
		cout << "================================ϴ�ƽ��==============================" << endl;
		p->Shuffle();
		p->Deal();
		p->show_player();
		p->begin(n);
		cout << "================================���ƽ��==============================" << endl;
		p->show_win();
		p->Score();
		p->who_is_pig();
		cout << endl;
		n++;
		cout << "===============================���ֽ���================================" << endl;
		cout << "1.������Ϸ" << endl;
		cout << "2.���ز˵�" << endl;
		cout << "3.�˳���Ϸ" << endl;
		cout << "���������ѡ��" << endl;
		cin >> choise;
		if (choise == 2)
			display();
	}

}



void return_menu()//�������˵�
{
	int i;
	cout << "���������ѡ��" << endl;
	cout << "1.�������˵�" << endl;
	cout << "2.�˳�����" << endl;
	cin >> i;
	switch (i)
	{
	case 1: display(); break;
	case 2:exit(0);
	default:cout << "���������" << endl;
		Sleep(0); exit(0);
	}
}





int write(int score, string k)//д���ļ�
{
	ofstream out;
	out.open("score.txt", ios::out);
	if (!out)
	{
		cout << "�����޷���";
		exit(1);

	}
	string s1 = "���ֱ�����߷������:";
	out << s1 << k<< endl;

	return 0;
}

int read()//���ļ�
{
	ifstream in;
	in.open("score.txt", ios::in);

	if (!in)

	{
		cout << "can not open file";
		exit(1);//�˳�����
	}
	char ch;
	while (in.get(ch))
		cout << ch;

	in.close();
	return 0;
}

int main()
{
	display();
	return 0;
}