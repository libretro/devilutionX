//HEADER_GOES_HERE
#ifndef __ITEMS_H__
#define __ITEMS_H__

extern int itemactive[MAXITEMS];
extern int uitemflag;
extern int itemavail[MAXITEMS];
extern ItemStruct curruitem;
extern ItemGetRecordStruct itemrecord[MAXITEMS];
extern ItemStruct item[MAXITEMS + 1];
extern BOOL itemhold[3][3];
extern unsigned char *itemanims[35];
extern int UniqueItemFlag[128];
extern int numitems;
extern int gnNumGetRecords;

void InitItemGFX();
BOOL ItemPlace(int xp, int yp);
void AddInitItems();
void InitItems();
void CalcPlrItemVals(int p, BOOL Loadgfx);
void CalcPlrScrolls(int p);
void CalcPlrStaff(int pnum);
void CalcSelfItems(int pnum);
void CalcPlrItemMin(int pnum);
BOOL ItemMinStats(PlayerStruct *p, ItemStruct *x);
void CalcPlrBookVals(int p);
void CalcPlrInv(int p, BOOL Loadgfx);
void SetPlrHandItem(ItemStruct *h, int idata);
void GetPlrHandSeed(ItemStruct *h);
void GetGoldSeed(int pnum, ItemStruct *h);
void SetPlrHandSeed(ItemStruct *h, int iseed);
void SetPlrHandGoldCurs(ItemStruct *h);
void CreatePlrItems(int p);
BOOL ItemSpaceOk(int i, int j);
BOOL GetItemSpace(int x, int y, char inum);
void GetSuperItemSpace(int x, int y, char inum);
void GetSuperItemLoc(int x, int y, int *xx, int *yy);
void CalcItemValue(int i);
void GetBookSpell(int i, int lvl);
void GetStaffPower(int i, int lvl, int bs, unsigned char onlygood);
void GetStaffSpell(int i, int lvl, unsigned char onlygood);
void GetItemAttrs(int i, int idata, int lvl);
int RndPL(int param1, int param2);
int PLVal(int pv, int p1, int p2, int minv, int maxv);
void SaveItemPower(int i, int power, int param1, int param2, int minval, int maxval, int multval);
void GetItemPower(int i, int minlvl, int maxlvl, int flgs, int onlygood);
void GetItemBonus(int i, int idata, int minlvl, int maxlvl, int onlygood);
void SetupItem(int i);
int RndItem(int m);
int RndUItem(int m);
int RndAllItems();
int RndTypeItems(int itype, int imid);
int CheckUnique(int i, int lvl, int uper, BOOLEAN recreate);
void GetUniqueItem(int i, int uid);
void SpawnUnique(int uid, int x, int y);
void ItemRndDur(int ii);
void SetupAllItems(int ii, int idx, int iseed, int lvl, int uper, int onlygood, int recreate, int pregen);
void SpawnItem(int m, int x, int y, BOOL sendmsg);
void CreateItem(int uid, int x, int y);
void CreateRndItem(int x, int y, unsigned char onlygood, unsigned char sendmsg, int delta);
void SetupAllUseful(int ii, int iseed, int lvl);
void CreateRndUseful(int pnum, int x, int y, BOOL sendmsg);
void CreateTypeItem(int x, int y, unsigned char onlygood, int itype, int imisc, int sendmsg, int delta);
void RecreateItem(int ii, int idx, unsigned short ic, int iseed, int ivalue);
void RecreateEar(int ii, unsigned short ic, int iseed, int Id, int dur, int mdur, int ch, int mch, int ivalue, int ibuff);
void SpawnQuestItem(int itemid, int x, int y, int randarea, int selflag);
void SpawnRock();
void RespawnItem(int i, BOOL FlipFlag);
void DeleteItem(int ii, int i);
void ItemDoppel();
void ProcessItems();
void FreeItemGFX();
void GetItemFrm(int i);
void GetItemStr(int i);
void CheckIdentify(int pnum, int cii);
void DoRepair(int pnum, int cii);
void RepairItem(ItemStruct *i, int lvl);
void DoRecharge(int pnum, int cii);
void RechargeItem(ItemStruct *i, int r);
void PrintItemOil(char IDidx);
void PrintItemPower(char plidx, ItemStruct *x);
void DrawUTextBack();
void PrintUString(int x, int y, int cjustflag, char *str, int col);
void DrawULine(int y);
void DrawUniqueInfo();
void PrintItemMisc(ItemStruct *x);
void PrintItemDetails(ItemStruct *x);
void PrintItemDur(ItemStruct *x);
void UseItem(int p, int Mid, int spl);
BOOL StoreStatOk(ItemStruct *h);
BOOL SmithItemOk(int i);
int RndSmithItem(int lvl);
void BubbleSwapItem(ItemStruct *a, ItemStruct *b);
void SortSmith();
void SpawnSmith(int lvl);
BOOL PremiumItemOk(int i);
int RndPremiumItem(int minlvl, int maxlvl);
void SpawnOnePremium(int i, int plvl);
void SpawnPremium(int lvl);
BOOL WitchItemOk(int i);
int RndWitchItem(int lvl);
void SortWitch();
void WitchBookLevel(int ii);
void SpawnWitch(int lvl);
int RndBoyItem(int lvl);
void SpawnBoy(int lvl);
BOOL HealerItemOk(int i);
int RndHealerItem(int lvl);
void SortHealer();
void SpawnHealer(int lvl);
void SpawnStoreGold();
void RecreateSmithItem(int ii, int idx, int plvl, int iseed);
void RecreatePremiumItem(int ii, int idx, int lvl, int iseed);
void RecreateBoyItem(int ii, int idx, int lvl, int iseed);
void RecreateWitchItem(int ii, int idx, int lvl, int iseed);
void RecreateHealerItem(int ii, int idx, int lvl, int iseed);
void RecreateTownItem(int ii, int idx, unsigned short icreateinfo, int iseed, int ivalue);
void RecalcStoreStats();
int ItemNoFlippy();
void CreateSpellBook(int x, int y, int ispell, BOOL sendmsg, int delta);
void CreateMagicArmor(int x, int y, int imisc, int icurs, BOOL sendmsg, int delta);
void CreateMagicWeapon(int x, int y, int imisc, int icurs, BOOL sendmsg, int delta);
BOOL GetItemRecord(int nSeed, WORD wCI, int nIndex);
void NextItemRecord(int i);
void SetItemRecord(int nSeed, WORD wCI, int nIndex);
void PutItemRecord(int nSeed, WORD wCI, int nIndex);

/* rdata */

extern const PLStruct PL_Prefix[84];
extern const PLStruct PL_Suffix[96];
extern const UItemStruct UniqueItemList[91];

/* data */

extern ItemDataStruct AllItemsList[157];
extern unsigned char ItemCAnimTbl[169];
extern char *ItemDropStrs[35];
extern unsigned char ItemAnimLs[35];
extern int ItemDropSnds[35];
extern int ItemInvSnds[35];
extern int idoppely; // weak
extern int premiumlvladd[6];

#endif /* __ITEMS_H__ */
