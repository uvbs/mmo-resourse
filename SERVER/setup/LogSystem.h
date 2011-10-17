#pragma once

class CLogSystem
{
public:
	CLogSystem(void);
	~CLogSystem(void);

private:
	struct tagLogSystem
	{
		//////////////
		// ��־ϵͳ //
		//////////////

		//��Ʒ���
		bool	bGoodsTradeLog;			//������־
		bool	bGoodsShopLog;			//�̵꽻��

		bool	bGoodsGetFromRegion;	//ʰȡ
		bool	bGoodsBuyFromNPC;		//��NPC����

		bool	bGoodsSellToNPC;		//���۵�NPC
		bool	bGoodsDropToRegion;		//������ʧ
		bool	bGoodsLostByBroken;		//����ʧ
		bool	bGoodsLostByUpgrade;	//������ʧ
		bool	bGoodsLostByDead;		//������ʧ
		bool	bGoodsDepotSet;
		bool	bGoodsDepotGet;
		bool	bGoodsBankSet;
		bool	bGoodsBankGet;

		bool	bGoodsSplit;			// ���
		bool	bGoodsEnhange;			// ����
		bool	bGoodsMake;				// �ϳ�
		bool	bGoodsUesed;			// ʹ��

		bool	bGoodsUpgradeSuccess;	// �����ɹ�
		bool	bGoodsUpgradeFailure;	// ����ʧ��

		bool	bGoodsGemExchange;		// ��ʯ�һ�
		bool	bGoodsJewelryMade;		// ��������


		bool	bGoodsLargess;			// ������Ʒ

		//����ȼ�
		bool	bExpDecrease;			//��������
		bool	bExpIncrease;			//�������

		bool	bLevelLog;				//�ȼ��仯

		bool	bTitileLog;				//���ݱ仯

		bool	bDeleteLog;				//ɾ����־

		bool	bDiedLog;				//������־

		//�������
		bool	bTeamJion;				//�����Ա
		bool	bTeamLeave;				//�뿪��Ա

		//pk���
		bool	bPlayerKiller;			//���ֹ���
		bool	bPlayerKilled;			//pk����

		// ������
		bool	bFactionCreate;			//�������
		bool	bFactionDisband;		//��ɢ���
		bool	bFactionApply;			//�������
		bool	bFactionQuit;			//�뿪���

		bool	bFactionJoin;			//ͬ�����
		bool	bFactionFireOut;		//�������

		bool	bFactionTitleChanged;	//��Աͷ�α��
		bool	bFactionPurviewAdd;		//��ԱȨ�ޱ��
		bool	bFactionPurviewSub;		//��ȥȫ��
		bool	bFactionMasterChnaned;	//���������־

		bool	bFactionExp;			//��ᾭ����־
		bool	bFactionLel;			//���ȼ���־

		bool	bNormalChat;			//��Ļ����
		bool	bRegionChat;			//��������
		bool	bFactionChat;			//�������
		bool	bUnionChat;				//��������
		bool	bTeamChat;				//��������
		bool	bPrivateChat;			//˽��
		bool	bGMCommand;				//GMָ��

		bool	bChMap0;				//�������л���ͼ
		bool	bChMap1;				//���������л���ͼ
		bool	bChMap2;				//���������л���ͼ

		bool	bCardDealing;			//�㿨������־

		bool	bIncrement;			//�㿨������־
	};

	static tagLogSystem m_stSetting;

public:
	static bool Load(const char* filename);			// ���ļ���ȡ�б�

	static bool AddToByteArray(vector<BYTE>* pByteArray);		// ���ӵ�CByteArray
	static bool DecordFromByteArray(BYTE* pByte, long& pos);	// ����

	static tagLogSystem* GetSetting()	{return &m_stSetting;}

};