// Address: 0042b300
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042b300(int *param_1,LONG *param_2,int param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  UINT c;
  LPCSTR lpString;
  UINT options;
  INT *lpDx;
  RECT local_18;
  int local_8;
  
  local_18.left = *param_2;
  local_18.top = param_2[1];
  local_18.right = param_2[2];
  local_18.bottom = param_2[3];
  local_8 = param_3;
  (**(code **)(*param_1 + 0x10))();
  FUN_0042b67c(param_1,DAT_0042b39c);
  uVar1 = param_1[0x15];
  options = uVar1 | 4;
  cVar2 = FUN_0042ac80(param_1[5]);
  if (cVar2 != '\x01') {
    options = uVar1 | 6;
  }
  if ((*(byte *)(param_1 + 0x15) & 0x80) != 0) {
    cVar2 = FUN_0042b248(param_1);
    if (cVar2 == '\x01') {
      iVar3 = FUN_0042b3e4(param_1,param_4);
      local_8 = local_8 + iVar3 + 1;
    }
  }
  lpDx = (INT *)0x0;
  c = FUN_00404ba4(param_4);
  lpString = (LPCSTR)FUN_00404da4(param_4);
  ExtTextOutA((HDC)param_1[1],local_8,param_5,options,&local_18,lpString,c,lpDx);
  (**(code **)(*param_1 + 0xc))();
  return;
}

