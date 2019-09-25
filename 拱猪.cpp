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
void game_start();//开始
void game_rules();//游戏规则
void return_menu();//返回
void display();    //显示主菜单
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
	void set_card(char Suit, int Num)//初始化
	{
		num = Num;
		suit = Suit;
	}
	int get_num()//获取牌的大小
	{
		return num;
	}
	char get_suit()//获取牌的花色
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
	Card   myCard[13];//玩家原本拥有的的牌
	Card   winCard[52];//赢的牌
	int cardnum;                       //牌的张数
	int Wnum;                          // 赢牌张数
	int score;                          //分数
	string name;                      // 玩家名
public:
	Player(){ cardnum = 0; score = 0; Wnum = 0; }
	int Get_score(){ return score; }           //返回分数
	int Get_Wnum(){ return Wnum; }           //赢到的牌的张数 
	int Get_cardnum(){ return cardnum; }    //返回牌的张数
	string Get_name(){ return name; }		//返回名字
	int become_pig(){ if (score<=-1000) return 1; else return 0; }
	void add_score(int a){ score = score + a; }  //结算分数 
	Card Play();				     //打牌函数	
	void print1();                       //显示myCard
	void set_name(string n){ name = n; }      //创建名字
	void set_data(int i, int j, int k){ cardnum = i; score = j; Wnum = k; }    
	void Get_card(Card Get);           //收牌
	void show_winc();                    //显示赢到的牌
	void Wincard(Card win);              //收取赢到的牌
	int one_Score();                    //一轮得分
	int spa_q();                            //上轮黑桃q先手
	int spa_tre();                       //黑桃3先手

};
/////////////////////////////////////////////////////////////////

Card Player::Play()//打牌
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

void Player::print1()//显示玩家的牌
{
	cout << name << ":";
	for (int i = 0; i < cardnum; i++)
	{
		myCard[i].print();
	}
}
void Player::Get_card(Card Get)//接收发的牌
{
	myCard[cardnum] = Get;
	cardnum++;
}

void Player::show_winc()                    //显示赢的牌
{
	for (int i = 0; i<Wnum; i++)
		winCard[i].print();
}
void Player::Wincard(Card win)//收取赢得的牌
{
	winCard[Wnum] = win;
	Wnum = Wnum++;
}

int Player::one_Score()//计算所得的分
{
	int s = 0;//总分
	int n = 0;//红桃的张数
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

int Player::spa_tre()//判断是否为黑桃3
{
	int temp = 0;
	for (int i = 0; i < 13; i++)
	{
		if (myCard[i].get_num() == 3 && myCard[i].get_suit() == '\6')
			temp = 1;
	}
	return temp;
}
int Player::spa_q()//判断该玩家是否赢了黑桃Q
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
	Card   allCard[52];      // 全部可用牌
	Player  ptrPlayer[4];	// 4名玩家
public:
	CGame();// 构造函数（初始化）
	void Shuffle();	// 洗牌
	void Deal();		// 发牌
	void begin(int rounds);  //打牌
	void who_is_pig();//判断谁是猪
	void show_win();   //显示本轮各家赢牌
	void Score();      // 计分
	void Show();
	void show_player();   //显示玩家
	int is_first(int rounds);		//哪个玩家第一个出牌
};

CGame::CGame()//构造函数初始化
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

void CGame::Shuffle()//洗牌
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

void CGame::Deal()//发牌
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
				   cout << "当前出牌的玩家是：" << ptrPlayer[i].Get_name() << endl;
			   }
	}
		   break;
	default:
		for ( i = 0; i < 4; i++)
		{
			if (ptrPlayer[i].spa_q() == 1)
			{
				flag = i;
				cout << "当前出牌的玩家是：" << ptrPlayer[i].Get_name() << endl;
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


void CGame::begin(int rounds)//打牌
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

void CGame::show_win()//显示本轮各家赢的牌
{

	cout << "player1 :"; ptrPlayer[0].show_winc(); cout << endl;
	cout << "player2 :"; ptrPlayer[1].show_winc(); cout << endl;
	cout << "player3:"; ptrPlayer[2].show_winc(); cout << endl;
	cout << "player4:"; ptrPlayer[3].show_winc(); cout << endl;
}

void  CGame::who_is_pig()//判断谁是猪
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
			cout << ptrPlayer[i].Get_name() << "已经出局" << endl;
			n++;
		}
	}
	write(max.Get_score(), max.Get_name());
	if (n != 0)
	{
		cout << "游戏结束" << endl;
		
		exit(0);

	}

}



void CGame::Score()      
{
	cout << "============================本轮得分=================================" << endl;
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
	cout << "=================================玩家当前分数==================================" << endl;
	ptrPlayer[0].add_score(s1);
	ptrPlayer[1].add_score(s2);
	ptrPlayer[2].add_score(s3);
	ptrPlayer[3].add_score(s4);
	cout << endl;
	cout << "player1：" << ptrPlayer[0].Get_score() << endl;
	cout << "player2：" << ptrPlayer[1].Get_score() << endl;
	cout << "player3：" << ptrPlayer[2].Get_score() << endl;
	cout << "player4：" << ptrPlayer[3].Get_score() << endl;

}

void CGame::Show()//显示一副扑克牌
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

void CGame::show_player()//显示玩家
{
	int i = 0;
	for (i = 0; i<4; i++)
	{
		ptrPlayer[i].print1();

		cout << endl;
	}
}

////////////////////////////////////////////////////////





void display()//显示主菜单
{
	
	cout << "                *******************************************" << endl;
	cout << "                ************* 欢迎来到拱猪游戏 ************" << endl;
	cout << "                *************    1.游戏开始    ************" << endl;
	cout << "                *************    2.游戏规则    ************" << endl;
	cout << "                *************    3.高分记录    ************" << endl;
	cout << "                *************    4.退出游戏    ************" << endl;
	cout << "                *******************************************" << endl;
	cout << "请输入选择：" << endl;
	int n;
	cin >> n;
	switch (n)
	{
	case 1:game_start(); break;//开始游戏
	case 2:game_rules(); return_menu(); break;//游戏规则介绍
	case 3:read(); break;//游戏分数排行
	case 4:exit(0);//退出游戏
	}

}
//////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////
void game_rules()
{
	cout << "亲爱的玩家，拱猪规则如下：" << endl;
	cout << "1.每副牌有黑桃(S)、红心(H)、方块(D)、草花(C)四种花色（Suit）" << endl;
	cout << "每种花色各有十三张牌，共52张（13*4）。" << endl;
	cout << "牌点（Face）分别为：2、3、4、5、6、7、8、9、10、J、Q、K、A（牌点A最大，2最小）" << endl;
	cout << "2.洗牌（Shuffle）后，发牌（Deal）给四名玩家（Player）。" << endl;
	cout << "3.出牌（send）" << endl;
	cout << "每副牌的第一张由上副牌中得猪（SQ）者先出，但第一副牌由持有黑桃3的人先出，并且只能出黑桃3。" << endl;
	cout << "其后，各家按顺时针方向出牌。每轮每位玩家只能出一张牌，并且花色必须与第一家相同。" << endl;
    cout << "如果已没有同花色，则可以出其他花色，称为垫牌。垫牌的牌点记为最小。"<< endl;
	cout << "四家都出牌后，比较（compare）牌点大小；牌点大者赢得本轮，并在下一轮首先出牌。" << endl;
	cout << "4.计分" << endl;
	cout << "红心：2、3、4  不记分;5-10   -10分;J 	 -20分;Q    -30分; K   -40分;A    -50分" << endl;
	cout << "黑桃：Q （猪）	-100分;方块：J （羊）	+100分;草花：10（double）加倍 ×2" << endl;
	cout << "如果一方赢得了所有红心，则称为收齐，并记为正分。" << endl;
	cout << "5.游戏结果" << endl;
	cout << "当游戏中任意一方得分超过-1000分，则判负，同时游戏结束。 " << endl;
    cout << " "<<endl;
}

void game_start()
{

	CGame *p = new CGame;
	cout << "=================================初始化===============================" << endl;
	p->Show();
	int n = 0;
	for (int choise = 1; choise != 3;)
	{
		cout << "================================洗牌结果==============================" << endl;
		p->Shuffle();
		p->Deal();
		p->show_player();
		p->begin(n);
		cout << "================================打牌结果==============================" << endl;
		p->show_win();
		p->Score();
		p->who_is_pig();
		cout << endl;
		n++;
		cout << "===============================本轮结束================================" << endl;
		cout << "1.继续游戏" << endl;
		cout << "2.返回菜单" << endl;
		cout << "3.退出游戏" << endl;
		cout << "请输入你的选择：" << endl;
		cin >> choise;
		if (choise == 2)
			display();
	}

}



void return_menu()//返回主菜单
{
	int i;
	cout << "请输入你的选择：" << endl;
	cout << "1.返回主菜单" << endl;
	cout << "2.退出程序" << endl;
	cin >> i;
	switch (i)
	{
	case 1: display(); break;
	case 2:exit(0);
	default:cout << "程序结束！" << endl;
		Sleep(0); exit(0);
	}
}





int write(int score, string k)//写入文件
{
	ofstream out;
	out.open("score.txt", ios::out);
	if (!out)
	{
		cout << "错误，无法打开";
		exit(1);

	}
	string s1 = "本轮比赛最高分是玩家:";
	out << s1 << k<< endl;

	return 0;
}

int read()//读文件
{
	ifstream in;
	in.open("score.txt", ios::in);

	if (!in)

	{
		cout << "can not open file";
		exit(1);//退出程序
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