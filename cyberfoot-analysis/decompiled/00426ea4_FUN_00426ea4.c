// Address: 00426ea4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00426ea4(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char extraout_DL;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  
  iVar2 = FUN_00403e50();
  FUN_004270f8(iVar2);
  if (*(int *)(iVar2 + 0x14) != 0) {
    while ((iVar1 = *(int *)(iVar2 + 0x14), iVar1 != 0 && (0 < *(int *)(iVar1 + 8)))) {
      piVar3 = (int *)FUN_0041e01c(iVar1,*(int *)(iVar1 + 8) + -1);
      (**(code **)(*piVar3 + 0x10))(piVar3,iVar2,1);
    }
    FUN_0040fe60(iVar2 + 0x14);
  }
  FUN_004270a0(iVar2);
  uVar4 = extraout_EDX;
  if (*(int *)(iVar2 + 4) != 0) {
    FUN_00427068(*(int *)(iVar2 + 4),iVar2);
    uVar4 = extraout_EDX_00;
  }
  FUN_0041e640(iVar2,CONCAT31((int3)((uint)uVar4 >> 8),extraout_DL) & 0xfffffffc);
  if ('\0' < extraout_DL) {
    FUN_00403e38(iVar2);
  }
  return;
}

