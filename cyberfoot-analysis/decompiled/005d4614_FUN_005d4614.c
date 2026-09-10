// Address: 005d4614
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_005d4614(void)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  DAT_006d327c = 0;
  uVar1 = *(uint *)(PTR_DAT_0066ac78 + 0x634);
  if ((int)uVar1 < 0x15) {
    if (uVar1 < 0xb) {
      iVar5 = uVar1 + 1;
    }
    else if (uVar1 - 0xb < 10) {
      iVar5 = uVar1 - 10;
    }
  }
  else if (uVar1 - 0x15 < 10) {
    iVar5 = uVar1 - 0x14;
  }
  else if (uVar1 - 0x1f < 10) {
    iVar5 = uVar1 - 0x1e;
  }
  else if (uVar1 - 0x29 < 10) {
    iVar5 = uVar1 - 0x28;
  }
  *(int *)(PTR_DAT_0066ac78 + 0x644) = iVar5;
  uVar1 = *(uint *)(PTR_DAT_0066ac78 + 0x634);
  puVar3 = PTR_DAT_0066b418;
  if ((int)uVar1 < 0x15) {
    if (uVar1 < 0xb) {
      iVar5 = *(int *)(PTR_DAT_0066b418 + uVar1 * 4);
    }
    else {
      puVar3 = (undefined *)(uVar1 - 0x15);
      if (uVar1 - 0xb < 10) {
        iVar5 = *(int *)(PTR_DAT_0066b418 + uVar1 * 4 + -0x2c);
        puVar3 = PTR_DAT_0066b418;
      }
    }
  }
  else if (uVar1 - 0x15 < 10) {
    iVar5 = *(int *)(PTR_DAT_0066b418 + uVar1 * 4 + -0x54);
  }
  else if (uVar1 - 0x1f < 10) {
    iVar5 = *(int *)(PTR_DAT_0066b418 + uVar1 * 4 + -0x7c);
  }
  else {
    puVar3 = (undefined *)(uVar1 - 0x33);
    if (uVar1 - 0x29 < 10) {
      iVar5 = *(int *)(PTR_DAT_0066b418 + uVar1 * 4 + -0xa4);
      puVar3 = PTR_DAT_0066b418;
    }
  }
  iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b4b4,puVar3);
  if (-1 < iVar2) {
    iVar2 = iVar2 + 1;
    iVar4 = 0;
    do {
      if (iVar5 == *(int *)(*(int *)PTR_DAT_0066b4b4 + iVar4 * 0x30)) {
        DAT_006d327c = 1;
        return iVar5;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  DAT_006d327c = 0;
  return iVar5;
}

