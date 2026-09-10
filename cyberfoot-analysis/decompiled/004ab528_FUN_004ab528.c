// Address: 004ab528
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ab528(int param_1,HANDLE param_2,char param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  PALETTEENTRY *pPVar3;
  HPALETTE pHVar4;
  uint uVar5;
  LOGPALETTE local_430 [128];
  undefined1 local_2c [18];
  byte local_1a;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_5;
  
  local_5 = param_3;
  GetObjectA(param_2,0x18,local_2c);
  FUN_004a9fec(param_1);
  iVar1 = FUN_004a6bf8(PTR_PTR_004a55e0,1,param_1);
  FUN_004ab218(iVar1,param_2,local_2c);
  if (*(char *)(iVar1 + 0x20) == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_004a6480(PTR_PTR_004a5724,1,param_1);
  }
  if (local_5 == '\0') {
    local_14 = 0;
  }
  else {
    local_14 = FUN_004a6480(PTR_PTR_004a5790,1,param_1);
  }
  local_c = FUN_004a6480(PTR_PTR_004a57fc,1,param_1);
  local_10 = FUN_004a6480(PTR_PTR_004a5574,1,param_1);
  FUN_004a62d8(*(undefined4 *)(param_1 + 0x138),iVar1);
  if (*(char *)(iVar1 + 0x20) != '\0') {
    FUN_004a62d8(*(undefined4 *)(param_1 + 0x138),iVar2);
  }
  if (local_5 != '\0') {
    FUN_004a62d8(*(undefined4 *)(param_1 + 0x138),local_14);
  }
  FUN_004a62d8(*(undefined4 *)(param_1 + 0x138),local_c);
  FUN_004a62d8(*(undefined4 *)(param_1 + 0x138),local_10);
  if (*(char *)(iVar1 + 0x20) != '\0') {
    *(int *)(iVar2 + 0x14) = 1 << (local_1a & 0x1f);
    FUN_004032a8(local_430,0x404,0);
    local_430[0].palVersion = 0x300;
    local_430[0].palNumEntries = 1 << (local_1a & 0x1f);
    uVar5 = (uint)local_430[0].palNumEntries;
    if (-1 < (int)(uVar5 - 1)) {
      iVar2 = 0;
      pPVar3 = local_430[0].palPalEntry;
      do {
        pPVar3->peRed = *(BYTE *)(iVar1 + 0x4b + iVar2 * 4);
        pPVar3->peGreen = *(BYTE *)(iVar1 + 0x4a + iVar2 * 4);
        pPVar3->peBlue = *(BYTE *)(iVar1 + 0x49 + iVar2 * 4);
        iVar2 = iVar2 + 1;
        pPVar3 = pPVar3 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    pHVar4 = CreatePalette(local_430);
    FUN_004ac29c(param_1,pHVar4,0);
  }
  if (local_5 != '\0') {
    FUN_004a73e0(local_14,param_4);
  }
  return;
}

