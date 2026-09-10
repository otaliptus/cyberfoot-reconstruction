// Address: 0042b274
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042b274(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  UINT c;
  LPCSTR lpString;
  INT *lpDx;
  
  (**(code **)(*param_1 + 0x10))();
  FUN_0042b67c(param_1,DAT_0042b2fc);
  cVar1 = FUN_0042b248(param_1);
  if (cVar1 == '\x01') {
    iVar2 = FUN_0042b3e4(param_1,param_4);
    param_2 = param_2 + iVar2 + 1;
  }
  lpDx = (INT *)0x0;
  c = FUN_00404ba4(param_4);
  lpString = (LPCSTR)FUN_00404da4(param_4);
  ExtTextOutA((HDC)param_1[1],param_2,param_3,param_1[0x15],(RECT *)0x0,lpString,c,lpDx);
  iVar2 = FUN_0042b3e4(param_1,param_4);
  FUN_0042b064(param_1,iVar2 + param_2,param_3);
  (**(code **)(*param_1 + 0xc))();
  return;
}

