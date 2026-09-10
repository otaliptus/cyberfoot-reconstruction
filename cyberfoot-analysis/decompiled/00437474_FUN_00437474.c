// Address: 00437474
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00437474(int param_1,char param_2,undefined4 param_3)

{
  BOOL BVar1;
  HFONT pHVar2;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_170;
  undefined4 local_158 [70];
  LOGFONTA local_40;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar3 = extraout_DL;
    param_3 = extraout_ECX;
  }
  FUN_0047fbd8(param_1,0,param_3,0);
  local_158[0] = 0x154;
  BVar1 = SystemParametersInfoA(0x29,0,local_158,0);
  if (BVar1 != 0) {
    pHVar2 = CreateFontIndirectA(&local_40);
    FUN_0042a55c(*(undefined4 *)(param_1 + 0x68),pHVar2);
  }
  if (cVar3 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_170;
  }
  return param_1;
}

