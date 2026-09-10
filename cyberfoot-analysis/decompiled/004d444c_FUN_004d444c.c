// Address: 004d444c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

ushort * FUN_004d444c(ushort *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  
  while( true ) {
    for (; (*param_1 != 0 && (*param_1 < 0x21)); param_1 = param_1 + 1) {
    }
    if ((*param_1 != 0x22) || (param_1[1] != 0x22)) break;
    param_1 = param_1 + 2;
  }
  iVar4 = 0;
  puVar3 = param_1;
  while (0x20 < *puVar3) {
    if (*puVar3 == 0x22) {
      puVar3 = puVar3 + 1;
      while ((*puVar3 != 0 && (*puVar3 != 0x22))) {
        uVar1 = (int)(puVar3 + 1) - (int)puVar3;
        iVar2 = (int)uVar1 >> 1;
        if (iVar2 < 0) {
          iVar2 = iVar2 + (uint)((uVar1 & 1) != 0);
        }
        iVar4 = iVar4 + iVar2;
        puVar3 = puVar3 + 1;
      }
      if (*puVar3 != 0) {
        puVar3 = puVar3 + 1;
      }
    }
    else {
      uVar1 = (int)(puVar3 + 1) - (int)puVar3;
      iVar2 = (int)uVar1 >> 1;
      if (iVar2 < 0) {
        iVar2 = iVar2 + (uint)((uVar1 & 1) != 0);
      }
      iVar4 = iVar4 + iVar2;
      puVar3 = puVar3 + 1;
    }
  }
  FUN_004055c4(param_2,iVar4);
  iVar2 = FUN_00405250(*param_2);
  iVar4 = 0;
  while (0x20 < *param_1) {
    if (*param_1 == 0x22) {
      param_1 = param_1 + 1;
      while ((*param_1 != 0 && (*param_1 != 0x22))) {
        puVar3 = param_1 + 1;
        for (; param_1 < puVar3; param_1 = param_1 + 1) {
          *(ushort *)(iVar2 + iVar4 * 2) = *param_1;
          iVar4 = iVar4 + 1;
        }
      }
      if (*param_1 != 0) {
        param_1 = param_1 + 1;
      }
    }
    else {
      puVar3 = param_1 + 1;
      for (; param_1 < puVar3; param_1 = param_1 + 1) {
        *(ushort *)(iVar2 + iVar4 * 2) = *param_1;
        iVar4 = iVar4 + 1;
      }
    }
  }
  return param_1;
}

