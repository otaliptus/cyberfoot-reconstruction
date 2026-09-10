// Address: 004a9a04
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a9a04(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  HPALETTE pHVar2;
  byte *pbVar3;
  PALETTEENTRY *pPVar4;
  int *in_FS_OFFSET;
  int iStack_430;
  undefined1 *puStack_42c;
  undefined1 *puStack_428;
  undefined4 local_418;
  LOGPALETTE local_414 [128];
  int local_10;
  char local_9;
  undefined4 local_8;
  
  puStack_428 = &stack0xfffffffc;
  local_418 = 0;
  puStack_42c = &LAB_004a9b4e;
  iStack_430 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_430;
  local_8 = param_3;
  local_9 = FUN_004a66ac(param_1,param_2,param_3);
  if (local_9 != '\0') {
    if ((param_4 % 3 == 0) && (param_4 / 3 < 0x101)) {
      *(int *)(param_1 + 0x14) = param_4 / 3;
      FUN_004032a8(local_414,0x404,0);
      local_414[0].palVersion = 0x300;
      local_414[0].palNumEntries = *(WORD *)(param_1 + 0x14);
      pbVar3 = *(byte **)(param_1 + 4);
      if (-1 < *(int *)(param_1 + 0x14) + -1) {
        pPVar4 = local_414[0].palPalEntry;
        local_10 = *(int *)(param_1 + 0x14);
        do {
          pPVar4->peRed = *(BYTE *)(*(int *)(param_1 + 0xc) + 0x13d + (uint)*pbVar3);
          pPVar4->peGreen = *(BYTE *)(*(int *)(param_1 + 0xc) + 0x13d + (uint)pbVar3[1]);
          pPVar4->peBlue = *(BYTE *)(*(int *)(param_1 + 0xc) + 0x13d + (uint)pbVar3[2]);
          pPVar4->peFlags = '\0';
          pbVar3 = pbVar3 + 3;
          pPVar4 = pPVar4 + 1;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
      pHVar2 = CreatePalette(local_414);
      (**(code **)(**(int **)(param_1 + 0xc) + 0x38))(*(int **)(param_1 + 0xc),pHVar2);
    }
    else {
      local_9 = '\0';
      FUN_00406d44(PTR_PTR_0066b17c,&local_418);
      FUN_004aa278(*(undefined4 *)(param_1 + 0xc),PTR_DAT_004a4f2c,local_418);
    }
  }
  puVar1 = puStack_42c;
  *in_FS_OFFSET = param_4;
  puStack_42c = &LAB_004a9b55;
  iStack_430 = 0x4a9b4d;
  FUN_004048d4(&local_418,param_4,puVar1);
  return;
}

