// Address: 00519874
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00519874(undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  BYTE *pBVar1;
  HPALETTE hpal;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_814 [1024];
  undefined2 local_414;
  undefined2 local_412;
  tagPALETTEENTRY local_410 [246];
  tagPALETTEENTRY local_38 [10];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar4 = &stack0xfffffffc;
  local_414 = 0x300;
  local_8._0_2_ = (undefined2)param_2;
  local_412 = (undefined2)local_8;
  local_8 = param_2;
  FUN_004032a8(local_410,0x400,0);
  iVar2 = 0x100;
  pBVar1 = &local_410[0].peFlags;
  do {
    *pBVar1 = '\x04';
    pBVar1 = pBVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (param_4 == '\0') {
    local_10 = 0;
  }
  else {
    hpal = GetStockObject(0xf);
    GetPaletteEntries(hpal,0,10,local_410);
    GetPaletteEntries(hpal,10,10,local_38);
    local_8 = 0xec;
    local_10 = 10;
    local_412 = 0x100;
  }
  local_c = FUN_005194fc(PTR_DAT_005193f0,1,local_8);
  uVar3 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xfffff7d4;
  FUN_00519594(local_c,param_1);
  FUN_00519578(local_c,local_814);
  *in_FS_OFFSET = uVar3;
  FUN_00403a84(local_c,uVar3,puVar4);
  return;
}

