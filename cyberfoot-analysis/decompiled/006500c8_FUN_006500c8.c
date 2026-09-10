// Address: 006500c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_006500c8(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar1 = PTR_DAT_0066aca0;
  uVar4 = 0;
  iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066aca0);
  iVar5 = -1;
  if (-1 < iVar2) {
    iVar2 = iVar2 + 1;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      if (*(int *)(*(int *)puVar1 + 0x140 + iVar3 * 0x294) == 0x1d) break;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
      iVar5 = -1;
    } while (iVar2 != 0);
  }
  if (((*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) && (-1 < iVar5)) &&
     (0x50 < *(int *)(*(int *)puVar1 + 0x148 + iVar5 * 0x294))) {
    uVar4 = 1;
  }
  return uVar4;
}

