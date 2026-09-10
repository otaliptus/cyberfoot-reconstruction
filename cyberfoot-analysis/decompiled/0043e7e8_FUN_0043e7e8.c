// Address: 0043e7e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043e7e8(undefined4 param_1,int param_2,undefined4 param_3,uint param_4,char param_5,
                 LONG *param_6)

{
  uint format;
  int iVar1;
  LPCSTR pCVar2;
  HDC pHVar3;
  tagRECT *ptVar4;
  tagRECT local_14;
  
  local_14.left = *param_6;
  local_14.top = param_6[1];
  local_14.right = param_6[2];
  local_14.bottom = param_6[3];
  FUN_0042ac88(*(undefined4 *)(param_2 + 0x14),1);
  if (param_5 == '\x01') {
    OffsetRect(&local_14,1,1);
    FUN_0042a3a0(*(undefined4 *)(param_2 + 0xc),0xff000014);
    format = param_4 | 5;
    ptVar4 = &local_14;
    iVar1 = FUN_00404ba4(param_3);
    pCVar2 = (LPCSTR)FUN_00404da4(param_3);
    pHVar3 = (HDC)FUN_0042b5a8(param_2);
    DrawTextA(pHVar3,pCVar2,iVar1,ptVar4,format);
    OffsetRect(&local_14,-1,-1);
    FUN_0042a3a0(*(undefined4 *)(param_2 + 0xc),0xff000010);
    param_4 = param_4 | 5;
    ptVar4 = &local_14;
    iVar1 = FUN_00404ba4(param_3);
    pCVar2 = (LPCSTR)FUN_00404da4(param_3);
    pHVar3 = (HDC)FUN_0042b5a8(param_2);
    DrawTextA(pHVar3,pCVar2,iVar1,ptVar4,param_4);
  }
  else {
    param_4 = param_4 | 5;
    ptVar4 = &local_14;
    iVar1 = FUN_00404ba4(param_3);
    pCVar2 = (LPCSTR)FUN_00404da4(param_3);
    pHVar3 = (HDC)FUN_0042b5a8(param_2);
    DrawTextA(pHVar3,pCVar2,iVar1,ptVar4,param_4);
  }
  return;
}

